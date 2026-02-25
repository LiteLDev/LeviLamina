#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/experimental/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
struct ISettingsRegistry;
// clang-format on

namespace OreUI::Experimental {

class InvokeActionCommand : public ::OreUI::Experimental::CommandGroupBase<::OreUI::Experimental::InvokeActionCommand> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ISettingsRegistry>>                            mSettingsRegistry;
    ::ll::TypedStorage<8, 136, ::OreUI::Experimental::Detail::CallableImpl<void, ::std::string>> mInvokeAction;
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

} // namespace OreUI::Experimental
