---
title: "Real time multi-modal super-resolution microscopy through Super-Resolution Radial Fluctuations (SRRF-Stream)"
collection: publications
date: 2019-02-22
venue: 'SPIE'
authors: 'Justin Cooper, Mark Browne, Hugh Gribben, Martin Catney, Colin Coates, Alan Mullan, Geraint Wilde, Ricardo Henriques'
paperurl: https://www.spiedigitallibrary.org/conference-proceedings-of-spie/10884/1088418/Real-time-multi-modal-super-resolution-microscopy-through-Super-Resolution/10.1117/12.2510761.short?SSO=1
doi: 10.1117/12.2510761
type: 'Conference Paper, Corresponding author'
theme: "methods"
resources: srrf
---

<h2> Abstract </h2>
<p align= "justify">
Super-resolution radial fluctuations (SRRF) is a combination of temporal fluctuation analysis and localization microscopy. One of the key differences between SRRF and other super-resolution methods is its applicability to live-cell dynamics because it functions across a very wide range of fluorophore densities and excitation powers. SRRF is applied to data from imaging modes which include widefield, TIRF and confocal, where short frame bursts (e.g. 50 frames) can be processed to deliver spatial resolution enhancements similar to or better than structured illumination microscopy (SIM). On the other hand, with sparse data e.g. stochastic optical reconstruction microscopy (STORM), SRRF can deliver resolution similar to Gaussian fitting localization methods. Thus, SRRF could provide a route to super-resolution without the need for specialized optical hardware, exotic probes or very high-power densities. We present a fast GPUbased SRRF algorithm termed “SRRF-Stream” and apply it to imagery from an iXon EMCCD coupled to a multi-modal imaging platform, Dragonfly. The new implementation is <300 times faster than the standard CPU version running on an Intel Xeon 3.5GHz 4 core processor, and < 20 times faster than the NanoJ GPU implementation, while also being integrated with acquisition for real time use. In this paper we explore the image resolution and quality with EMCCD and sCMOS cameras and various fluorophores including fluorescent proteins and organic dyes.

{% include paper-research-resources.html %}
