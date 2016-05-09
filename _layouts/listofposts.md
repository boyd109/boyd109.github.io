---
layout: default
---
<html>

{% include extras.html %}
<h1>Table of Contents</h1>
<ol>
{% for post in site.categories[page.tag] reversed %}
  <a href="#{{ post.id | remove:"/" }}">
  <li>{{ post.title }}</li></a>
{% endfor %}
</ol>

{% for post in site.categories[page.tag] reversed %}

<hr>
  <a name="{{ post.id | remove:"/"}}"></a>
  <br>
  <br>
  <h1>{{ post.title }}</h1>
  <strong><p>{{ post.date | date: '%B %d, %Y' }}</p></strong>

<div>
  {{ post.content }}
</div>
{% endfor %}

<html>
