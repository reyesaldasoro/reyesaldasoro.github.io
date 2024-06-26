---
title: "Predicting survival from colorectal cancer histology slides using deep learning A retrospective multicenter study"
collection: publications
date: 2019-01-24
venue: "PLoS Medicine"
authors: "Jakob Nikolas Kather, Johannes Krisam, Pornpimol Charoentong, Tom Luedde, Esther Herpel, Cleo-Aron Weis,  Timo Gaiser, Alexander Marx, Nektarios A. Valous, Dyke Ferber,  Lina Jansen, Constantino Carlos Reyes-Aldasoro,  Inka Zörnig, Dirk Jäger,  Hermann Brenner,  Jenny Chang-Claude, Michael Hoffmeister,  Niels Halama"
paperurl: https://journals.plos.org/plosmedicine/article?id=10.1371/journal.pmed.1002730
type: Paper
doi: 10.1371/journal.pmed.1002730
theme: "cancer, computational pathology, software, ML_AI_DL"
resources: " "
---


<h2> Abstract </h2>  <br> Background For virtually every patient with colorectal cancer (CRC), hematoxylin–eosin (HE)–stained tissue slides are available. These images contain quantitative information, which is not routinely used to objectively extract prognostic biomarkers. In the present study, we investigated whether deep convolutional neural networks (CNNs) can extract prognosticators directly from these widely available images. Methods and findings We hand-delineated single-tissue regions in 86 CRC tissue slides, yielding more than 100,000 HE image patches, and used these to train a CNN by transfer learning, reaching a nine-class accuracy of 94% in an independent data set of 7,180 images from 25 CRC patients. With this tool, we performed automated tissue decomposition of representative multitissue HE images from 862 HE slides in 500 stage I–IV CRC patients in the The Cancer Genome Atlas (TCGA) cohort, a large international multicenter collection of CRC tissue. Based on the output neuron activations in the CNN, we calculated a “deep stroma score,” which was an independent prognostic factor for overall survival (OS) in a multivariable Cox proportional hazard model (hazard ratio [HR] with 95% confidence interval [CI]: 1.99 [1.27–3.12], p = 0.0028), while in the same cohort, manual quantification of stromal areas and a gene expression signature of cancer-associated fibroblasts (CAFs) were only prognostic in specific tumor stages. We validated these findings in an independent cohort of 409 stage I–IV CRC patients from the “Darmkrebs: Chancen der Verhütung durch Screening” (DACHS) study who were recruited between 2003 and 2007 in multiple institutions in Germany. Again, the score was an independent prognostic factor for OS (HR 1.63 [1.14–2.33], p = 0.008), CRC-specific OS (HR 2.29 [1.5–3.48], p = 0.0004), and relapse-free survival (RFS; HR 1.92 [1.34–2.76], p = 0.0004). A prospective validation is required before this biomarker can be implemented in clinical workflows. Conclusions In our retrospective study, we show that a CNN can assess the human tumor microenvironment and predict prognosis directly from histopathological images.

{% include paper-research-resources.html %}
