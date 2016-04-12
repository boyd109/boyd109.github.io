---
layout: default
---

will want to change the href to the # on the page (anchors)

{% include extras.html %}
<h1>Table of Contents</h1>
<ol>
{% for post in site.categories[page.tag] reversed %}
  <a href="#{{page.id}}">
  <li>{{ post.title }}</li></a>
{% endfor %}
</ol>

{% for post in site.categories[page.tag] reversed %}
<p>{{ post.date | date: '%B %d, %Y' }}</p>
<hr>
  <h2 name="{{page.id}}">{{ post.title }}</h2>
<div>
  {{ post.content }}
</div>
{% endfor %}
