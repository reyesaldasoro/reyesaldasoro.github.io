---
title: "Semantic segmentation of HeLa cells: An objective comparison between one traditional algorithm and four deep-learning architectures"
collection: publications
date: 2020-12-12
venue: "PLOS ONE"
authors: "Karabağ, Cefa and Jones, Martin L. and Peddie, Christopher J. and Weston, Anne E. and Collinson, Lucy M. and Reyes-Aldasoro, Constantino Carlos"
paperurl: https://journals.plos.org/plosone/article?id=10.1371/journal.pone.0230605
type: Paper
doi: 10.1371/journal.pone.0230605
theme: "microbiology, methods, software, hardware"
resources: " "
---
"<h2> Abstract </h2>"
"The quantitative study of cell morphology is of great importance as the structure and condition of cells and their structures can be related to conditions of health or disease. The first step towards that, is the accurate segmentation of cell structures. In this work, we compare five approaches, one traditional and four deep-learning, for the semantic segmentation of the nuclear envelope of cervical cancer cells commonly known as HeLa cells. Images of a HeLa cancer cell were semantically segmented with one traditional image-processing algorithm and four three deep learning architectures: VGG16, ResNet18, Inception-ResNet-v2, and U-Net. Three hundred slices, each 2000 × 2000 pixels, of a HeLa Cell were acquired with Serial Block Face Scanning Electron Microscopy. The first three deep learning architectures were pre-trained with ImageNet and then fine-tuned with transfer learning. The U-Net architecture was trained from scratch with 36, 000 training images and labels of size 128 × 128. The image-processing algorithm followed a pipeline of several traditional steps like edge detection, dilation and morphological operators. The algorithms were compared by measuring pixel-based segmentation accuracy and Jaccard index against a labelled ground truth. The results indicated a superior performance of the traditional algorithm (Accuracy = 99\%, Jaccard = 93\%) over the deep learning architectures: VGG16 (93\%, 90\%), ResNet18 (94\%, 88\%), Inception-ResNet-v2 (94\%, 89\%), and U-Net (92\%, 56\%)."
