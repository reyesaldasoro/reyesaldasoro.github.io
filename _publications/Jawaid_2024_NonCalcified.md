---
title: "Non-calcified plaque-based coronary stenosis grading in contrast enhanced CT"
collection: publications
date: 2023-05-23
venue: "Medical Engineering & Physics"
authors: "Muhammad Moazzam Jawaid,  Sanam Narejo, Farhan Riaz, Constantino Carlos Reyes-Aldasoro, Greg Slabaugh, James Brown"
paperurl: https://www.sciencedirect.com/science/article/pii/S1350453324000833
type: Paper
doi: 10.1016/j.medengphy.2024.104182
theme: "software, medicalimaging, circulation"
resources: " "
---
<h2> Abstract </h2>   <br>  Background

The high mortality rate associated with coronary heart disease has led to state-of-the-art non-invasive methods for cardiac diagnosis including computed tomography and magnetic resonance imaging. However, stenosis computation and clinical assessment of non-calcified plaques has been very challenging due to their ambiguous intensity response in CT i.e. a significant overlap with surrounding muscle tissues and blood. Accordingly, this research presents an approach for computation of coronary stenosis by investigating cross-sectional lumen behaviour along the length of 3D coronary segments.
Methods

Non-calcified plaques are characterized by comparatively lower-intensity values with respect to the surrounding. Accordingly, segment-wise orthogonal volume was reconstructed in 3D space using the segmented coronary tree. Subsequently, the cross sectional volumetric data was investigated using proposed CNN-based plaque quantification model and subsequent stenosis grading in clinical context was performed. In the last step, plaque-affected orthogonal volume was further investigated by comparing vessel-wall thickness and lumen area obstruction w.r.t. expert-based annotations to validate the stenosis grading performance of model.
Results

The experimental data consists of clinical CT images obtained from the Rotterdam CT repository leading to 600 coronary segments and subsequent 15786 cross-sectional images. According to the results, the proposed method quantified coronary vessel stenosis i.e. severity of the non-calcified plaque with an overall accuracy of 83%. Moreover, for individual grading, the proposed model show promising results with accuracy equal to 86%, 90% and 79% respectively for severe, moderate and mild stenosis. The stenosis grading performance of the proposed model was further validated by performing lumen-area versus wall-thickness analysis as per annotations of manual experts. The statistical results for lumen area analysis precisely correlates with the quantification performance of the model with a mean deviation of 5% only.
Conclusion

The overall results demonstrates capability of the proposed model to grade the vessel stenosis with reasonable accuracy and precision equivalent to human experts.

{% include paper-research-resources.html %}
