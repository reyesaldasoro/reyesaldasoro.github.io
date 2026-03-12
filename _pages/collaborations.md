---
layout: archive
title: "Collaborations"
permalink: /collaborations/
author_profile: true
---
{% include base_path %}


<img src="{{ "NetworkInverted.png" | prepend: "/images/" | prepend: base_path }}" alt="">

<div class="grid">
  <div class="wrapper">
    {% for post in site.collaborations %}
      {% include archive-single-proj.html type="grid" %}
    {% endfor %}
  </div>
</div>
