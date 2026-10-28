#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class MarketplaceSearchState;
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class MarketplaceSearchFiltersCommandGroup
: public ::OreUI::CommandGroupBase<::OreUI::MarketplaceSearchFiltersCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::MarketplaceSearchState>> mSearchState;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int>>               mSetSort;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, bool>>
                                                                                   mSetFilterToggle;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string>> mClearFilterCollection;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                mClearFilters;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                mApplyFilters;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int>>           mSetExpandedDropdown;
    // NOLINTEND

public:
    // prevent constructor by default
    MarketplaceSearchFiltersCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MarketplaceSearchFiltersCommandGroup(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI
