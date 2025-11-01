#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/shared/ScriptDebugCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class IScriptDebugger;
class ScriptDiagnosticsPublishToFile;
// clang-format on

class ServerScriptDebugCommand : public ::ScriptDebugCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkbe492c;
    ::ll::UntypedStorage<4, 4> mUnk16a659;
    ::ll::UntypedStorage<4, 4> mUnk79156f;
    ::ll::UntypedStorage<4, 4> mUnke39369;
    ::ll::UntypedStorage<8, 32> mUnkb35c35;
    ::ll::UntypedStorage<4, 4> mUnk9e0646;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerScriptDebugCommand& operator=(ServerScriptDebugCommand const&);
    ServerScriptDebugCommand(ServerScriptDebugCommand const&);
    ServerScriptDebugCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const&, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~ServerScriptDebugCommand() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ScriptDiagnosticsPublishToFile*& sDiagnosticsPublishToFile();

    MCAPI static ::std::optional<ushort>& sForcedPort();

    MCAPI static ::IScriptDebugger*& sServerScriptDebugger();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const&, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
