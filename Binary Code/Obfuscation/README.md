# Obfuscation
**Code obfuscation** is the practice of making code unintelligible, or at the very least, hard to understand[^survey].

Applications:
- Software protection
  
  Though there are several methods for protecting software, such as encryption, server-side execution and native code, obfuscation has been found to be the cheapest and easiest solution to this problem[^protect].
- Malware mitigation

  Many viruses utilize obfuscation techniques to subvert virus scanners by continually changing their code signature with obfuscating transformations[^survey].

## Quality
The quality of an obfuscating transformation is evaluated according to four criteria[^survey]:
1. Potency: How much obscurity it adds to the program
2. Resilience: How diffiult is it to break for an automatic deobfuscator
3. Stealth: How well the obfuscated code blends with the rest of the program
4. Cost: How much computation overhead it adds to the obfuscated application

混淆性能、抗反混淆性能、透明性、开销

## Control-flow obfuscation
- Control-flow flattening

  The ﬁrst step involves decomposing high level control transfers into a series of if-then-goto statements. The second step is to then modify the goto statements such that the target addresses are determined dynamically. These transformations make direct branches dependent on data and results in the ﬂattening of the control ﬂow graph.
- Aggregation transformation

  Break up computations that are logically related and merges computations that are not.[^survey]
- Control ordering transformations

  Randomize the order in which the computations are carried out.[^survey]
- Computation transformations

  Insert new code or make algorithmic changes to source application.[^survey]
- Inline and outline methods
- Clone methods

The key to the success of control transformations is the resilience of opaque predicates and variables. **Opaque predicates and variables** are constructs whose values are known to the obfuscator, but are diﬃcult for the deobfuscator to deduce. An opaque predicate is trivial if a deobfuscator can deduce it by static local analysis, and weak if a deobfuscator can deduce it by static global analysis.[^survey]

## Data-flow obfuscation
- Convert static to procedural data
  
  将静态数据转化为动态计算结果，例如 [string obfuscation](Data/String/String%20Obfuscation.md)。
- Split variables
  
  将一个变量拆分为多个变量，对原有变量的操作转换为对拆分变量的操作。[^survey]
- Merge scalar variables
- Restructuring data arrays

  These transformations include[^survey]:
  - Splitting an array
  - Merging two or more arrays
  - Flattening an array (i.e. decrease
the dimensions of the array)
  - Folding the array (i.e. increase the dimensions of the array).
- Modifying inheritance relations

  The complexity of a program increases with greater depth of the inheritance tree. Along these lines, we can artiﬁcially increase the complexity of a program either by splitting up a class or by inserting a new bogus class.[^survey]

## ISA-level obfuscation
- Junk insertion
- Dead code insertion
- Instruction substitution
- Branch functions
- Call conversion obfuscation
- Virtual-machine-based code obfuscation

  The fundamental idea is to convert a portion of the code to a diﬀerent machine code. This new code is then executed by a new virtual machine interpreter included in the obfuscated code. There is usually one to two orders of magnitude slowdown for each level of interpretation, and so this transformation should only be used for those sections of code that consumes a small part of the total runtime.[^survey]

[^survey]: Balakrishnan, Arini, and Chloe Schulze. “Code Obfuscation Literature Survey,” n.d., 10.
[^protect]: Christian S. Collberg and Clark Thomborson. Watermarking, tamper-prooﬁng, and
obfuscation - tools for software protection. In IEEE Transactions on Software Engineering, volume 28, pages 735–746, August 2002.