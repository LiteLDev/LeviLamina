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

class MarketplaceSearchTextCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::MarketplaceSearchTextCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::MarketplaceSearchState>> mSearchState;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string>>     mSubmitSearchText;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                    mCancelSearch;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                    mClearSearchText;
    // NOLINTEND

public:
    // prevent constructor by default
    MarketplaceSearchTextCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MarketplaceSearchTextCommandGroup(::OreUI::GameDependencies const& game);
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
