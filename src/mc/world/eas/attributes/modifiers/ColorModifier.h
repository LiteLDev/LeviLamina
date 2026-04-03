#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/eas/attributes/modifiers/ColorAttributeOperation.h"
#include "mc/world/eas/attributes/modifiers/IAttributeModifier.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace EAS {

class ColorModifier : public ::EAS::IAttributeModifier<::mce::Color, ::EAS::ColorAttributeOperation> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ColorModifier() /*override*/ = default;
    // NOLINTEND
};

} // namespace EAS
