---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: library/mathtype/mathHelper.hpp
    title: library/mathtype/mathHelper.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"library/mathtype/chineseremainder.hpp\"\n#include <bits/stdc++.h>\n\
    using namespace std;\n#define rep(i,n) for(ll i=0;i<n;i++)\n#define srep(i,l,r)\
    \ for(ll i=l;i<=r;i++)\n#define irep(i,r,l) for(ll i=r;i>=l;i--)\nusing ll = long\
    \ long;\nusing ld = long double;\n#line 3 \"library/mathtype/mathHelper.hpp\"\n\
    using namespace std;\nusing ll = long long;\n\n\nvector<ll> pfact(ll n) {\n  \
    \  vector<ll> resp;\n    vector<bool> prefact(sqrtl(n)+10);\n    for(ll i=2;i*i<=n;i++)\
    \ {\n        while(n%i==0) {\n            n/=i;\n            if(!prefact[i]) resp.push_back(i);\n\
    \            prefact[i]=true;\n        }\n    }\n    if(n!=1) resp.push_back(n);\n\
    \    return resp;\n}\n\n\nll modinv(ll a, ll mod) { //\u62E1\u5F35Euclid\u306B\
    \u3088\u308Bmod\u3067\u306E\u9006\u5143, a*u+mod*v=1\u3092\u89E3\u304F\n\tll b=mod,u=1,v=0;\n\
    \twhile (b) {\n\t\tll t=a/b;\n\t\ta-=t*b;\n        swap(a,b);\n\t\tu-=t*v;\n \
    \       swap(u,v);\n\t}\n\tu%=mod; \n\tif (u < 0) u+=mod;\n\treturn u;\n}\n\n\
    ll extgcd(ll a, ll b, ll &x, ll &y) { // ax+by=gcd(a,b) -> x,y\u3092\u683C\u7D0D\
    \n    if (b==0) {\n        x=1;\n        y=0;\n        return a;\n    }\n    ll\
    \ d=extgcd(b,a%b,y,x);\n    y-=a/b*x;\n    return d;\n}\n\nll divcount(ll n) {\n\
    \    ll ans=0;\n    for(int i=1;i*i<=n;i++) {\n        if(n%i==0) ans+=(i*i==n\
    \ ? 1:2);\n    }\n    return ans;\n}\n\n\n#line 10 \"library/mathtype/chineseremainder.hpp\"\
    \n\nbool crt(ll a1,ll m1,ll a2,ll m2,ll &r,ll &lcm) {\n    ll x,y;\n    ll g=extgcd(m1,m2,x,y);\n\
    \    if ((a2-a1)%g!=0) return false; // No sols.\n\n    ll _MOD_=m1/g*m2;\n  \
    \  ll tmp=((a2-a1)/g*x)%(m2/g);\n    r=(a1+m1*tmp)%_MOD_;\n    if (r<0) r+=_MOD_;\n\
    \    lcm=_MOD_;\n    return true;\n}\n"
  code: "#pragma once\n#include <bits/stdc++.h>\nusing namespace std;\n#define rep(i,n)\
    \ for(ll i=0;i<n;i++)\n#define srep(i,l,r) for(ll i=l;i<=r;i++)\n#define irep(i,r,l)\
    \ for(ll i=r;i>=l;i--)\nusing ll = long long;\nusing ld = long double;\n#include\
    \ \"mathHelper.hpp\"\n\nbool crt(ll a1,ll m1,ll a2,ll m2,ll &r,ll &lcm) {\n  \
    \  ll x,y;\n    ll g=extgcd(m1,m2,x,y);\n    if ((a2-a1)%g!=0) return false; //\
    \ No sols.\n\n    ll _MOD_=m1/g*m2;\n    ll tmp=((a2-a1)/g*x)%(m2/g);\n    r=(a1+m1*tmp)%_MOD_;\n\
    \    if (r<0) r+=_MOD_;\n    lcm=_MOD_;\n    return true;\n}"
  dependsOn:
  - library/mathtype/mathHelper.hpp
  isVerificationFile: false
  path: library/mathtype/chineseremainder.hpp
  requiredBy: []
  timestamp: '2025-07-28 17:04:41+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: library/mathtype/chineseremainder.hpp
layout: document
redirect_from:
- /library/library/mathtype/chineseremainder.hpp
- /library/library/mathtype/chineseremainder.hpp.html
title: library/mathtype/chineseremainder.hpp
---
