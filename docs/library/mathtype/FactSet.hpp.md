---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: library/utility/helper.hpp
    title: library/utility/helper.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"library/mathtype/FactSet.hpp\"\n#include <bits/stdc++.h>\n\
    using namespace std;\n#define rep(i,n) for(ll i=0;i<n;i++)\n#define srep(i,l,r)\
    \ for(ll i=l;i<=r;i++)\n#define irep(i,r,l) for(ll i=r;i>=l;i--)\nusing ll = long\
    \ long;\nusing ld = long double;\n#define MOD 998244353ll\n#define vl vector<ll>\n\
    #line 3 \"library/utility/helper.hpp\"\nusing namespace std;\n#define rep(i,n)\
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
    \ gcd(b,a);\n    if(a%b==0) return b;\n    return gcd(b,a%b);\n}\n#line 12 \"\
    library/mathtype/FactSet.hpp\"\n\n\nclass factset {\n    public:\n        vl _fact;\n\
    \        vl _inv;\n        ll __n;\n        factset(ll n):_fact(n+1),_inv(n+1),__n(n)\
    \ {\n            _fact[0]=1;\n            srep(i,1,__n) {\n                _fact[i]=_fact[i-1]*i;\n\
    \                _fact[i]%=MOD;\n            }\n            _inv[__n]=modpow(_fact[__n],MOD-2,1);\n\
    \            for(int i=__n-1;i>=0;i--) {\n                _inv[i]=_inv[i+1]*(i+1);\n\
    \                _inv[i]%=MOD;\n            }\n        }\n        ll fact(ll x)\
    \ {\n            assert(0<=x && x<=__n);\n            return _fact[x];\n     \
    \   }\n        ll inv(ll x) {\n            assert(0<=x && x<=__n);\n         \
    \   return _inv[x];\n        }\n\n        ll comb(ll nn,ll k,ll mode) {\n    \
    \        ll ans=1;\n            ans*=_fact[nn];\n            ans%=MOD;\n     \
    \       ans*=_inv[nn-k];\n            ans%=MOD;\n            ans*=_inv[k];\n \
    \           return ans%MOD;\n        }\n        \n};\n"
  code: "#pragma once\n#include <bits/stdc++.h>\nusing namespace std;\n#define rep(i,n)\
    \ for(ll i=0;i<n;i++)\n#define srep(i,l,r) for(ll i=l;i<=r;i++)\n#define irep(i,r,l)\
    \ for(ll i=r;i>=l;i--)\nusing ll = long long;\nusing ld = long double;\n#define\
    \ MOD 998244353ll\n#define vl vector<ll>\n#include \"../utility/helper.hpp\"\n\
    \n\nclass factset {\n    public:\n        vl _fact;\n        vl _inv;\n      \
    \  ll __n;\n        factset(ll n):_fact(n+1),_inv(n+1),__n(n) {\n            _fact[0]=1;\n\
    \            srep(i,1,__n) {\n                _fact[i]=_fact[i-1]*i;\n       \
    \         _fact[i]%=MOD;\n            }\n            _inv[__n]=modpow(_fact[__n],MOD-2,1);\n\
    \            for(int i=__n-1;i>=0;i--) {\n                _inv[i]=_inv[i+1]*(i+1);\n\
    \                _inv[i]%=MOD;\n            }\n        }\n        ll fact(ll x)\
    \ {\n            assert(0<=x && x<=__n);\n            return _fact[x];\n     \
    \   }\n        ll inv(ll x) {\n            assert(0<=x && x<=__n);\n         \
    \   return _inv[x];\n        }\n\n        ll comb(ll nn,ll k,ll mode) {\n    \
    \        ll ans=1;\n            ans*=_fact[nn];\n            ans%=MOD;\n     \
    \       ans*=_inv[nn-k];\n            ans%=MOD;\n            ans*=_inv[k];\n \
    \           return ans%MOD;\n        }\n        \n};"
  dependsOn:
  - library/utility/helper.hpp
  isVerificationFile: false
  path: library/mathtype/FactSet.hpp
  requiredBy: []
  timestamp: '2025-07-28 17:37:55+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: library/mathtype/FactSet.hpp
layout: document
redirect_from:
- /library/library/mathtype/FactSet.hpp
- /library/library/mathtype/FactSet.hpp.html
title: library/mathtype/FactSet.hpp
---
