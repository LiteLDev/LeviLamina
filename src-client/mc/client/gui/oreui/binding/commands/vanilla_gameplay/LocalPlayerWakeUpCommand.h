#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
// clang-format on

namespace OreUI {

class LocalPlayerWakeUpCommand : public ::OreUI::CommandGroupBase<::OreUI::LocalPlayerWakeUpCommand> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::IClientInstance>> mClient;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>       mWakeUp;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void wakeUp();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
