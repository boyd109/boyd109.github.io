---
title: Blog Posts
layout: default
permalink: /blog/
---

{% include extras.html %}

### Learning Blog Posts

Blog posts aimed towards undergrads with some useful information.
<ol>
  {% assign sorted_pages = site.pages | sort:"order" %}
  {% for p in sorted_pages %}
    {% if p.tag == "learning" and p.finished %}
    <li id="{{ p.order }}">
      <a href="{{ p.url }}">{{ p.title }}</a>
    </li>
    {% endif %}
  {% endfor %}
</ol>

### Co-op Blog Posts

Blog posts focused mainly on the Waterloo co-op program and my co-op experiences.
<ol>
  {% assign sorted_pages = site.pages | sort:"order" %}
  {% for p in sorted_pages %}
    {% if p.tag == "co-op" and p.finished %}
      <li id="{{ p.order }}">
        <a href="{{ p.url }}">{{ p.title }}</a>
      </li>
    {% endif %}
  {% endfor %}
</ol>

### General Blog Posts

Blog posts with non-academic topics.

<ol>
  {% assign sorted_pages = site.pages | sort:"order" %}
  {% for p in sorted_pages %}
    {% if p.tag == "general" and p.finished %}
    <li id="{{ p.order }}">
      <a href="{{ p.url }}">{{ p.title }}</a>
    </li>
    {% endif %}
  {% endfor %}
</ol>

### Stories

Longer stories from my undergrad.

<ol>
  {% assign sorted_pages = site.pages | sort:"order" %}
  {% for p in sorted_pages %}
    {% if p.tag == "stories" and p.finished %}
    <li id="{{ p.order }}">
      <a href="{{ p.url }}">{{ p.title }}</a>
    </li>
    {% endif %}
  {% endfor %}
</ol>

### Weekly Blog Posts

[Weekly Posts](/weekly)
