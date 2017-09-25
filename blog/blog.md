---
title: Blog Posts
layout: default
permalink: /blog/
category: learning
---

{% include extras.html %}
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
