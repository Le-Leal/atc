---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verifier/UnionFind_verify.test.cpp
    title: verifier/UnionFind_verify.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"library/structure/UnionFind.hpp\"\n#include <bits/stdc++.h>\n\
    using namespace std;\n#define rep(i,n) for(ll i=0;i<n;i++)\nusing ll = long long;\n\
    \nstruct UnionFind {\n    vector<int> par;\n    vector<int> rank;\n    int count;\n\
    \    UnionFind(int N):par(N),rank(N,0),count(N){\n        rep(i,N) par[i]=i;\n\
    \    }\n    //\u7D4C\u8DEF\u5727\u7E2E\n    int root(int x){\n        return par[x]==x?x:par[x]=root(par[x]);\n\
    \    }\n    void unite(int x,int y){\n        int rx=root(x),ry=root(y);\n   \
    \     if(rx==ry) return;\n        count--;\n        if(rank[rx]<rank[ry]) {\n\
    \            par[rx]=ry;\n        }\n        else {\n            par[ry]=rx;\n\
    \            if(rank[rx]==rank[ry]) rank[rx]++;\n        }\n    }\n    bool same(int\
    \ x,int y){\n        return root(x)==root(y);\n    }\n    int comp_count() const{\n\
    \        return count;\n    }\n};\n"
  code: "#pragma once\n#include <bits/stdc++.h>\nusing namespace std;\n#define rep(i,n)\
    \ for(ll i=0;i<n;i++)\nusing ll = long long;\n\nstruct UnionFind {\n    vector<int>\
    \ par;\n    vector<int> rank;\n    int count;\n    UnionFind(int N):par(N),rank(N,0),count(N){\n\
    \        rep(i,N) par[i]=i;\n    }\n    //\u7D4C\u8DEF\u5727\u7E2E\n    int root(int\
    \ x){\n        return par[x]==x?x:par[x]=root(par[x]);\n    }\n    void unite(int\
    \ x,int y){\n        int rx=root(x),ry=root(y);\n        if(rx==ry) return;\n\
    \        count--;\n        if(rank[rx]<rank[ry]) {\n            par[rx]=ry;\n\
    \        }\n        else {\n            par[ry]=rx;\n            if(rank[rx]==rank[ry])\
    \ rank[rx]++;\n        }\n    }\n    bool same(int x,int y){\n        return root(x)==root(y);\n\
    \    }\n    int comp_count() const{\n        return count;\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: library/structure/UnionFind.hpp
  requiredBy: []
  timestamp: '2025-07-28 00:38:59+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verifier/UnionFind_verify.test.cpp
documentation_of: library/structure/UnionFind.hpp
layout: document
redirect_from:
- /library/library/structure/UnionFind.hpp
- /library/library/structure/UnionFind.hpp.html
title: library/structure/UnionFind.hpp
---
