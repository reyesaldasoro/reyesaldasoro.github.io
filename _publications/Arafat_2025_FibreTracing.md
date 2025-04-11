---
title: "Fibre tracing in biomedical images: An objective comparison between seven algorithms"
collection: publications
date: 2025-04-10
venue: "PLOS One"
authors: "Youssef Arafat,   Cristina Cuesta-Apausa, Esther Castellano, Constantino Carlos Reyes-Aldasoro"
paperurl: https://journals.plos.org/plosone/article?id=10.1371/journal.pone.0320006
type: Paper
doi: 10.1371/journal.pone.0320006
theme: "cancer, medicalimaging, ML_AI_DL"
---
<h2> Abstract </h2>   <br>  
Obtaining the traces and the characteristics of elongated structures is an important task in computer vision pipelines. In biomedical applications, the analysis of traces of vasculature, nerves or fibres of the extracellular matrix can help characterise processes like angiogenesis or the effect of a certain treatment. This paper presents an objective comparison of six existing methodologies (Edge detection, CT Fire, Scale Space, Twombli, U-Net and Graph Based) and one novel approach called Trace Ridges to trace biomedical images with fibre-like structures. Trace Ridges is a fully automatic and fast algorithm that combines a series of image-processing algorithms including filtering, watershed transform and edge detection to obtain an accurate delineation of the fibre-like structures in a rapid time. To compare the algorithms, four biomedical data sets with vastly distinctive characteristics were selected. Ground truth was obtained by manual delineation of the fibre-like structures. Three pre-processing filtering options were used as a first step: no filtering, Gaussian low-pass and DnCnn, a deep-learning filtering. Three distance error metrics (total, average and maximum distance from the obtained traces to the ground truth) and processing time were calculated. It was observed that no single algorithm outperformed the others in all metrics. For the total distance error, which was considered the most significative, Trace Ridges ranked first, followed by Graph Based, U-Net, Twombli, Scale Space, CT Fire and Edge Detection. In terms of speed, Trace Ridges ranked second, only slightly slower than Edge Detection. Code is freely available at github.com/youssefarafat/Trace_Ridges.

{% include paper-research-resources.html %}
