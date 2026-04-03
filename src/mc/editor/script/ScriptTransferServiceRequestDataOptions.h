#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptTransferServiceRequestDataOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnk55fc3d;
    ::ll::UntypedStorage<8, 40> mUnk905019;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTransferServiceRequestDataOptions& operator=(ScriptTransferServiceRequestDataOptions const&);
    ScriptTransferServiceRequestDataOptions(ScriptTransferServiceRequestDataOptions const&);
    ScriptTransferServiceRequestDataOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::ScriptModule::ScriptTransferServiceRequestDataOptions&
    operator=(::Editor::ScriptModule::ScriptTransferServiceRequestDataOptions&&);

    MCNAPI ~ScriptTransferServiceRequestDataOptions();
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
