#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace Editor::ScriptModule {

class ScriptClipboardWriteOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnkb3cdaf;
    ::ll::UntypedStorage<1, 2>  mUnk400dae;
    ::ll::UntypedStorage<4, 16> mUnk738760;
    ::ll::UntypedStorage<4, 16> mUnke5eb3e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptClipboardWriteOptions& operator=(ScriptClipboardWriteOptions const&);
    ScriptClipboardWriteOptions(ScriptClipboardWriteOptions const&);
    ScriptClipboardWriteOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptClipboardWriteOptions>
    bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
