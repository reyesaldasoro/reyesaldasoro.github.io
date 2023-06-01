---
title: "Automatic Gemstone Classification Using Computer Vision"
collection: publications
date: 2021-12-31
venue: "Minerals"
authors: "Bona Hiu Yan Chow, Constantino Carlos Reyes-Aldasoro,"
paperurl: https://www.mdpi.com/2075-163X/12/1/60
type: Paper
doi:  10.3390/min12010060
theme: "imageprocessing, ML_AI_DL"
resources: " "
---
<h2> Abstract </h2>  <br> This paper presents a computer-vision-based methodology for automatic image-based classification of 2042 training images and 284 unseen (test) images divided into 68 categories of gemstones. A series of feature extraction techniques (33 including colour histograms in the RGB, HSV and CIELAB space, local binary pattern, Haralick texture and grey-level co-occurrence matrix properties) were used in combination with different machine-learning algorithms (Logistic Regression, Linear Discriminant Analysis, K-Nearest Neighbour, Decision Tree, Random Forest, Naive Bayes and Support Vector Machine). Deep-learning classification with ResNet-18 and ResNet-50 was also investigated. The optimal combination was provided by a Random Forest algorithm with the RGB eight-bin colour histogram and local binary pattern features, with an accuracy of 69.4% on unseen images; the algorithms required 0.0165 s to process the 284 test images. These results were compared against three expert gemmologists with at least 5 years of experience in gemstone identification, who obtained accuracies between 42.6% and 66.9% and took 42–175 min to classify the test images. As expected, the human experts took much longer than the computer vision algorithms, which in addition provided, albeit marginal, higher accuracy. Although these experiments included a relatively low number of images, the superiority of computer vision over humans is in line with what has been reported in other areas of study, and it is encouraging to further explore the application in gemmology and related areas.


{% include paper-research-resources.html %}
