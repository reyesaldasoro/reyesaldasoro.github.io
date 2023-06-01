---
title: "Impact of Training Data, Ground Truth and Shape Variability in the Deep Learning-Based Semantic Segmentation of HeLa Cells Observed with Electron Microscopy "
collection: publications
date: 2023-03-01
venue: "Journal of Imaging"
authors: Cefa Karabağ, Mauricio Alberto Ortega-Ruíz,  Constantino Carlos Reyes-Aldasoro"
paperurl: https://www.mdpi.com/2313-433X/9/3/59
type: Paper
doi: 10.3390/jimaging9030059
theme: "cancer, software, ML_AI_DL"
---
<h2> Abstract </h2>   <br>  
This paper investigates the impact of the amount of training data and the shape variability on the segmentation provided by the deep learning architecture U-Net. Further, the correctness of ground truth (GT) was also evaluated. The input data consisted of a three-dimensional set of images of HeLa cells observed with an electron microscope with dimensions 8192×8192×517. From there, a smaller region of interest (ROI) of 2000×2000×300 was cropped and manually delineated to obtain the ground truth necessary for a quantitative evaluation. A qualitative evaluation was performed on the 8192×8192 slices due to the lack of ground truth. Pairs of patches of data and labels for the classes nucleus, nuclear envelope, cell and background were generated to train U-Net architectures from scratch. Several training strategies were followed, and the results were compared against a traditional image processing algorithm. The correctness of GT, that is, the inclusion of one or more nuclei within the region of interest was also evaluated. The impact of the extent of training data was evaluated by comparing results from 36,000 pairs of data and label patches extracted from the odd slices in the central region, to 135,000 patches obtained from every other slice in the set. Then, 135,000 patches from several cells from the 8192×8192 slices were generated automatically using the image processing algorithm. Finally, the two sets of 135,000 pairs were combined to train once more with 270,000 pairs. As would be expected, the accuracy and Jaccard similarity index improved as the number of pairs increased for the ROI. This was also observed qualitatively for the 8192×8192 slices. When the 8192×8192 slices were segmented with U-Nets trained with 135,000 pairs, the architecture trained with automatically generated pairs provided better results than the architecture trained with the pairs from the manually segmented ground truths. This suggests that the pairs that were extracted automatically from many cells provided a better representation of the four classes of the various cells in the 8192×8192 slice than those pairs that were manually segmented from a single cell. Finally, the two sets of 135,000 pairs were combined, and the U-Net trained with these provided the best results.

{% include paper-research-resources.html %}
