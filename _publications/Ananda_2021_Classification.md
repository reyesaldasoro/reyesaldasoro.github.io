---
title: "Classification and Visualisation of Normal and Abnormal Radiographs; A Comparison between Eleven Convolutional Neural Network Architectures"
collection: publications
date: 2021-09-09
venue: "Sensors (Basel)"
authors: "Ananda Ananda, Kwun Ho Ngan, Cefa Karabağ, Aram Ter-Sarkisov, Eduardo Alonso, Constantino Carlos Reyes-Aldasoro"
paperurl: https://www.mdpi.com/1424-8220/21/16/5381
type: Journal
doi: 10.3390/s21165381
theme: "radiology, medicalimaging, ML_AI_DL"
---

<h2> Abstract </h2>  <br>
This paper investigates the classification of radiographic images with eleven convolutional neural network (CNN) architectures (GoogleNet, VGG-19, AlexNet, SqueezeNet, ResNet-18, Inception-v3, ResNet-50, VGG-16, ResNet-101, DenseNet-201 and Inception-ResNet-v2). The CNNs were used to classify a series of wrist radiographs from the Stanford Musculoskeletal Radiographs (MURA) dataset into two classes—normal and abnormal. The architectures were compared for different hyper-parameters against accuracy and Cohen’s kappa coefficient. The best two results were then explored with data augmentation. Without the use of augmentation, the best results were provided by Inception-ResNet-v2 (Mean accuracy = 0.723, Mean kappa = 0.506). These were significantly improved with augmentation to Inception-ResNet-v2 (Mean accuracy = 0.857, Mean kappa = 0.703). Finally, Class Activation Mapping was applied to interpret activation of the network against the location of an anomaly in the radiographs

{% include paper-research-resources.html %}
