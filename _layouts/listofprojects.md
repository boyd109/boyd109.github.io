---
layout: default1
---
<html>

{% include extras.html %}
<h1>Table of Contents</h1>
<ol>
{% assign sorted_pages = site.pages | sort:"order" %}
{% for p in sorted_pages %}
  {% if p.tag == page.category %}
  <li id="{{ p.order }}">
    <a href="{{ p.url }}">{{ p.title }}</a>
  </li>
  {% endif %}
{% endfor %}
</ol>


{% assign sorted_pages = site.pages | sort:"order" %}
{% for p in sorted_pages %}
  {% if p.tag == page.category %}
  <h2>{{ p.title }}</h2>
  <p>{{ p.content }}</p>
  {% endif %}
{% endfor %}  

</html>
