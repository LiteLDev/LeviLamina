#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
namespace Settings { struct IRegistry; }
// clang-format on

namespace OreUI {

class InvokeActionCommand : public ::OreUI::CommandGroupBase<::OreUI::InvokeActionCommand> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::Settings::IRegistry>()>> mSettingsRegistryFunc;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::std::string>>         mInvokeAction;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InvokeActionCommand() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
