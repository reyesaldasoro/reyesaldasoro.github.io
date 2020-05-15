---
layout: archive
title: "Resources"
permalink: /resources/
author_profile: true
---
{% include base_path %}

<div class="grid">
  <div class="wrapper">
    {% for post in site.resources %}
      {% if post.type != "from_lab" and post.type != "other" %}
        {% include archive-single-proj.html type="grid" %}
      {% endif %}
    {% endfor %}
  </div>
</div>

<h2>By others with our contribution</h2>
<div class="grid">
  <div class="wrapper">
    {% for post in site.resources %}
      {% if post.type contains "from_others" %}
        {% include archive-single-proj.html type="grid" %}
      {% endif %}
    {% endfor %}
  </div>
</div>

<h2>Other tools</h2>
<div class="grid">
  <div class="wrapper">
    {% for post in site.resources %}
      {% if post.type contains "other" %}
        {% include archive-single-proj.html type="grid" %}
      {% endif %}
    {% endfor %}
  </div>
</div>
