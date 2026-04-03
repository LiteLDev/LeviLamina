#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptTransferServiceSendDataOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkc00b07;
    ::ll::UntypedStorage<1, 2>  mUnk63b339;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTransferServiceSendDataOptions& operator=(ScriptTransferServiceSendDataOptions const&);
    ScriptTransferServiceSendDataOptions(ScriptTransferServiceSendDataOptions const&);
    ScriptTransferServiceSendDataOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::ScriptModule::ScriptTransferServiceSendDataOptions&
    operator=(::Editor::ScriptModule::ScriptTransferServiceSendDataOptions&&);

    MCNAPI ~ScriptTransferServiceSendDataOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindInterface();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
