#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_40 { struct WaterAppearanceClientBiomeJsonComponent; }
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes::Util {

class WaterAppearanceEmptyConstraint
: public ::cereal::ConstraintHandle<::SharedTypes::Util::WaterAppearanceEmptyConstraint> {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::cereal::internal::ConstraintDescription description(::cereal::ContextArea) const;

    MCAPI void validateValue(
        ::SharedTypes::v1_21_40::WaterAppearanceClientBiomeJsonComponent const& waterAppearanceComponent,
        ::cereal::SerializerContext&                                            context
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::Util
