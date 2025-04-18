---
title: "FatNet: High-Resolution Kernels for Classification Using Fully Convolutional Optical Neural Networks"
collection: publications
date: 2023-03-01
venue: "AI"
authors: "Riad Ibadulla, Thomas M. Chen,  Constantino Carlos Reyes-Aldasoro"
paperurl: https://www.mdpi.com/2673-2688/4/2/18
type: Paper
doi: 10.3390/ai4020018
theme: "imageprocessing, ML_AI_DL"
---
<h2> Abstract </h2>   <br>  
This paper describes the transformation of a traditional in silico classification network into an optical fully convolutional neural network with high-resolution feature maps and kernels. When using the free-space 4f system to accelerate the inference speed of neural networks, higher resolutions of feature maps and kernels can be used without the loss in frame rate. We present FatNet for the classification of images, which is more compatible with free-space acceleration than standard convolutional classifiers. It neglects the standard combination of convolutional feature extraction and classifier dense layers by performing both in one fully convolutional network. This approach takes full advantage of the parallelism in the 4f free-space system and performs fewer conversions between electronics and optics by reducing the number of channels and increasing the resolution, making this network faster in optics than off-the-shelf networks. To demonstrate the capabilities of FatNet, it was trained with the CIFAR100 dataset on GPU and the simulator of the 4f system. A comparison of the results against ResNet-18 shows 8.2 times fewer convolution operations at the cost of only 6% lower accuracy. This demonstrates that the optical implementation of FatNet results in significantly faster inference than the optical implementation of the original ResNet-18. These are promising results for the approach of training deep learning with high-resolution kernels in the direction toward the upcoming optics era.

{% include paper-research-resources.html %}
