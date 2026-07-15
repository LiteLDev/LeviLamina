#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
namespace ParticleSystem { class EffectComponentBase; }
// clang-format on

namespace ParticleSystem {

class ParticleEffectComponentRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::
            unordered_map<::HashedString, ::std::function<::std::unique_ptr<::ParticleSystem::EffectComponentBase>()>>>
        mComponentRegistry;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void registerComponent(
        ::HashedString const&                                                       name,
        ::std::function<::std::unique_ptr<::ParticleSystem::EffectComponentBase>()> createFunc
    );
    // NOLINTEND
};

} // namespace ParticleSystem
