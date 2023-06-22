---
title: "PLPose: An Efficient Framework for Detecting Power Lines via Key Points-based Pose Estimation"
collection: publications
date: 2023-06-14
venue: "Journal of King Saud University-Computer and Information Sciences"
authors: "Rabeea Jaffari, Manzoor Ahmed Hashmani, Constantino Carlos Reyes-Aldasoro, Aisha Zahid Junejo, Hasmi Taib, M Nasir B Abdullah"
paperurl: https://www.sciencedirect.com/science/article/pii/S1319157823001696
type: Paper
doi: 10.1016/j.jksuci.2023.101615
theme: "software, imageprocessing, ML_AI_DL"
---

<h2> Abstract </h2>  <br>

The segmentation of power lines (PLs) from aerial images is a crucial task for the safe navigation of unmanned aerial vehicles (UAVs) operating at low altitudes. Despite the advances in deep learning-based approaches for PL segmentation, these models are still vulnerable to the class imbalance present in the data. The PLs occupy only a minimal portion (1-5\%) of the aerial images as compared to the background region (95-99\%). Generally, this class imbalance problem is addressed via the use of PL-specific detectors in conjunction with the popular class balanced cross entropy (BBCE) loss function. However, these PL-specific detectors do not work outside their application areas and a BBCE loss requires hyperparameter tuning for class-wise weights, which is not trivial. Moreover, the BBCE loss results in low dice scores and precision values and thus, fails to achieve an optimal trade-off between dice scores, model accuracy, and precision-recall values. In this work, we propose a generalized focal loss function based on the Matthews correlation coefficient (MCC) or the Phi coefficient to address the class imbalance problem in PL segmentation while utilizing a generic deep segmentation architecture. We evaluate our loss function by improving the vanilla U-Net model with an additional convolutional auxiliary classifier head (ACU-Net) for better learning and faster model convergence. The evaluation of two PL datasets, namely the Mendeley Power Line Dataset and the Power Line Dataset of Urban Scenes (PLDU), where PLs occupy around 1\% and 2\% of the aerial images area, respectively, reveal that our proposed loss function outperforms the popular BBCE loss by 16\% in PL dice scores on both the datasets, 19\% in precision and false detection rate (FDR) values for the Mendeley PL dataset and 15\% in precision and FDR values for the PLDU with a minor degradation in the accuracy and recall values. Moreover, our proposed ACU-Net outperforms the baseline vanilla U-Net for the characteristic evaluation parameters in the range of 1-10\% for both the PL datasets. Thus, our proposed loss function with ACU-Net achieves an optimal trade-off for the characteristic evaluation parameters without any bells and whistles. Our code is available at Github."

{% include paper-research-resources.html %}
