---
layout: default
---

will want to change the href to the # on the page (anchors)

{% include extras.html %}
<h1>Table of Contents</h1>
<ol>
{% for post in site.categories[page.category] reversed %}
  <a href="{{ post.url | prepend: site.baseurl }}">
  <li name="page.id">{{ post.title }}</li></a>
{% endfor %}
</ol>

{% for post in site.categories[page.category] reversed %}
<p>{{ post.date | date: '%B %d, %Y' }}</p>
<hr>
  <h2>{{ post.title }}</h2>
<div>
  {{ post.content }}
</div>
{% endfor %}
