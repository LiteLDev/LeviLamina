#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleCurve {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 184> mUnka8e25b;
    ::ll::UntypedStorage<8, 184> mUnkb0fc99;
    ::ll::UntypedStorage<8, 184> mUnkb873e0;
    ::ll::UntypedStorage<8, 120> mUnk8f86a3;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleCurve& operator=(ParticleCurve const&);
    ParticleCurve();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParticleCurve(::SharedTypes::v1_20_80::ParticleCurve const&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleCurve& operator=(::SharedTypes::v1_20_80::ParticleCurve&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleCurve const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
