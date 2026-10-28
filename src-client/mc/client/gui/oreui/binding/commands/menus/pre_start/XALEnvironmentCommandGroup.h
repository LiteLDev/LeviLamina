#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
namespace OreUI { class ClientDependencies; }
namespace Social { class IUserManager; }
// clang-format on

namespace OreUI {

class XALEnvironmentCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::XALEnvironmentCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::IOptionRegistry>>      mOptions;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::Social::IUserManager>> mUserManager;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, bool>>      mSetUseRetailSandbox;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>            mClearUserCredentials;
    // NOLINTEND

public:
    // prevent constructor by default
    XALEnvironmentCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit XALEnvironmentCommandGroup(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND
};

} // namespace OreUI
