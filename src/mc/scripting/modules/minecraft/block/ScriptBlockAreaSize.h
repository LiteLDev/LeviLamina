#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptBlockAreaSize {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk4c4b8d;
    ::ll::UntypedStorage<4, 4> mUnkfe0878;
    ::ll::UntypedStorage<4, 4> mUnkb31ff1;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockAreaSize& operator=(ScriptBlockAreaSize const&);
    ScriptBlockAreaSize(ScriptBlockAreaSize const&);
    ScriptBlockAreaSize();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptBlockAreaSize> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
