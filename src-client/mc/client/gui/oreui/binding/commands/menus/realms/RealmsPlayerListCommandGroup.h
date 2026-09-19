#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace Realms { class RealmsPlayerList; }
namespace Realms { class RealmsPlayerManagement; }
// clang-format on

namespace OreUI {

class RealmsPlayerListCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::RealmsPlayerListCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsPlayerList>>                      mRealmsPlayerList;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsPlayerManagement>>                mRealmsManagePlayer;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                               mPopulateMembers;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string>>                mFetchBlockedPlayers;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                               mResetState;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                               mResetBlocklistState;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string>> mRemovePlayer;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string>> mBlockPlayer;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string>> mUnblockPlayer;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                               mResetManageState;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPlayerListCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsPlayerListCommandGroup(::OreUI::GameDependencies const& game);
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
