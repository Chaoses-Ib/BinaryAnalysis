# Binary Analysis
## Binary analysis tools
### IDA
[IbIDA](IbIDA)

## Executable formats
### Debugging information
#### PDB
- [sonyps5201314/pdb: ida pdb plugin with enhance and bugfix](https://github.com/sonyps5201314/pdb)  
  [PDB 插件修复增强](https://bbs.pediy.com/thread-266189.htm)

## Binary code matching
- [BinDiff](https://www.zynamics.com/software.html)  
  ![](images/BinDiff-MatchedFunctions.png)

  Disadvantages:
  - Does not support IDB paths with non-ASCII characters

- [SigMaker](https://github.com/ajkhoury/SigMaker-x64)  
  ![](images/SigMaker.png)

  Disadvantages:
  - Does not output multiple signatures for one function
  - Does not output matching results when generating signatures

- [SigMakerEx](https://github.com/kweatherman/sigmakerex)  
  ![](https://github.com/kweatherman/sigmakerex/blob/ad4182201abff782faa2be3b8a47af1e36b2c20b/images/main.png?raw=true)

### Library signatures
Full:
- [Library Signatures](https://github.com/Chaoses-Ib/library-signatures)

## Program differing
- [BinDiff](https://www.zynamics.com/software.html)  
  ![](images/BinDiff-CombinedView.png)