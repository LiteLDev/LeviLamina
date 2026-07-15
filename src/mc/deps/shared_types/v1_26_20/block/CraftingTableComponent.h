#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct CraftingTableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                mTableName;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mCraftingTags;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD bool operator==(::SharedTypes::v1_26_20::BlockDefinition::CraftingTableComponent const&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
