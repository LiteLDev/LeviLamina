#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_90 {

struct SwingSoundsItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::Legacy::LevelSoundEvent>> mAttackMissSound;
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::Legacy::LevelSoundEvent>> mAttackHitSound;
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::Legacy::LevelSoundEvent>> mAttackCriticalHitSound;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_90
