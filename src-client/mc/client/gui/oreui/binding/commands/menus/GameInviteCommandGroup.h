#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace OreUI { class InvocationStatus; }
namespace Social { struct MultiplayerServiceManager; }
// clang-format on

namespace OreUI {

class GameInviteCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::GameInviteCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager>> mMultiplayerService;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::std::vector<::std::string>>> mInviteXboxPlayers;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::std::vector<::std::string>>>
        mInvitePlatformPlayers;
    // NOLINTEND

public:
    // prevent constructor by default
    GameInviteCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameInviteCommandGroup() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit GameInviteCommandGroup(::OreUI::GameDependencies const& game);

    MCAPI void
    _invitePlatformPlayers(::OreUI::InvocationStatus status, ::std::vector<::std::string> const& uuids) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
