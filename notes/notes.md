---
title: My Notes
layout: page
permalink: /notes/
---

## 2B Term
<table style="width:100%" >
 <tr>
   <td><a id="colouring" href="{{site.baseurl}}/cs116/">CS 116</a></td>
   <td><a id="colouring" href="{{site.baseurl}}/math135/">Math 135</a></td>
   <td><a id="colouring" href="{{site.baseurl}}/stat230/">Stat 230</a></td>
   <td><a id="colouring" href="{{site.baseurl}}/clas104/">Clas 104</a></td>
 </tr>
</table>

## 3A Term
<table style="width:100%" >
 <tr>
   <td><a id="colouring" href="{{site.baseurl}}/cs136/">CS 136</a></td>
   <td><a id="colouring" href="{{site.baseurl}}/math136/">Math 136</a></td>
   <td><a id="colouring" href="{{site.baseurl}}/stat231/">Stat 231</a></td>
   <td>Engl 109 (No digital notes)</a></td>
   <td><a id="colouring" href="{{site.baseurl}}/music100/">Music 100</a></td>
 </tr>
</table>


### Notes for Later Terms will be uploaded here!


## Miscellaneous Info Session Notes:
<html>

<ol>
{% for post in site.categories[other] reversed %}
  <a href="#{{ post.id | remove:"/" }}">
  <li>{{ post.title }}</li></a>
{% endfor %}
</ol>

{% for post in site.categories[other] reversed %}

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
