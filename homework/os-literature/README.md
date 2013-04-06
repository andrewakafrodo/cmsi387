# All of Time and Space

Continue our journey through seminal operating systems literature by using library resources (digital or otherwise) to find at least three additional publications (also digital or otherwise) that are related to and/or build upon the work given out in class. For each found publication:

* State its connection to the other work in our small collection—the connection must be explicit (i.e., cited). Connections may be to the other work that you find, but at least one must point to something given out in class.
* State what it does new or differently from the prior cited works.
* Give a brief assessment of the quality of the work. Consider the authors, the publication venue, the level of detail, references cited, etc.

You are not expected to fully understand every thing in every piece that you find, but should have some kind of idea.
Commit and push this mini-annotated bibliography in any widely-readable format to `homework/os-literature`. Provide full citations for your found work. If you can supply full-text copies of these items, that would be great also.

### Article 1: Further comments on Dijkstra's concurrent programming control problem by Murray A. Eisenberg and Michael R. McGuire

1. This article is connected to our small connection because Murray A. Eisenberg and Michael R. McGuire are directly commenting on Djikstra's concurrent programming control problem. The go over the solution that Djikstra provided and also expand upon the the comments that Donald Kunth made upon that provided solution.

2. Knuth provided a modification to Dijkstra's algorithm which guaranteed access by an individual contending computer within 2<sup>n-1</sup>-1 turns. This paper expands on that modification and insures that a computer doesn't need to wait more that n-1 turns. They do this by changing the conditions in the `for` loop in the `L2` field to stepping up until 1. They also added this new field into `L3`: L3: `if control [k] ≠ 0 and k ≠ i then goto L0;`.

### Article 2: A new solution to the critical section problem by Howard P. Katseff

### Article 3: A simple solution to Lamport's concurrent programming problem with linear wait by B. K. Szymanski