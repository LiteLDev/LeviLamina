#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/TelemetryBatcher.h"
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace Settings { struct IRegistry; }
// clang-format on

namespace OreUI {

class UpdateSettingsCommand : public ::OreUI::CommandGroupBase<::OreUI::UpdateSettingsCommand> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::Settings::IRegistry>()>>        mSettingsRegistryFunc;
    ::ll::TypedStorage<8, 72, ::OreUI::TelemetryBatcher>                                          mTelemetryBatcher;
    ::ll::TypedStorage<1, 1, bool>                                                                mIsPreGame;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::std::string, bool>>          mUpdateBoolean;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::std::string, int>>           mUpdateOption;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string>> mUpdateString;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::std::string, double>>        mUpdateNumber;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::std::string>>                mCommitString;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateSettingsCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UpdateSettingsCommand() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit UpdateSettingsCommand(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
