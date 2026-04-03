#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/world/eas/attributes/EnvironmentAttribute.h"
#include "mc/world/eas/attributes/NoConstraint.h"

// auto generated forward declare list
// clang-format off
namespace EAS { class ColorModifier; }
// clang-format on

namespace EAS {

class ColorAttribute
: public ::EAS::EnvironmentAttribute<::mce::Color, ::EAS::ColorModifier, ::EAS::NoConstraint<::mce::Color>> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ColorAttribute() /*override*/ = default;
    // NOLINTEND
};

} // namespace EAS
