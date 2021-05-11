---
title: "An automatic algorithm for the segmentation and morphological analysis of microvessels in immunostained histological tumour sections"
collection: publications
date: 2011-06-01
venue: "Journal of Microscopy"
authors: "Reyes-Aldasoro, C. C. and Williams, L. J. and Akerman, S. and Kanthou, C. and Tozer, G. M."
paperurl:
type: Paper
doi: 10.1111/j.1365-2818.2010.03464.x
theme: "cancer, methods, software, circulation"
resources: " "
---
"<h2> Abstract </h2>" "A fully automatic segmentation and morphological analysis algorithm for the analysis of microvessels from CD31 immunostained histological tumour sections is presented. Development of the algorithm exploited the distinctive hues of stained vascular endothelial cells, cell nuclei and background, to provide the seeds for a 'region-growing' method for object segmentation in the 3D hue, saturation, value (HSV) colour model. The segmented objects, identified as microvessels by CD31 immunostaining, were post-processed with three morphological tasks: joining separate objects that were likely to belong to a single vessel, closing objects that had a narrow gap around their periphery, and splitting objects with multiple lumina into individual vessels. The automatic segmentation was validated against a hand-segmented set of 44 images from three different SW1222 human colorectal carcinomas xenografted into mice. 96.3 ± 0.9\% of pixels were found to be correctly classified. Automated segmentation was carried out on a further 53 images from three histologically distinct mouse fibrosarcomas (MFs) for morphological comparison with the SW1222 tumours. Four morphometric measurements were calculated for each segmented vessel: vascular area (VA), ratio of lumen area to vascular area (lu/VA), eccentricity (e), and roundness (ro). In addition, the total vascular area relative to tumour tissue area (rVA) was calculated. lu/VA, e and ro were found to be significantly smaller in MF tumours than in SW1222 tumours (p {\textless} 0.05; unpaired t-test). The algorithm is available through the website http://www.caiman.org.uk where images can be uploaded, processed and sent back to users. The output from CAIMAN consists of the original image with boundaries of segmented vessels overlaid, the calculated parameters and a Matlab file, which contains the segmentation that the user can use to derive further results."

{% include paper-research-resources.html %}
