---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"library/mathtype/matmul.hpp\"\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#define rep(i,n) for(ll i=0;i<n;i++)\r\nusing ll = long\
    \ long;\r\n#define vl vector<ll>\r\n\r\nvector<vl> matmul(vector<vl> a,vector<vl>\
    \ b,ll MOD,bool mode) {\r\n    assert(a.size()>0 && b.size()>0);\r\n    assert(a[0].size()==b.size());\r\
    \n    vector<vl> res(a.size(),vl(b[0].size(),0));\r\n    rep(i,a.size()) {\r\n\
    \        rep(j,b[0].size()) {\r\n            rep(k,b.size()) {\r\n           \
    \     res[i][j]+=a[i][k]*b[k][j];\r\n                if(mode) res[i][j]%=MOD;\r\
    \n            }\r\n        }\r\n    }\r\n    return res;\r\n}\r\n\r\nvector<vl>\
    \ matpow_by_mod(vector<vl> a,ll po,ll MOD) {\r\n    ll n=a.size();\r\n    vector<vl>\
    \ res(n,vl(n));\r\n    rep(i,n) res[i][i]=1;\r\n    while(po>0) {\r\n        if(po&1)\
    \ {\r\n            res=matmul(res,a,MOD,true);\r\n        }\r\n        a=matmul(a,a,MOD,true);\r\
    \n        po>>=1;\r\n    }\r\n    return res;\r\n}\n"
  code: "#pragma once\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#define\
    \ rep(i,n) for(ll i=0;i<n;i++)\r\nusing ll = long long;\r\n#define vl vector<ll>\r\
    \n\r\nvector<vl> matmul(vector<vl> a,vector<vl> b,ll MOD,bool mode) {\r\n    assert(a.size()>0\
    \ && b.size()>0);\r\n    assert(a[0].size()==b.size());\r\n    vector<vl> res(a.size(),vl(b[0].size(),0));\r\
    \n    rep(i,a.size()) {\r\n        rep(j,b[0].size()) {\r\n            rep(k,b.size())\
    \ {\r\n                res[i][j]+=a[i][k]*b[k][j];\r\n                if(mode)\
    \ res[i][j]%=MOD;\r\n            }\r\n        }\r\n    }\r\n    return res;\r\n\
    }\r\n\r\nvector<vl> matpow_by_mod(vector<vl> a,ll po,ll MOD) {\r\n    ll n=a.size();\r\
    \n    vector<vl> res(n,vl(n));\r\n    rep(i,n) res[i][i]=1;\r\n    while(po>0)\
    \ {\r\n        if(po&1) {\r\n            res=matmul(res,a,MOD,true);\r\n     \
    \   }\r\n        a=matmul(a,a,MOD,true);\r\n        po>>=1;\r\n    }\r\n    return\
    \ res;\r\n}"
  dependsOn: []
  isVerificationFile: false
  path: library/mathtype/matmul.hpp
  requiredBy: []
  timestamp: '2025-07-28 00:32:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: library/mathtype/matmul.hpp
layout: document
redirect_from:
- /library/library/mathtype/matmul.hpp
- /library/library/mathtype/matmul.hpp.html
title: library/mathtype/matmul.hpp
---
