### Association rules for Graduate Admissions Data set

Here are the commands I ran:
<pre>
rules <- apriori(admissions, control = list(verbose=F), parameter = list(minlen=2, supp=0.005, conf=0.75), appearance = list(rhs=c("admit=0","admit=1"), default="lhs"))
quality(rules) <- round(quality(rules), digits=3)
rules.sorted <- sort(rules, by="lift")
inspect(rules.sorted)
</pre>

Here are the results:
<pre>
      lhs                          rhs       support confidence lift 
[1]   {gpa=3.71}                => {admit=1} 0.005   1.000      3.150
[2]   {gpa=3.56}                => {admit=1} 0.008   1.000      3.150
[3]   {gre=700,gpa=3.56}        => {admit=1} 0.005   1.000      3.150
[4]   {gpa=3.56,rank=2}         => {admit=1} 0.005   1.000      3.150
[5]   {gre=620,gpa=3.37}        => {admit=1} 0.005   1.000      3.150
[6]   {gpa=3.6,rank=3}          => {admit=1} 0.005   1.000      3.150
[7]   {gpa=3.81,rank=1}         => {admit=1} 0.005   1.000      3.150
[8]   {gpa=3,rank=2}            => {admit=1} 0.005   1.000      3.150
[9]   {gre=520,gpa=3.74}        => {admit=1} 0.005   1.000      3.150
[10]  {gpa=3.58,rank=1}         => {admit=1} 0.008   1.000      3.150
[11]  {gre=460,gpa=3.64}        => {admit=1} 0.005   1.000      3.150
[12]  {gpa=3.64,rank=1}         => {admit=1} 0.005   1.000      3.150
[13]  {gre=540,gpa=3.49}        => {admit=1} 0.005   1.000      3.150
[14]  {gre=620,gpa=3.95}        => {admit=1} 0.005   1.000      3.150
[15]  {gpa=3.95,rank=3}         => {admit=1} 0.005   1.000      3.150
[16]  {gpa=3.95,rank=2}         => {admit=1} 0.005   1.000      3.150
[17]  {gre=780,rank=2}          => {admit=1} 0.005   1.000      3.150
[18]  {gre=760,rank=1}          => {admit=1} 0.005   1.000      3.150
[19]  {gre=760,rank=2}          => {admit=1} 0.005   1.000      3.150
[20]  {gpa=3.46,rank=2}         => {admit=1} 0.005   1.000      3.150
[21]  {gre=740,rank=2}          => {admit=1} 0.005   1.000      3.150
[22]  {gre=520,gpa=4}           => {admit=1} 0.005   1.000      3.150
[23]  {gre=620,gpa=3.95,rank=3} => {admit=1} 0.005   1.000      3.150
[24]  {gre=800,gpa=4,rank=3}    => {admit=1} 0.005   1.000      3.150
[25]  {gpa=3.64}                => {admit=1} 0.010   0.800      2.520
[26]  {gpa=3.95}                => {admit=1} 0.010   0.800      2.520
[27]  {gre=780}                 => {admit=1} 0.010   0.800      2.520
[28]  {gre=760}                 => {admit=1} 0.010   0.800      2.520
[29]  {gre=800,gpa=4}           => {admit=1} 0.010   0.800      2.520
[30]  {gre=620,rank=1}          => {admit=1} 0.010   0.800      2.520
[31]  {gpa=3}                   => {admit=1} 0.008   0.750      2.362
[32]  {gpa=3.74}                => {admit=1} 0.008   0.750      2.362
[33]  {gre=480,rank=1}          => {admit=1} 0.008   0.750      2.362
[34]  {gre=600,rank=1}          => {admit=1} 0.008   0.750      2.362
[35]  {gre=800,rank=1}          => {admit=1} 0.015   0.750      2.362
[36]  {gpa=2.82}                => {admit=0} 0.005   1.000      1.465
[37]  {gpa=2.78}                => {admit=0} 0.005   1.000      1.465
[38]  {gpa=3.29}                => {admit=0} 0.005   1.000      1.465
[39]  {gpa=3.25}                => {admit=0} 0.005   1.000      1.465
[40]  {gpa=3.04}                => {admit=0} 0.005   1.000      1.465
[41]  {gpa=3.16}                => {admit=0} 0.005   1.000      1.465
[42]  {gpa=3.62}                => {admit=0} 0.005   1.000      1.465
[43]  {gpa=3.73}                => {admit=0} 0.005   1.000      1.465
[44]  {gpa=2.92}                => {admit=0} 0.005   1.000      1.465
[45]  {gpa=2.71}                => {admit=0} 0.005   1.000      1.465
[46]  {gpa=2.88}                => {admit=0} 0.005   1.000      1.465
[47]  {gpa=2.85}                => {admit=0} 0.005   1.000      1.465
[48]  {gpa=2.79}                => {admit=0} 0.005   1.000      1.465
[49]  {gpa=3.01}                => {admit=0} 0.005   1.000      1.465
[50]  {gpa=3.24}                => {admit=0} 0.005   1.000      1.465
[51]  {gpa=2.7}                 => {admit=0} 0.005   1.000      1.465
[52]  {gpa=3.92}                => {admit=0} 0.005   1.000      1.465
[53]  {gpa=3.57}                => {admit=0} 0.008   1.000      1.465
[54]  {gpa=3.28}                => {admit=0} 0.010   1.000      1.465
[55]  {gre=360}                 => {admit=0} 0.010   1.000      1.465
[56]  {gpa=3.07}                => {admit=0} 0.010   1.000      1.465
[57]  {gpa=2.9}                 => {admit=0} 0.010   1.000      1.465
[58]  {gpa=3.08}                => {admit=0} 0.010   1.000      1.465
[59]  {gpa=3.51}                => {admit=0} 0.012   1.000      1.465
[60]  {gpa=3.33}                => {admit=0} 0.012   1.000      1.465
[61]  {gpa=2.93}                => {admit=0} 0.012   1.000      1.465
[62]  {gpa=3.34}                => {admit=0} 0.012   1.000      1.465
[63]  {gre=420}                 => {admit=0} 0.018   1.000      1.465
[64]  {gpa=3.4}                 => {admit=0} 0.018   1.000      1.465
[65]  {gre=380}                 => {admit=0} 0.020   1.000      1.465
[66]  {gpa=3.31}                => {admit=0} 0.020   1.000      1.465
[67]  {gre=600,gpa=2.82}        => {admit=0} 0.005   1.000      1.465
[68]  {gpa=2.82,rank=4}         => {admit=0} 0.005   1.000      1.465
[69]  {gpa=2.88,rank=2}         => {admit=0} 0.005   1.000      1.465
[70]  {gpa=3.24,rank=4}         => {admit=0} 0.005   1.000      1.465
[71]  {gpa=3.57,rank=3}         => {admit=0} 0.005   1.000      1.465
[72]  {gpa=2.81,rank=3}         => {admit=0} 0.005   1.000      1.465
[73]  {gpa=3.61,rank=3}         => {admit=0} 0.005   1.000      1.465
[74]  {gpa=3.5,rank=2}          => {admit=0} 0.008   1.000      1.465
[75]  {gre=700,gpa=3.65}        => {admit=0} 0.005   1.000      1.465
[76]  {gpa=3.65,rank=2}         => {admit=0} 0.008   1.000      1.465
[77]  {gre=540,gpa=3.28}        => {admit=0} 0.005   1.000      1.465
[78]  {gpa=3.28,rank=1}         => {admit=0} 0.005   1.000      1.465
[79]  {gpa=3.28,rank=3}         => {admit=0} 0.005   1.000      1.465
[80]  {gre=360,rank=3}          => {admit=0} 0.008   1.000      1.465
[81]  {gpa=3.36,rank=2}         => {admit=0} 0.005   1.000      1.465
[82]  {gpa=3.07,rank=2}         => {admit=0} 0.008   1.000      1.465
[83]  {gre=340,rank=3}          => {admit=0} 0.005   1.000      1.465
[84]  {gpa=3.08,rank=2}         => {admit=0} 0.005   1.000      1.465
[85]  {gpa=3.38,rank=2}         => {admit=0} 0.005   1.000      1.465
[86]  {gpa=3.51,rank=2}         => {admit=0} 0.010   1.000      1.465
[87]  {gpa=3.58,rank=2}         => {admit=0} 0.005   1.000      1.465
[88]  {gpa=3.43,rank=3}         => {admit=0} 0.008   1.000      1.465
[89]  {gpa=3.94,rank=3}         => {admit=0} 0.005   1.000      1.465
[90]  {gpa=3.33,rank=4}         => {admit=0} 0.005   1.000      1.465
[91]  {gpa=3.33,rank=3}         => {admit=0} 0.005   1.000      1.465
[92]  {gpa=3.77,rank=3}         => {admit=0} 0.008   1.000      1.465
[93]  {gpa=2.93,rank=4}         => {admit=0} 0.005   1.000      1.465
[94]  {gpa=2.93,rank=3}         => {admit=0} 0.005   1.000      1.465
[95]  {gpa=3.34,rank=3}         => {admit=0} 0.005   1.000      1.465
[96]  {gpa=3.34,rank=2}         => {admit=0} 0.005   1.000      1.465
[97]  {gpa=3.46,rank=4}         => {admit=0} 0.005   1.000      1.465
[98]  {gre=620,gpa=3.63}        => {admit=0} 0.005   1.000      1.465
[99]  {gpa=3.63,rank=3}         => {admit=0} 0.005   1.000      1.465
[100] {gpa=2.98,rank=3}         => {admit=0} 0.005   1.000      1.465
[101] {gpa=3.15,rank=4}         => {admit=0} 0.005   1.000      1.465
[102] {gpa=3.15,rank=3}         => {admit=0} 0.005   1.000      1.465
[103] {gre=420,rank=1}          => {admit=0} 0.005   1.000      1.465
[104] {gre=420,rank=4}          => {admit=0} 0.008   1.000      1.465
[105] {gpa=3.45,rank=4}         => {admit=0} 0.005   1.000      1.465
[106] {gre=580,gpa=3.4}         => {admit=0} 0.008   1.000      1.465
[107] {gpa=3.4,rank=3}          => {admit=0} 0.008   1.000      1.465
[108] {gpa=3.4,rank=2}          => {admit=0} 0.008   1.000      1.465
[109] {gpa=3.35,rank=3}         => {admit=0} 0.010   1.000      1.465
[110] {gre=380,rank=4}          => {admit=0} 0.008   1.000      1.465
[111] {gre=380,rank=3}          => {admit=0} 0.010   1.000      1.465
[112] {gpa=3.31,rank=1}         => {admit=0} 0.005   1.000      1.465
[113] {gpa=3.31,rank=4}         => {admit=0} 0.005   1.000      1.465
[114] {gpa=3.31,rank=3}         => {admit=0} 0.008   1.000      1.465
[115] {gre=440,rank=4}          => {admit=0} 0.008   1.000      1.465
[116] {gre=400,rank=3}          => {admit=0} 0.010   1.000      1.465
[117] {gre=740,rank=1}          => {admit=0} 0.005   1.000      1.465
[118] {gre=460,rank=2}          => {admit=0} 0.012   1.000      1.465
[119] {gre=480,rank=3}          => {admit=0} 0.005   1.000      1.465
[120] {gre=640,rank=3}          => {admit=0} 0.020   1.000      1.465
[121] {gre=500,rank=4}          => {admit=0} 0.022   1.000      1.465
[122] {gre=700,rank=3}          => {admit=0} 0.008   1.000      1.465
[123] {gre=600,rank=4}          => {admit=0} 0.008   1.000      1.465
[124] {gre=560,rank=4}          => {admit=0} 0.010   1.000      1.465
[125] {gre=660,rank=1}          => {admit=0} 0.005   1.000      1.465
[126] {gre=800,rank=4}          => {admit=0} 0.005   1.000      1.465
[127] {gre=580,gpa=4}           => {admit=0} 0.008   1.000      1.465
[128] {gre=620,rank=4}          => {admit=0} 0.008   1.000      1.465
[129] {gre=600,gpa=2.82,rank=4} => {admit=0} 0.005   1.000      1.465
[130] {gre=700,gpa=3.65,rank=2} => {admit=0} 0.005   1.000      1.465
[131] {gre=700,rank=2}          => {admit=0} 0.028   0.917      1.343
[132] {gre=500}                 => {admit=0} 0.048   0.905      1.326
[133] {gre=500,rank=3}          => {admit=0} 0.020   0.889      1.302
[134] {gpa=3.35}                => {admit=0} 0.015   0.857      1.256
[135] {gre=720,rank=3}          => {admit=0} 0.015   0.857      1.256
[136] {gre=400,rank=2}          => {admit=0} 0.012   0.833      1.221
[137] {gre=540,rank=3}          => {admit=0} 0.012   0.833      1.221
[138] {rank=4}                  => {admit=0} 0.138   0.821      1.203
[139] {gre=400}                 => {admit=0} 0.022   0.818      1.199
[140] {gpa=3.38}                => {admit=0} 0.010   0.800      1.172
[141] {gpa=3.43}                => {admit=0} 0.010   0.800      1.172
[142] {gpa=3.94}                => {admit=0} 0.010   0.800      1.172
[143] {gpa=3.77}                => {admit=0} 0.010   0.800      1.172
[144] {gpa=3.59}                => {admit=0} 0.010   0.800      1.172
[145] {gpa=3.13}                => {admit=0} 0.010   0.800      1.172
[146] {gre=440}                 => {admit=0} 0.020   0.800      1.172
[147] {gre=740,rank=4}          => {admit=0} 0.010   0.800      1.172
[148] {gre=540,rank=4}          => {admit=0} 0.010   0.800      1.172
[149] {gre=580,rank=4}          => {admit=0} 0.010   0.800      1.172
[150] {gre=580,rank=3}          => {admit=0} 0.010   0.800      1.172
[151] {gre=580,rank=2}          => {admit=0} 0.030   0.800      1.172
[152] {gre=580}                 => {admit=0} 0.058   0.793      1.162
[153] {gre=560,rank=3}          => {admit=0} 0.018   0.778      1.140
[154] {gre=700}                 => {admit=0} 0.042   0.773      1.132
[155] {rank=3}                  => {admit=0} 0.232   0.769      1.126
[156] {gre=640}                 => {admit=0} 0.040   0.762      1.116
[157] {gpa=3.5}                 => {admit=0} 0.008   0.750      1.099
[158] {gpa=3.65}                => {admit=0} 0.008   0.750      1.099
[159] {gpa=3.02}                => {admit=0} 0.008   0.750      1.099
[160] {gpa=3.3}                 => {admit=0} 0.008   0.750      1.099
[161] {gpa=3.36}                => {admit=0} 0.008   0.750      1.099
[162] {gpa=3.12}                => {admit=0} 0.008   0.750      1.099
[163] {gpa=3.14}                => {admit=0} 0.008   0.750      1.099
[164] {gre=340}                 => {admit=0} 0.008   0.750      1.099
[165] {gpa=3.78}                => {admit=0} 0.008   0.750      1.099
[166] {gpa=3.32}                => {admit=0} 0.008   0.750      1.099
</pre>


I think the commands I ran weren't the greatest, but there are still some correlations that we can see in the data. First off, those who were likely to get in (admit=1) were typically closest to rank 1 and had a moderately high GPA (> 3.5). Most rank 4 people were not admitted unless they had a high GPA and GRE score. These results seem typical of what you'd expect to see. I'm not entirely sure how to sort the lhs to be above a threshold (the book just included examples like gpa=3.0 instead of what I wanted to see which is gpa>=3.0); that I feel would have produced cleaner/more interesting results, but I can still look over the above ruleset and manually try and decipher it. 

The following graph is worthless:

<img src="https://github.com/casey-c/rpi-csci2963-labs/raw/master/Lab%207/worthless.png" />



### Election Data
Here's the command I ran to determine the states in which Bush had a larger percentage of votes than Kerry (29 of em in total):
<pre>
table(elect[elect["BushPct"]>elect["KerryPct"],"State"])

       Alabama         Alaska        Arizona       Arkansas 
             1              1              1              1 
      Colorado        Florida        Georgia          Idaho 
             1              1              1              1 
       Indiana           Iowa         Kansas       Kentucky 
             1              1              1              1 
     Louisiana    Mississippi       Missouri        Montana 
             1              1              1              1 
      Nebraska         Nevada     New Mexico North Carolina 
             1              1              1              1 
  North Dakota           Ohio       Oklahoma South Carolina 
             1              1              1              1 
  South Dakota      Tennessee          Texas           Utah 
             1              1              1              1 
      Virginia  West Virginia        Wyoming 
             1              1              1 
</pre>

### Top Movies
Here's the command for finding movies with numbers in their title: (kind of a lazy way to search for sequels, since there are still movies listed that aren't sequels, and it's probably missing a few that are and just don't have the number in the title):
<pre>
topmovies[grep("[0-9]+", topmovies$name, ignore.case = T), "name"]
</pre>
From this command above, there are 79 movies with numbers in the title. Just briefly glancing over it, I see movies like 300 show up, which to my knowledge isn't actually a sequel, so yeah, this metric is not perfect.

\# of movies with the word man: 41
<pre>
topmovies[grep("man", topmovies$name, ignore.case = T), "name"]
</pre>

\# of movies with star wars in the title: 6
<pre>
topmovies[grep("star wars", topmovies$name, ignore.case = T), "name"]
</pre>

\# of movies with super in the title: 5
<pre>
topmovies[grep("super", topmovies$name, ignore.case = T), "name"]
</pre>

### Observatory / repo
https://rcos.io/projects/casey-c/egg/profile
https://github.com/casey-c/egg

Status of the project is on the blog posts
