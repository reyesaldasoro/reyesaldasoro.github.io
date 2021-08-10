---
title: "A combined algorithm for image segmentation using neural networks and 3D surface reconstruction using dynamic meshes"
collection: publications
date: 2000-01-01
venue: "Revista Mexicana de Ingeniería Biomédica"
authors: "Constantino Carlos Reyes-Aldasoro,  M. E. Algorri"
paperurl: https://www.medigraphic.com/cgi-bin/new/resumenI.cgi?IDARTICULO=3164
type: Paper
doi:
theme: "software, medicalimaging"
resources: " "
---

<h2> Abstract </h2>

Reconstructing the surface from a set of unstructured points to build a 3D model is a problem that arises in many scientific and industrial fields as new 3D scanning technology is able to produce large databases of full 3D information. 3D surface reconstruction is also important after segmenting sets of 2D images to visualise the 3D surface represented by the segmentation. In this paper we propose an algorithmic methodology that obtains a series of segmentations of human head tomographies, produces a set of unstructured points in the 3D space, and then automatically produces a surface from the set of unstructured 3D points about which we have no topological knowledge. The methodology can be divided in two stages. First, tomographic images are segmented with a Neural Network algorithm based on Kohonen’s1,2 Self-Organising Maps (SOM). The output neurones that have adapted to the image, are a series of 3D points that will be fed to the second stage. Next, our method uses a spatial decomposition and surface tracking algorithm to produce a rough approximation S’ of the unknown manifold S. The produced surface S’ serves as initialisation for a dynamic mesh model that yields the details of S to improve the quality of the reconstruction.

{% include paper-research-resources.html %}
