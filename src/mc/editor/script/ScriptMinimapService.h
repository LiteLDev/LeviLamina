#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptMinimapService : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptMinimapService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4b9b31;
    ::ll::UntypedStorage<8, 16> mUnk6d40e1;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMinimapService& operator=(ScriptMinimapService const&);
    ScriptMinimapService(ScriptMinimapService const&);
    ScriptMinimapService();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
