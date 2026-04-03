#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"

namespace SharedTypes::v1_21_130::Brain {

struct InternalAccessMapDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::std::optional<::SharedTypes::v1_21_130::Brain::MemoryIdentifierDefinition<bool>>>
        mBeehiveHasNectar;
    // NOLINTEND

public:
    // prevent constructor by default
    InternalAccessMapDefinition& operator=(InternalAccessMapDefinition const&);
    InternalAccessMapDefinition(InternalAccessMapDefinition const&);
    InternalAccessMapDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_21_130::Brain::InternalAccessMapDefinition&
    operator=(::SharedTypes::v1_21_130::Brain::InternalAccessMapDefinition&&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& BEEHIVE_NECTAR_NAME();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::Brain
