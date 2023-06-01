---
title: "Contrastive counterfactual visual explanations with overdetermination"
collection: publications
date: 2023-03-23
venue: Machine Learning
authors: "Adam White, Kwun Ho Ngan, James Phelan, Kevin Ryan, Saman Sadeghi Afgeh,  Constantino Carlos Reyes-Aldasoro, Artur d'Avila Garcez"
paperurl: https://link.springer.com/article/10.1007/s10994-023-06333-w#citeas
type: Paper
doi: 10.1007/s10994-023-06333-w
theme: "imageprocessing, ML_AI_DL"
resources: " "
---
<h2> Abstract </h2>  <br>
A novel explainable AI method called CLEAR Image is introduced in this paper. CLEAR Image is based on the view that a satisfactory explanation should be contrastive, counterfactual and measurable. CLEAR Image seeks to explain an image’s classification probability by contrasting the image with a representative contrast image, such as an auto-generated image obtained via adversarial learning. This produces a salient segmentation and a way of using image perturbations to calculate each segment’s importance. CLEAR Image then uses regression to determine a causal equation describing a classifier’s local input–output behaviour. Counterfactuals are also identified that are supported by the causal equation. Finally, CLEAR Image measures the fidelity of its explanation against the classifier. CLEAR Image was successfully applied to a medical imaging case study where it outperformed methods such as Grad-CAM and LIME by an average of 27% using a novel pointing game metric. CLEAR Image also identifies cases of causal overdetermination, where there are multiple segments in an image that are sufficient individually to cause the classification probability to be close to one.

{% include paper-research-resources.html %}
