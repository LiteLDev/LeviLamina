#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/effect/EffectDuration.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Legacy {

struct MobEffectInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                         mEffect;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::EffectDuration>                  mDuration;
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::Legacy::EffectDuration>> mDurationEasy;
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::Legacy::EffectDuration>> mDurationNormal;
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::Legacy::EffectDuration>> mDurationHard;
    ::ll::TypedStorage<4, 4, int>                                                    mAmplifier;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::SharedTypes::Legacy::MobEffectInstance const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
