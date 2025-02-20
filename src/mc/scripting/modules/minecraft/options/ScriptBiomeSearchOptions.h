#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result.h"

namespace ScriptModuleMinecraft {

struct ScriptBiomeSearchOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk468d38;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBiomeSearchOptions& operator=(ScriptBiomeSearchOptions const&);
    ScriptBiomeSearchOptions(ScriptBiomeSearchOptions const&);
    ScriptBiomeSearchOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void> validate() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptBiomeSearchOptions> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
