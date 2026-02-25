#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/experimental/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
struct ISettingsRegistry;
namespace OreUI::Experimental { class ClientDependencies; }
// clang-format on

namespace OreUI::Experimental {

class UpdateSettingsCommand
: public ::OreUI::Experimental::CommandGroupBase<::OreUI::Experimental::UpdateSettingsCommand> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ISettingsRegistry>> mSettingsRegistry;
    ::ll::TypedStorage<8, 136, ::OreUI::Experimental::Detail::CallableImpl<void, ::std::string, bool>> mUpdateBoolean;
    ::ll::TypedStorage<8, 136, ::OreUI::Experimental::Detail::CallableImpl<void, ::std::string, int>>  mUpdateOption;
    ::ll::TypedStorage<8, 136, ::OreUI::Experimental::Detail::CallableImpl<void, ::std::string, ::std::string>>
                                                                                                         mUpdateString;
    ::ll::TypedStorage<8, 136, ::OreUI::Experimental::Detail::CallableImpl<void, ::std::string, double>> mUpdateNumber;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateSettingsCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UpdateSettingsCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit UpdateSettingsCommand(::OreUI::Experimental::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Experimental::ClientDependencies const& client);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI::Experimental
