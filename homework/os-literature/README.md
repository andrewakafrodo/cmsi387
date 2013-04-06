# All of Time and Space

Continue our journey through seminal operating systems literature by using library resources (digital or otherwise) to find at least three additional publications (also digital or otherwise) that are related to and/or build upon the work given out in class. For each found publication:

* State its connection to the other work in our small collection—the connection must be explicit (i.e., cited). Connections may be to the other work that you find, but at least one must point to something given out in class.
* State what it does new or differently from the prior cited works.
* Give a brief assessment of the quality of the work. Consider the authors, the publication venue, the level of detail, references cited, etc.

You are not expected to fully understand every thing in every piece that you find, but should have some kind of idea.
Commit and push this mini-annotated bibliography in any widely-readable format to `homework/os-literature`. Provide full citations for your found work. If you can supply full-text copies of these items, that would be great also.

### Article 1: Further comments on Dijkstra's concurrent programming control problem by Murray A. Eisenberg and Michael R. McGuire

This article is connected to our small collection because Murray A. Eisenberg and Michael R. McGuire are directly commenting on Djikstra's concurrent programming control problem. The go over the solution that Djikstra provided and also expand upon the the comments that Donald Kunth made upon that provided solution.

Knuth provided a modification to Dijkstra's algorithm which guaranteed access by an individual contending computer within 2<sup>n-1</sup>-1 turns. This paper expands on that modification and insures that a computer doesn't need to wait more that n-1 turns. They do this by changing the conditions in the `for` loop in the `L2` field to stepping up until 1. They also added this new field into `L3`: `if control [k] ≠ 0 and k ≠ i then goto L0;`. Then they added this to the `L5` field:

	L5: for j := k step 1 until N, 1 step 1 until k do
		if j ≠ k and control [j] ~ 0 then
			begin
				k := j;
				goto L6
			end;

The `L3` field is important and different from Djikstra's initial solution and Knuth's initial comment because th system cannot be blocked because non of the computers contending for access to its critical section has yet passed its statement `L3`.

Although I have no ready many scholarly computer science articles, I do believe that this one is written well. It comes from a not-for-profit organization chartered to work in the public interest. As a national resource, the MITRE Corporation applies their expertise in systems engineering, information technology, operational concepts, and enterprise modernization to address their sponsors' critical needs. This paper is cited by the subsequent papers that I address so I would say that this paper is of high quality.

### Article 2: A new solution to the critical section problem by Howard P. Katseff

This article is deirectly related to our small collection because it expands upon Djiksta's solution, Knuth's solution, and even Eisenberg and McGuire's solution. It goes even further to include solutions that are based on first-come first-served basis.

Katseff's solution for first-come first-serve processes is incredibly useful because it solves the problem where certain processes that might repeatedly die and reawaken may inhibit other processes from ever entering their critical sections. It is even more awesome because Katseff's solution does not require variables which assume arbitrarily large values.

### Article 3: A simple solution to Lamport's concurrent programming problem with linear wait by B. K. Szymanski

This article is relalted to our small collection of literature because it directly works off of A New Solution to Lamport's Concurrent Programming Problem Using Small Shared Variables by Gary Peterson. This solution is similar to Peterson's because it also solves the problesm of process failures and restarts. This solution works off of Peterson's to inlcude solving the conundrum of read errors occuring during writes.

This solution takes into account the certain drawbacks of VLSI chip based multiprocessor systems. It address the problems of possible process failures and it imposes restrictions on the use of shared memory. It does this by using five distict values of shared memory per process. These values may be stored either in a single variable or in three one-bit boolean variables per process. This solution is different that Peterson's in that it uses just one more value per process. The proposed solution by Szymanski exhibits a much stonger fairness property that Peterson's and it is also much shorter. Also, another advatage of the paper's proposed solution is that is only uses a small number of changes of shared values made during each prologue execution.

The quality of this paper is superb (to my knowledge). The writer references many iconic papers and clearly presents his argument. He introduces the problem as if the reader has never heard of it and provides an incredibly logical way of building off of Peterson's solution. he includes many figures and examples to illustrate what he is attempting to accomplish. I thoroughly enjoyed how he also included Lemmas to support his claims. Each Lemma tied in perfectly well with the other and provided for a clear train of thought. Szymanski comes from RPI (Rensselaer Polytechnic Institute) and it is clar to see that this school is a good one. The author, where he hails from, (his last name ;) ), the quality of the writing, and the way in which he proves his solution are all great.