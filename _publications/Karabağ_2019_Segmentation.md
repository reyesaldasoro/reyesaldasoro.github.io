---
title: "Segmentation and Modelling of the Nuclear Envelope of HeLa Cells Imaged with Serial Block Face Scanning Electron Microscopy"
collection: publications
date: 2019-09-01
venue: "Journal of Imaging"
authors: " Cefa Karabağ,  Martin L. Jones, Christopher J. Peddie,  Anne E. Weston,  Lucy M. Collinson, Reyes-Aldasoro, Constantino Carlos"
paperurl: https://www.mdpi.com/2313-433X/5/9/75
type: Paper
doi: 10.3390/jimaging5090075
theme: "cancer, methods, software, hardware, microscopy"
resources: " "
---
<h2> Abstract </h2>   <br>  This paper describes an unsupervised algorithm, which segments the nuclear envelope of HeLa cells imaged by Serial Block Face Scanning Electron Microscopy. The algorithm exploits the variations of pixel intensity in different cellular regions by calculating edges, which are then used to generate superpixels. The superpixels are morphologically processed and those that correspond to the nuclear region are selected through the analysis of size, position, and correspondence with regions detected in neighbouring slices. The nuclear envelope is segmented from the nuclear region. The three-dimensional segmented nuclear envelope is then modelled against a spheroid to create a two-dimensional (2D) surface. The 2D surface summarises the complex 3D shape of the nuclear envelope and allows the extraction of metrics that may be relevant to characterise the nature of cells. The algorithm was developed and validated on a single cell and tested in six separate cells, each with 300 slices of 2000 \&times; 2000 pixels. Ground truth was available for two of these cells, i.e., 600 hand-segmented slices. The accuracy of the algorithm was evaluated with two similarity metrics: Jaccard Similarity Index and Mean Hausdorff distance. Jaccard values of the first/second segmentation were 93\%/90\% for the whole cell, and 98\%/94\% between slices 75 and 225, as the central slices of the nucleus are more regular than those on the extremes. Mean Hausdorff distances were 9/17 pixels for the whole cells and 4/13 pixels for central slices. One slice was processed in approximately 8 s and a whole cell in 40 min. The algorithm outperformed active contours in both accuracy and time."

{% include paper-research-resources.html %}
