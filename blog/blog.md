---
title: Blog Posts
layout: default
permalink: /blog/
---

{% include extras.html %}

### Learning Blog Posts

<ol>
{% assign sorted_pages = site.pages | sort:"order" %}
{% for p in sorted_pages %}
  {% if p.tag == "learning" %}
  <li id="{{ p.order }}">
    <a href="{{ p.url }}">{{ p.title }}</a>
  </li>
  {% endif %}
{% endfor %}
</ol>

### General Blog Posts
<ol>
{% assign sorted_pages = site.pages | sort:"order" %}
{% for p in sorted_pages %}
  {% if p.tag == "general" %}
  <li id="{{ p.order }}">
    <a href="{{ p.url }}">{{ p.title }}</a>
  </li>
  {% endif %}
{% endfor %}
</ol>

### Stories Blog Posts
<ol>
{% assign sorted_pages = site.pages | sort:"order" %}
{% for p in sorted_pages %}
  {% if p.tag == "stories" %}
  <li id="{{ p.order }}">
    <a href="{{ p.url }}">{{ p.title }}</a>
  </li>
  {% endif %}
{% endfor %}
</ol>
