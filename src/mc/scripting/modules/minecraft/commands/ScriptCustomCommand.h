#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
namespace ScriptModuleMinecraft { class ScriptCustomCommandOrigin; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCustomCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnke038de;
    ::ll::UntypedStorage<8, 24> mUnk2df370;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomCommand& operator=(ScriptCustomCommand const&);
    ScriptCustomCommand(ScriptCustomCommand const&);
    ScriptCustomCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~ScriptCustomCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCustomCommandOrigin>
    _createCustomCommandOrigin(::CommandOrigin const& origin, ::Scripting::WeakLifetimeScope const& scope) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool* getParamStorageIsSet(::Command* cmd, int index);

    MCNAPI static void* getParamStorageValue(::Command* cmd, int index);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
