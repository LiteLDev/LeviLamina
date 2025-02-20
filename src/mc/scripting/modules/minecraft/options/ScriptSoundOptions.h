#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptSoundOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnkdbc387;
    ::ll::UntypedStorage<4, 8>  mUnka3a93a;
    ::ll::UntypedStorage<4, 8>  mUnkfc4ebf;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSoundOptions& operator=(ScriptSoundOptions const&);
    ScriptSoundOptions(ScriptSoundOptions const&);
    ScriptSoundOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptSoundOptions> bindV010();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
