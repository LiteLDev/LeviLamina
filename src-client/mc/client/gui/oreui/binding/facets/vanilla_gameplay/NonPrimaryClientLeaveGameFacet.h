#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

namespace OreUI {

class NonPrimaryClientLeaveGameFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::NonPrimaryClientLeaveGameFacet> {
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NonPrimaryClientLeaveGameFacet(
        ::std::function<void()>                   requestLeaveGame,
        ::std::function<void(::std::string_view)> requestJoinGame
    );
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

    // NOLINTEND
};

} // namespace OreUI
