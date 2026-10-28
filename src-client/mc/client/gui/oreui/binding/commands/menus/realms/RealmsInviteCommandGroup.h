#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace Realms { class RealmsPlayerList; }
// clang-format on

namespace OreUI {

class RealmsInviteCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::RealmsInviteCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsPlayerList>>                      mPlayerListManager;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::vector<::std::string>>> mFetchInvitedPlayers;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsInviteCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsInviteCommandGroup(::OreUI::GameDependencies const& game);
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
