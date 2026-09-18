#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/client/realms/PlayerRole.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace Realms { class RealmsRolesAndPermissions; }
// clang-format on

namespace OreUI {

class RealmsRolesAndPermissionsCommandGroup
: public ::OreUI::CommandGroupBase<::OreUI::RealmsRolesAndPermissionsCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsRolesAndPermissions>> mRolesAndPermissions;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string>>    mInitRolesAndActions;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string, ::Realms::PlayerRole>>
        mInitUserRolesAndActions;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string, ::Realms::PlayerRole>> mSetUserRole;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string>>        mSaveUserRole;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                                      mResetState;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>> mRefreshUserRolesAndActions;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsRolesAndPermissionsCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsRolesAndPermissionsCommandGroup(::OreUI::GameDependencies const& game);
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
