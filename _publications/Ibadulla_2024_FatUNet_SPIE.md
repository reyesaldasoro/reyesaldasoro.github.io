---
title: "Fat-U-Net: Non-Contracting U-Net for Free-Space Optical Neural Networks"
collection: publications
date: 2024-01-09
venue: "AI and Optical Data Sciences V"
authors: Riad Ibadulla, Constantino Carlos Reyes-Aldasoro, Thomas M. Chen"
paperurl: https://www.spiedigitallibrary.org/conference-proceedings-of-spie/12903/1290308/Fat-U-Net--non-contracting-U-Net-for-free/10.1117/12.3008618.short
type: Conference
doi: 10.1117/12.3008618
theme: "imageprocessing, ML_AI_DL"
---
<h2> Abstract </h2>   <br>  
This paper describes the advantages and disadvantages of adapting the U-Net architecture from a traditional GPU to a 4f free-space optical environment. The implementation is based on an optical-based acceleration called FatNet and thus this adaption is called Fat-U-Net. Fat-U-Net neglects the pooling operations in UNet, but maintains a similar number of weights and pixels per layer as U-Net. Our results demonstrate that the conversion to Fat-U-Net offers significant improvement in speed for segmentation tasks, with Fat-U-Net achieving a remarkable ×538 acceleration in inference compared to U-Net when both are run on optical devices and x37 acceleration in inference compared to the results provided by U-Net on GPU. The performance loss after conversion remains minimal in two datasets, with reductions of 4.24% in IoU for the Oxford IIIt pet dataset and 1.76% in IoU of HeLa cells nucleus segmentation.

{% include paper-research-resources.html %}
