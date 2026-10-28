#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/ColorExpr.h"
#include "mc/deps/shared_types/v1_20_80/particle/ColorGradient.h"

namespace SharedTypes::v1_20_80 {

struct TintingComponentColor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::optional<::SharedTypes::v1_20_80::ColorGradient>> mInterpolatedColor;
    ::ll::TypedStorage<8, 56, ::std::optional<::SharedTypes::Legacy::ExpressionNode>>  mInterpolantExpr;
    ::ll::TypedStorage<8, 200, ::std::optional<::SharedTypes::v1_20_80::ColorExpr>>    mColor;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    TintingComponentColor& operator=(TintingComponentColor const&);
    TintingComponentColor();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI TintingComponentColor(::SharedTypes::v1_20_80::TintingComponentColor const&);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::SharedTypes::v1_20_80::TintingComponentColor const&);
#endif
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
