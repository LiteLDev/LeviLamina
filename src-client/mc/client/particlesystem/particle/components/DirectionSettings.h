#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"

namespace ParticleSystem {

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
    ::ll::TypedStorage<4, 4, ::ParticleSystem::DirectionSettings::Mode> mMode;
    ::ll::TypedStorage<8, 48, ::ExpressionNode[3]>                      mCustomDirectionExpr;
    ::ll::TypedStorage<4, 4, float>                                     mMinSpeedThresholdSqr;
    // NOLINTEND
};

} // namespace ParticleSystem
