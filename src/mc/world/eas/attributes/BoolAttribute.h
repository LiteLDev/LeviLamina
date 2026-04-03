#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/eas/attributes/EnvironmentAttribute.h"
#include "mc/world/eas/attributes/NoConstraint.h"

// auto generated forward declare list
// clang-format off
namespace EAS { class BoolModifier; }
// clang-format on

namespace EAS {

class BoolAttribute : public ::EAS::EnvironmentAttribute<bool, ::EAS::BoolModifier, ::EAS::NoConstraint<bool>> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BoolAttribute() /*override*/ = default;
    // NOLINTEND
};

} // namespace EAS
