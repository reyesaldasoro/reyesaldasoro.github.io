---
title: "FatNet: High Resolution Kernels for Classification Using Fully Convolutional Optical Neural Networks"
collection: publications
date: 2022-10-22
venue: "arXiv"
authors: "Riad Ibadulla, Thomas M. Chen, Constantino Carlos Reyes-Aldasoro"
paperurl:
type: Pre-print
doi:  10.48550/arXiv.2210.16914
theme: "imageprocessing"
resources: " "
---
<h2> Abstract </h2>  <br>
This paper describes the transformation of a traditional in-silico classification network into an optical fully convolutional neural network with high-resolution feature maps and kernels. When using the free-space 4f system to accelerate the inference speed of neural networks, higher resolutions of feature maps and kernels can be used without the loss in frame rate. We present FatNet for the classification of images, which is more compatible with free-space acceleration than standard convolutional classifiers. It neglects the standard combination of convolutional feature extraction and classifier dense layers by performing both in one fully convolutional network. This approach takes full advantage of the parallelism in the 4f free-space system and performs fewer conversions between electronics and optics by reducing the number of channels and increasing the resolution, making the network faster in optics than off-the-shelf networks. To demonstrate the capabilities of FatNet, it trained with the CIFAR100 dataset on GPU and the simulator of the 4f system, then compared the results against ResNet-18. The results show 8.2 times fewer convolution operations at the cost of only 6% lower accuracy compared to the original network. These are promising results for the approach of training deep learning with high-resolution kernels in the direction towards the upcoming optics era.


{% include paper-research-resources.html %}
