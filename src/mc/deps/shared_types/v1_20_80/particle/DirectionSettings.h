#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct DirectionSettings {
public:
    // DirectionSettings inner types define
    enum class Mode : int {
        UseVelocity = 0,
        Custom      = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_20_80::DirectionSettings::Mode>         mMode;
    ::ll::TypedStorage<8, 144, ::std::array<::SharedTypes::Legacy::ExpressionNode, 3>> mCustomDirectionExpr;
    ::ll::TypedStorage<4, 4, float>                                                    mMinSpeedThreshold;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectionSettings& operator=(DirectionSettings const&);
    DirectionSettings(DirectionSettings const&);
    DirectionSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_20_80::DirectionSettings& operator=(::SharedTypes::v1_20_80::DirectionSettings&&);

    MCAPI_C ~DirectionSettings();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_C void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
