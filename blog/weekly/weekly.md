---
title: Weekly Links
layout: default
permalink: /weekly/
---

{% include extras.html %}

Inspired by [Lawrence](https://www.wawrencelu.com/).

<ol>
{% assign sorted_pages = site.pages | sort: 'date' | reverse %}
  {% for p in sorted_pages %}
    {% if p.tag == "weekly" %}
    <a href="{{ p.url }}">
      <h2>{{ p.title }}</h2>
    </a>
    <h4>{{ p.date }}</h4>
    <p>{{ p.content }}</p>
    {% endif %}
  {% endfor %}
</ol>
