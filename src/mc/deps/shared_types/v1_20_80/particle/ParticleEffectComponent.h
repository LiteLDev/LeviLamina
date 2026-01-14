#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleEffectComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleEffectComponent() = default;

    virtual ::HashedString const& getIdentifier() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::HashedString const& EmptyID();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
