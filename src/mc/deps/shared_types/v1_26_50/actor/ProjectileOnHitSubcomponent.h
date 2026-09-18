#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_50 {

struct ProjectileOnHitSubcomponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProjectileOnHitSubcomponent() = default;

    virtual ::std::string_view const getName() const = 0;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50
