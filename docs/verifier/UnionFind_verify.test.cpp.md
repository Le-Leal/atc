---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: library/structure/UnionFind.hpp
    title: library/structure/UnionFind.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/unionfind
    links:
    - https://judge.yosupo.jp/problem/unionfind
  bundledCode: "#line 1 \"verifier/UnionFind_verify.test.cpp\"\n#define PROBLEM \"\
    https://judge.yosupo.jp/problem/unionfind\"\n#include <bits/stdc++.h>\n#line 3\
    \ \"library/structure/UnionFind.hpp\"\nusing namespace std;\n#define rep(i,n)\
    \ for(ll i=0;i<n;i++)\nusing ll = long long;\n\nstruct UnionFind {\n    vector<int>\
    \ par;\n    vector<int> rank;\n    int count;\n    UnionFind(int N):par(N),rank(N,0),count(N){\n\
    \        rep(i,N) par[i]=i;\n    }\n    //\u7D4C\u8DEF\u5727\u7E2E\n    int root(int\
    \ x){\n        return par[x]==x?x:par[x]=root(par[x]);\n    }\n    void unite(int\
    \ x,int y){\n        int rx=root(x),ry=root(y);\n        if(rx==ry) return;\n\
    \        count--;\n        if(rank[rx]<rank[ry]) {\n            par[rx]=ry;\n\
    \        }\n        else {\n            par[ry]=rx;\n            if(rank[rx]==rank[ry])\
    \ rank[rx]++;\n        }\n    }\n    bool same(int x,int y){\n        return root(x)==root(y);\n\
    \    }\n    int comp_count() const{\n        return count;\n    }\n};\n#line 4\
    \ \"verifier/UnionFind_verify.test.cpp\"\nusing namespace std;\n\nint main() {\n\
    \    int n,q; cin>>n>>q;\n    UnionFind uf(n);\n    while(q--) {\n        int\
    \ t,x,y; cin>>t>>x>>y;\n        if(t==0) {\n            uf.unite(x,y);\n     \
    \   }\n        if(t==1) {\n            cout<<(uf.same(x,y) ? 1 : 0)<<endl;\n \
    \       }\n    }\n         \n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\n#include <bits/stdc++.h>\n\
    #include \"../library/structure/UnionFind.hpp\"\nusing namespace std;\n\nint main()\
    \ {\n    int n,q; cin>>n>>q;\n    UnionFind uf(n);\n    while(q--) {\n       \
    \ int t,x,y; cin>>t>>x>>y;\n        if(t==0) {\n            uf.unite(x,y);\n \
    \       }\n        if(t==1) {\n            cout<<(uf.same(x,y) ? 1 : 0)<<endl;\n\
    \        }\n    }\n         \n}"
  dependsOn:
  - library/structure/UnionFind.hpp
  isVerificationFile: true
  path: verifier/UnionFind_verify.test.cpp
  requiredBy: []
  timestamp: '2025-07-28 17:02:21+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verifier/UnionFind_verify.test.cpp
layout: document
redirect_from:
- /verify/verifier/UnionFind_verify.test.cpp
- /verify/verifier/UnionFind_verify.test.cpp.html
title: verifier/UnionFind_verify.test.cpp
---
