#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_10/block/PrecipitationBehavior.h"

namespace SharedTypes::v1_26_10::BlockDefinition {

struct PrecipitationInteractionsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_10::PrecipitationBehavior> mBehavior;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NameId();

    MCAPI static ::std::string_view const& PrecipitationBehaviorId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::BlockDefinition
