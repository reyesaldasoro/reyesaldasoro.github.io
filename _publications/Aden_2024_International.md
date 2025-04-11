---
title: "International Classification of Diseases Prediction from MIMIIC-III Clinical Text Using Pre-Trained ClinicalBERT and NLP Deep Learning Models Achieving State of the Art"
collection: publications
date: 2024-05-10
venue: "Big Data and Cognitive Computing"
authors: "Ilyas Aden, Christopher H T Child, Constantino Carlos Reyes-Aldasoro"
paperurl: https://www.mdpi.com/2504-2289/8/5/47
type: Paper
doi:  10.3390/bdcc8050047
theme: "imageprocessing, ML_AI_DL"
resources: " "
---
<h2> Abstract </h2>  <br> The International Classification of Diseases (ICD) serves as a widely employed framework for assigning diagnosis codes to electronic health records of patients. These codes facilitate the encapsulation of diagnoses and procedures conducted during a patient’s hospitalisation. This study aims to devise a predictive model for ICD codes based on the MIMIC-III clinical text dataset. Leveraging natural language processing techniques and deep learning architectures, we constructed a pipeline to distill pertinent information from the MIMIC-III dataset: the Medical Information Mart for Intensive Care III (MIMIC-III), a sizable, de-identified, and publicly accessible repository of medical records. Our method entails predicting diagnosis codes from unstructured data, such as discharge summaries and notes encompassing symptoms. We used state-of-the-art deep learning algorithms, such as recurrent neural networks (RNNs), long short-term memory (LSTM) networks, bidirectional LSTM (BiLSTM) and BERT models after tokenizing the clinical test with Bio-ClinicalBERT, a pre-trained model from Hugging Face. To evaluate the efficacy of our approach, we conducted experiments utilizing the discharge dataset within MIMIC-III. Employing the BERT model, our methodology exhibited commendable accuracy in predicting the top 10 and top 50 diagnosis codes within the MIMIC-III dataset, achieving average accuracies of 88% and 80%, respectively. In comparison to recent studies by Biseda and Kerang, as well as Gangavarapu, which reported F1 scores of 0.72 in predicting the top 10 ICD-10 codes, our model demonstrated better performance, with an F1 score of 0.87. Similarly, in predicting the top 50 ICD-10 codes, previous research achieved an F1 score of 0.75, whereas our method attained an F1 score of 0.81. These results underscore the better performance of deep learning models over conventional machine learning approaches in this domain, thus validating our findings. The ability to predict diagnoses early from clinical notes holds promise in assisting doctors or physicians in determining effective treatments, thereby reshaping the conventional paradigm of diagnosis-then-treatment care. Our code is available online.

{% include paper-research-resources.html %}
