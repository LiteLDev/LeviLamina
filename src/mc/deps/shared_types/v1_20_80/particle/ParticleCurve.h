#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/ParticleCurveBezier.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleCurveBezierChain.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleCurveCatmullRom.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleCurveLinear.h"

namespace SharedTypes::v1_20_80 {

struct ParticleCurve {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 184, ::std::optional<::SharedTypes::v1_20_80::ParticleCurveLinear>>      mLinear;
    ::ll::TypedStorage<8, 184, ::std::optional<::SharedTypes::v1_20_80::ParticleCurveBezier>>      mBezier;
    ::ll::TypedStorage<8, 184, ::std::optional<::SharedTypes::v1_20_80::ParticleCurveCatmullRom>>  mCatmullRom;
    ::ll::TypedStorage<8, 120, ::std::optional<::SharedTypes::v1_20_80::ParticleCurveBezierChain>> mBezierChain;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleCurve& operator=(ParticleCurve const&);
    ParticleCurve();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ParticleCurve(::SharedTypes::v1_20_80::ParticleCurve&&);
#endif

    MCAPI ParticleCurve(::SharedTypes::v1_20_80::ParticleCurve const&);

    MCAPI bool operator==(::SharedTypes::v1_20_80::ParticleCurve const&) const;

#ifdef LL_PLAT_C
    MCAPI ~ParticleCurve();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleCurve&&);
#endif

    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleCurve const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
