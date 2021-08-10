---
title: "Radiography Classification: A Comparison between Eleven Convolutional Neural Networks"
collection: publications
date: 2020-10-19
venue: "Fourth International Conference on Multimedia Computing, Networking and Applications (MCNA)"
authors: "Ananda Ananda, Cefa Karabağ, Aram Ter-Sarkisov, Eduardo Alonso, Constantino Carlos Reyes-Aldasoro"
paperurl: https://ieeexplore.ieee.org/document/9264285
type: Conference
doi: 10.1109/MCNA50957.2020.9264285
theme: "radiology, medicalimaging"
---

<h2> Abstract </h2>  <br>
This paper investigates the classification of normal and abnormal radiographic images. Eleven convolutional neural network architectures (GoogleNet, Vgg-19, AlexNet, SqueezeNet, ResNet-18, Inception-v3, ResNet-50, Vgg-16, ResNet-101, DenseNet-201 and Inception-ResNet-v2) were used to classify a series of x-ray images from Stanford Musculoskeletal Radiographs (MURA) dataset corresponding to the wrist images of the data base. For each architecture, the results were compared against the known labels (normal / abnormal) and then the following metrics were calculated: accuracy (labels correctly classified) and Cohen's kappa (a measure of agreement) following MURA guidelines. Numerous experiments were conducted by changing classifiers (Adam, Sgdm, RmsProp), the number of epochs, with/without data augmentation. The best results were provided by InceptionResnet-v2 (Mean accuracy = 0.723, Mean Kappa = 0.506). Interestingly, these results lower than those reported in the Leaderboard of MURA. We speculate that to improve the results from basic CNN architectures several options could be tested, for instance: pre-processing, post-processing or domain knowledge, and ensembles.

{% include paper-research-resources.html %}
