<h2><a href="https://www.geeksforgeeks.org/problems/find-the-fine4353/1">Even Odd Positions</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 14pt;">Given an array of car numbers <strong>car[]</strong>, an array of penalties<strong> fine[]</strong>, and an integer <strong>date</strong>, find the total fine collected on that date. The fine is collected based on parity, i.e., on an even date, fines are collected from odd-numbered cars, and on an odd date, fines are collected from even-numbered cars.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>date = 12, car[] = [2375, 7682, 2325, 2352], fine[] = [250, 500, 350, 200]
<strong>Output: </strong>600
<strong>Explanation: </strong>The date is 12 (even), so we collect the fine from odd-numbered cars. The odd-numbered cars and the fines associated with them are as follows:
2375 -&gt; 250
2325 -&gt; 350
The sum of the fines is 250+350 = 600</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>date = 8, car[] = [2222, 2223, 2224], fine[] = [200, 300, 400]
<strong>Output: </strong>300</span></pre></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Mathematics</code>&nbsp;