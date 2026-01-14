#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_80 { struct ColorExpr; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ColorGradient {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::SharedTypes::v1_20_80::ColorExpr>>>     mColorArray;
    ::ll::TypedStorage<8, 24, ::std::optional<::std::map<float, ::SharedTypes::v1_20_80::ColorExpr>>> mColorMap;
    // NOLINTEND

public:
    // prevent constructor by default
    ColorGradient();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ColorGradient(::SharedTypes::v1_20_80::ColorGradient const&);

    MCAPI ::SharedTypes::v1_20_80::ColorGradient& operator=(::SharedTypes::v1_20_80::ColorGradient&&);

    MCAPI ::SharedTypes::v1_20_80::ColorGradient& operator=(::SharedTypes::v1_20_80::ColorGradient const&);

    MCAPI ~ColorGradient();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_80::ColorGradient const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
