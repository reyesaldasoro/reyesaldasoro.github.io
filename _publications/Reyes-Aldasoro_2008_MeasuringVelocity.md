---
title: "Measuring the velocity of fluorescently labelled red blood cells with a keyhole tracking algorithm "
collection: publications
date: 2008-01-01
venue: "Journal of Microscopy"
authors: "C. C. Reyes-Aldasoro,  G. M. Tozer"
paperurl: https://onlinelibrary.wiley.com/doi/10.1111/j.1365-2818.2007.01877.x
type: Paper
doi: 10.1111/j.1365-2818.2007.01877.x
theme: "cancer, methods, software, circulation, microscopy"
resources: " "
---
"<h2> Abstract </h2>"

"In this paper we propose a tracking algorithm to measure the velocity of fluorescently labelled red blood cells travelling through microvessels of tumours, growing in dorsal skin flap window chambers, implanted on mice. Preprocessing removed noise and artefacts from the images and then segmented cells from background. The tracking algorithm is based on a ‘keyhole’ model that describes the probable movement of a segmented cell between contiguous frames of a video sequence. When a history of cell movement exists, past, present and a predicted landing position of the cells will define two regions of probability that resemble the shape of a keyhole. This keyhole model was used to determine if cells in contiguous frames should be linked to form tracks and also as a postprocessing tool to join split tracks and discard links that could have been formed due to noise or uncertainty. When there was no history, a circular region around the centroid of the parent cell was used as a region of probability. Outliers were removed based on the distribution of the average velocities of the tracks. Since the position and time of each cell is recorded, a wealth of statistical measures can be obtained from the tracks. The algorithm was tested on two sets of experiments. First, the vasculatures of eight tumours with different geometries were analyzed; average velocities ranged from 86 to 372 μm s−1, with minimum and maximum track velocities 7 and 1212 μm s−1, respectively. Second, a longitudinal study of velocities was performed after administering a vascular disrupting agent to two tumours and the time behaviour was analyzed over 24 h. In one of the tumours there is a complete shutdown of the vasculature whereas in the other there is a clear decrease of velocity at 30 min, with subsequent recovery by 6 h. The tracking algorithm enabled the simultaneous measurement of red blood cell velocity in multiple vessels within an intravital video sequence, enabling analysis of heterogeneity of flow and response to treatment in mouse models of cancer."

{% include paper-research-resources.html %}
