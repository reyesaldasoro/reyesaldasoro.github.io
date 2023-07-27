---
layout: archive
title: "Publications"
permalink: /publications/
author_profile: true
---
{% include base_path %}


You can find the complete publication list on my -> <a href="https://scholar.google.co.uk/citations?hl=en&user=DLbXRxoAAAAJ&view_op=list_works">
<span style="color:gray">Google Scholar profile</span></a> <-.


<h2> Books, Edited Books, Book Chapters</h2>

<ul style="margin:0;padding:0">
{% for post in site.publications reversed %}

  {% if post.type contains 'Book' %}
    {% include archive-single-pub.html %}
  {% endif %}
  {% if forloop.last %}</ul>{% endif %}

{% endfor %}


<ul style="margin:0;padding:0">
{% for post in site.publications reversed %}

  {% assign currentdate = post.date | date: "%Y" %}
  {% if currentdate != date %}
    {% unless forloop.first %}</ul>{% endunless %}
    <h2 id="y{{post.date | date: "%Y"}}"><span style="color:gray">{{ currentdate }}</span></h2>
    <ul style="margin:0;padding:0">
    {% assign date = currentdate %}
  {% endif %}
  {% if post.authors contains 'Reyes-Aldasoro' %}
    {% include archive-single-pub.html %}
  {% endif %}
  {% if forloop.last %}</ul>{% endif %}

{% endfor %}
