#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/FileReference.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct LootComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::FileReference<17>> mLootTable;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
