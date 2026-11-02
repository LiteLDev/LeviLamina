#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
namespace ScriptModuleMinecraft { class CommandClosureStorage; }
namespace ScriptModuleMinecraft { class ParamStorageBase; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCustomCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ScriptModuleMinecraft::CommandClosureStorage>> mClosureStorage;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ScriptModuleMinecraft::ParamStorageBase>>>
        mParamStorage;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
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
};

} // namespace ScriptModuleMinecraft
