---
title: "DRD-UNet, a UNet-like architecture for multi-class breast cancer semantic segmentation"
collection: publications
date: 2024-03-13
venue: "IEEE Access"
authors: "Mauricio Alberto Ortega-Ruiz, Cefa  Karabağ, Edgar Roman-Rangel, Constantino Carlos Reyes-Aldasoro"
paperurl: https://www.mdpi.com/2313-433X/6/10/101
type: Paper
doi: 10.1109/ACCESS.2024.3377428
theme: "cancer, methods, software, hardware, ML_AI_DL"
resources: " "
---
<h2> Abstract </h2>  <br>
Staining of histological slides with Hematoxylin and Eosin is widely used in clinical and laboratory settings as these dyes reveal nuclear structures as well as cytoplasm and collagen. For cancer diagnosis, these slides are used to recognize tissues and morphological changes. Tissue semantic segmentation is therefore important and at the same time a challenging and time-consuming task. This paper describes a UNet-like deep learning architecture called DRD-UNet , which adds a novel processing block called DRD (Dilation, Residual, and Dense block) to a UNet architecture. DRD is formed by the combination of dilated convolutions (D), residual connections (R), and dense layers (D). DRD-UNet was applied to the multi-class (tumor, stroma, inflammatory, necrosis, and other) semantic segmentation of histological images from breast cancer samples stained with Hematoxylin and Eosin. The histological images were released through the Breast Cancer Semantic Segmentation (BCSS) Challenge. DRD-UNet outperformed the original UNet architecture and 15 other UNet-based architectures on the segmentation of 12,930 image patches extracted from regions of interest that ranged in size between 1036 × 1222 to 6813 × 7360 pixels. DRD-UNet obtained the best performance as measured with Jaccard similarity index, Dice coefficient, in a per-class comparison and accuracy for overall segmentation.

{% include paper-research-resources.html %}
