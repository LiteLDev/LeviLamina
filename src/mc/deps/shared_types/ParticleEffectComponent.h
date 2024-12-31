#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace SharedTypes::v1_21 {

struct ParticleEffectComponent {
public:
    // prevent constructor by default
    ParticleEffectComponent& operator=(ParticleEffectComponent const&);
    ParticleEffectComponent(ParticleEffectComponent const&);
    ParticleEffectComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ParticleEffectComponent() = default;

    // vIndex: 1
    virtual ::HashedString const& getIdentifier() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace SharedTypes::v1_21
