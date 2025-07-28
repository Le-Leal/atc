---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: library/mathtype/FactSet.hpp
    title: library/mathtype/FactSet.hpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"library/utility/helper.hpp\"\n#include <bits/stdc++.h>\n\
    using namespace std;\n#define rep(i,n) for(ll i=0;i<n;i++)\nusing ll = long long;\n\
    #define MOD 998244353ll\n#define INF 9223300000000000000ll\n\n\n\nll vecmax(vector<ll>\
    \ &a) {\n    ll ans=-INF;\n    rep(i,(ll)a.size()) {\n        ans=max(ans,a[i]);\n\
    \    }\n    return ans;\n}\n\nll vecmin(vector<ll> &a) {\n    ll ans=INF;\n  \
    \  rep(i,(ll)a.size()) {\n        ans=min(ans,a[i]);\n    }\n    return ans;\n\
    }\n\n\n\ntemplate <class T> void vecpr(T first,T last) {\n    ll tmp=0;\n    for(auto\
    \ it=first;it!=last;++it) {\n        if(tmp) cout<<\" \";\n        cout<<*it;\n\
    \        tmp++;\n    }\n    cout<<endl;\n}\n\n\nll modpow(ll fl, ll po, ll mode)\
    \ {  // mode: 0=mod\u306A\u3057, 1=mod\u3042\u308A\n    ll ret=1;\n    if (mode)\
    \ {\n        while (po>0) {\n            if (po&1) ret=(ret*fl)%MOD;\n       \
    \     fl=(fl*fl)%MOD;\n            po>>=1;\n        }\n    } else {\n        while\
    \ (po>0) {\n            if(po&1) ret*=fl;\n            fl*=fl;\n            po>>=1;\n\
    \        }\n    }\n    return ret;\n}\n\nll gcd(ll a,ll b) {  //Euclid\n    if(a<b)\
    \ return gcd(b,a);\n    if(a%b==0) return b;\n    return gcd(b,a%b);\n}\n"
  code: "#pragma once\n#include <bits/stdc++.h>\nusing namespace std;\n#define rep(i,n)\
    \ for(ll i=0;i<n;i++)\nusing ll = long long;\n#define MOD 998244353ll\n#define\
    \ INF 9223300000000000000ll\n\n\n\nll vecmax(vector<ll> &a) {\n    ll ans=-INF;\n\
    \    rep(i,(ll)a.size()) {\n        ans=max(ans,a[i]);\n    }\n    return ans;\n\
    }\n\nll vecmin(vector<ll> &a) {\n    ll ans=INF;\n    rep(i,(ll)a.size()) {\n\
    \        ans=min(ans,a[i]);\n    }\n    return ans;\n}\n\n\n\ntemplate <class\
    \ T> void vecpr(T first,T last) {\n    ll tmp=0;\n    for(auto it=first;it!=last;++it)\
    \ {\n        if(tmp) cout<<\" \";\n        cout<<*it;\n        tmp++;\n    }\n\
    \    cout<<endl;\n}\n\n\nll modpow(ll fl, ll po, ll mode) {  // mode: 0=mod\u306A\
    \u3057, 1=mod\u3042\u308A\n    ll ret=1;\n    if (mode) {\n        while (po>0)\
    \ {\n            if (po&1) ret=(ret*fl)%MOD;\n            fl=(fl*fl)%MOD;\n  \
    \          po>>=1;\n        }\n    } else {\n        while (po>0) {\n        \
    \    if(po&1) ret*=fl;\n            fl*=fl;\n            po>>=1;\n        }\n\
    \    }\n    return ret;\n}\n\nll gcd(ll a,ll b) {  //Euclid\n    if(a<b) return\
    \ gcd(b,a);\n    if(a%b==0) return b;\n    return gcd(b,a%b);\n}"
  dependsOn: []
  isVerificationFile: false
  path: library/utility/helper.hpp
  requiredBy:
  - library/mathtype/FactSet.hpp
  timestamp: '2025-07-28 00:40:36+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: library/utility/helper.hpp
layout: document
redirect_from:
- /library/library/utility/helper.hpp
- /library/library/utility/helper.hpp.html
title: library/utility/helper.hpp
---
