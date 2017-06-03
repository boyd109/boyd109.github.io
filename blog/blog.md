---
title: Blog Posts
layout: default
permalink: /blog/
category: learning
---

{% include extras.html %}
<h1>Posts</h1>
<ol>
{% for p in site.pages %}
  {% if p.tag == page.category %}
  <li>
    <a href="{{ p.url }}">{{ p.title }}</a>
  </li>
  {% endif %}
{% endfor %}
</ol>
