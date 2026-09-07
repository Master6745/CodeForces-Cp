<h2><a href="https://codeforces.com/contest/1256/problem/A" target="_blank" rel="noopener noreferrer">1256A — Payment Without Change</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1256A](https://codeforces.com/contest/1256/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. Payment Without Change</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have $$$a$$$ coins of value $$$n$$$ and $$$b$$$ coins of value $$$1$$$. You always pay in exact change, so you want to know if there exist such $$$x$$$ and $$$y$$$ that if you take $$$x$$$ ($$$0 \le x \le a$$$) coins of value $$$n$$$ and $$$y$$$ ($$$0 \le y \le b$$$) coins of value $$$1$$$, then the total value of taken coins will be $$$S$$$.</p><p>You have to answer $$$q$$$ independent test cases.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$q$$$ ($$$1 \le q \le 10^4$$$) — the number of test cases. Then $$$q$$$ test cases follow.</p><p>The only line of the test case contains four integers $$$a$$$, $$$b$$$, $$$n$$$ and $$$S$$$ ($$$1 \le a, b, n, S \le 10^9$$$) — the number of coins of value $$$n$$$, the number of coins of value $$$1$$$, the value $$$n$$$ and the required total value.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For the $$$i$$$-th test case print the answer on it — <span class="tex-font-style-tt">YES</span> (without quotes) if there exist such $$$x$$$ and $$$y$$$ that if you take $$$x$$$ coins of value $$$n$$$ and $$$y$$$ coins of value $$$1$$$, then the total value of taken coins will be $$$S$$$, and <span class="tex-font-style-tt">NO</span> otherwise.</p><p>You may print every letter in any case you want (so, for example, the strings <span class="tex-font-style-tt">yEs</span>, <span class="tex-font-style-tt">yes</span>, <span class="tex-font-style-tt">Yes</span> and <span class="tex-font-style-tt">YES</span> will all be recognized as positive answer).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006242468590558383" id="id0026735373560028053" class="input-output-copier">Copy</div></div><pre id="id006242468590558383">4
1 2 3 4
1 2 3 6
5 2 6 27
3 3 5 18
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003535989648018073" id="id0013871510703376289" class="input-output-copier">Copy</div></div><pre id="id003535989648018073">YES
NO
NO
YES
</pre></div></div></div>