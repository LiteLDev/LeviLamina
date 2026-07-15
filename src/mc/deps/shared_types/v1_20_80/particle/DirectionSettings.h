#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"

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
};

} // namespace SharedTypes::v1_20_80
