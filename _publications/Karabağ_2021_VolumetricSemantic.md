---
title: "Volumetric Semantic Instance Segmentation of the Plasma Membrane of HeLa Cells"
collection: publications
date: 2021-06-01
venue: "Journal of Imaging"
authors: Cefa Karabağ, Martin L. Jones,  Constantino Carlos Reyes-Aldasoro"
paperurl: https://www.mdpi.com/2313-433X/7/6/93
type: Paper
doi: 10.3390/jimaging7060093
theme: "cancer, software"
---
<h2> Abstract </h2>   <br>  
In this work, an unsupervised volumetric semantic instance segmentation of the plasma membrane of HeLa cells as observed with serial block face scanning electron microscopy is described. The resin background of the images was segmented at different slices of a 3D stack of 518 slices with 8192 × 8192 pixels each. The background was used to create a distance map, which helped identify and rank the cells by their size at each slice. The centroids of the cells detected at different slices were linked to identify them as a single cell that spanned a number of slices. A subset of these cells, i.e., the largest ones and those not close to the edges were selected for further processing. The selected cells were then automatically cropped to smaller regions of interest of 2000 × 2000 × 300 voxels that were treated as cell instances. Then, for each of these volumes, the nucleus was segmented, and the cell was separated from any neighbouring cells through a series of traditional image processing steps that followed the plasma membrane. The segmentation process was repeated for all the regions of interest previously selected. For one cell for which the ground truth was available, the algorithm provided excellent results in Accuracy (AC) and the Jaccard similarity Index (JI): nucleus: JI =0.9665, AC =0.9975, cell including nucleus JI =0.8711, AC =0.9655, cell excluding nucleus JI =0.8094, AC =0.9629. A limitation of the algorithm for the plasma membrane segmentation was the presence of background. In samples with tightly packed cells, this may not be available. When tested for these conditions, the segmentation of the nuclear envelope was still possible. All the code and data were released openly through GitHub, Zenodo and EMPIAR.

{% include paper-research-resources.html %}
