#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_60::BlockDefinition {

struct BlockVibrationPropertiesComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mCanDampen;
    ::ll::TypedStorage<1, 1, bool> mCanOcclude;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& DampenVibrationsId();

    MCAPI static ::std::string_view const& NameId();

    MCAPI static ::std::string_view const& OccludeVibrationsId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_60::BlockDefinition
