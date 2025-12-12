#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ColorGradient {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk526d91;
    ::ll::UntypedStorage<8, 24> mUnkc7ccd5;
    // NOLINTEND

public:
    // prevent constructor by default
    ColorGradient();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ColorGradient(::SharedTypes::v1_20_80::ColorGradient const&);

    MCNAPI ::SharedTypes::v1_20_80::ColorGradient& operator=(::SharedTypes::v1_20_80::ColorGradient&&);

    MCNAPI ::SharedTypes::v1_20_80::ColorGradient& operator=(::SharedTypes::v1_20_80::ColorGradient const&);

    MCNAPI ~ColorGradient();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ColorGradient const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
