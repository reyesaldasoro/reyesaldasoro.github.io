---
title: "Segmentation And Modelling of HeLa Nuclear Envelope"
collection: publications
date: 2019-04-08
venue: "ISBI"
authors: "C. Karabağ, M.L. Jones, C.J. Peddie, A.E. Weston, L.M. Collinson, C.C. Reyes-Aldasoro"
paperurl: https://ieeexplore.ieee.org/document/8759151
type: Conference
doi: 10.1109/ISBI.2019.8759151
theme: "cancer, medicalimaging"
resources: " "
---
<h2> Abstract </h2>  <br>

This paper describes an algorithm to segment the 3D nuclear envelope of HeLa cancer cells from electron microscopy images and model the volumetric shape of the nuclear envelope against an ellipsoid. The algorithm was trained on a single cell and then tested in six separate cells. To assess the algorithm, Jaccard similarity index and Hausdorff distance against a manually-delineated gold standard were calculated on two cells. The mean Jaccard value and Hausdorff distance that the segmentation achieved for central slices were 98% and 4 pixels for the first cell and 94% and 13 pixels for the second cell and outperformed segmentation with active contours. The modelling projects a 3D to a 2D surface that summarises the complexity of the shape in an intuitive result. Measurements extracted from the modelled surface may be useful to correlate shape with biological characteristics. The algorithm is unsupervised, fully automatic, fast and processes one image in less than 10 seconds. Code and data are freely available at https://github.com/reyesaldasoro/Hela-Cell-Segmentation and http://dx.doi.org/10.6019/EMPIAR-10094.

{% include paper-research-resources.html %}
