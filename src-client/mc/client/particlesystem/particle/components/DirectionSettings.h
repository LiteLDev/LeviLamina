#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_80 { struct DirectionSettings; }
// clang-format on

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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void upgradeToSharedTypes(::SharedTypes::v1_20_80::DirectionSettings& data);
    // NOLINTEND
};

} // namespace ParticleSystem
