---
layout: default1
---
<html>

{% include extras.html %}
<h1>Table of Contents</h1>
<ol>
{% for p in site.pages %}
  {% if p.tag == page.category %}
  <li>
    <a href="{{ p.url }}">{{ p.title }}</a>
  </li>
  {% endif %}
{% endfor %}
</ol>


{% for p in site.pages %}
  {% if p.tag == page.category %}
  <h2>{{ p.title }}</h2>
  <p>{{ p.content }}</p>
  {% endif %}
{% endfor %}  

<html>
