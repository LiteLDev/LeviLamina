#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/eas/attributes/EnvironmentAttribute.h"
#include "mc/world/eas/attributes/FloatConstraint.h"

// auto generated forward declare list
// clang-format off
namespace EAS { class FloatModifier; }
// clang-format on

namespace EAS {

class FloatAttribute : public ::EAS::EnvironmentAttribute<float, ::EAS::FloatModifier, ::EAS::FloatConstraint> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FloatAttribute() /*override*/ = default;
    // NOLINTEND
};

} // namespace EAS
