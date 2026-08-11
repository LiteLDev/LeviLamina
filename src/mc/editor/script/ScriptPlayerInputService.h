#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptPlayerInputService
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptPlayerInputService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkdc75c9;
    ::ll::UntypedStorage<8, 8>  mUnk117cab;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInputService& operator=(ScriptPlayerInputService const&);
    ScriptPlayerInputService(ScriptPlayerInputService const&);
    ScriptPlayerInputService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void>
    unregisterKeyBinding(::std::string const& contextId, ::std::string const& bindingId);

    MCNAPI ::Scripting::Result_deprecated<void>
    unregisterMouseBinding(::std::string const& contextId, ::std::string const& bindingId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
