#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"

namespace OreUI {

class NonPrimaryClientLeaveGameFacet : public ::OreUI::FacetBase<::OreUI::NonPrimaryClientLeaveGameFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                   mRequestLeaveGame;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string_view)>> mRequestJoinGame;
    // NOLINTEND

public:
    // prevent constructor by default
    NonPrimaryClientLeaveGameFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~NonPrimaryClientLeaveGameFacet() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NonPrimaryClientLeaveGameFacet(
        ::std::function<void()>                   requestLeaveGame,
        ::std::function<void(::std::string_view)> requestJoinGame
    );

    MCFOLD void leaveGame();

    MCAPI void leaveGameThenJoinFriendsWorld(::std::string const& serverId);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const* const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::function<void()> requestLeaveGame, ::std::function<void(::std::string_view)> requestJoinGame);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
