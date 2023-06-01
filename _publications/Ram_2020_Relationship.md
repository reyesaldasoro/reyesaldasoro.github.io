---
title: "The relationship between Fully Connected Layers and number of classes for the analysis of retinal images"
collection: publications
date: 2020-03-18
venue: arXiv
authors: "Ajna Ram, Constantino Carlos Reyes-Aldasoro"
paperurl: https://arxiv.org/abs/2004.03624
type: Pre-print
theme: "imageprocessing, medicalimaging, ML_AI_DL"
resources: " "
---
<h2> Abstract </h2>  <br>
This paper experiments with the number of fully-connected layers in a deep convolutional neural network as applied to the classification of fundus retinal images. The images analysed corresponded to the ODIR 2019 (Peking University International Competition on Ocular Disease Intelligent Recognition) [9], which included images of various eye diseases (cataract, glaucoma, myopia, diabetic retinopathy, age-related macular degeneration (AMD), hypertension) as well as normal cases. This work focused on the classification of Normal, Cataract, AMD and Myopia. The feature extraction (convolutional) part of the neural network is kept the same while the feature mapping (linear) part of the network is changed. Different data sets are also explored on these neural nets. Each data set differs from another by the number of classes it has. This paper hence aims to find the relationship between number of classes and number of fully-connected layers. It was found out that the effect of increasing the number of fully-connected layers of a neural networks depends on the type of data set being used. For simple, linearly separable data sets, addition of fully-connected layer is something that should be explored and that could result in better training accuracy, but a direct correlation was not found. However as complexity of the data set goes up(more overlapping classes), increasing the number of fully-connected layers causes the neural network to stop learning. This phenomenon happens quicker the more complex the data set is.

{% include paper-research-resources.html %}
