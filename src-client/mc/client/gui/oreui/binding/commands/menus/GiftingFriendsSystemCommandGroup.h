#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
namespace Marketplace { class GiftingFriendsManager; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class GiftingFriendsSystemCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::GiftingFriendsSystemCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Marketplace::GiftingFriendsManager>> mGiftingFriendsManager;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string>> mSelectGiftRecipient;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                               mExitGiftFlow;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>> mClearGiftRecipientError;
    // NOLINTEND

public:
    // prevent constructor by default
    GiftingFriendsSystemCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit GiftingFriendsSystemCommandGroup(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI
