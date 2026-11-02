#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
    MCNAPI bool operator==(::SharedTypes::v1_26_20::BlockDefinition::CraftingTableComponent const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& CraftingTagsId();

    MCNAPI static ::std::string_view const& NameId();

    MCNAPI static ::std::string_view const& TableNameId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
