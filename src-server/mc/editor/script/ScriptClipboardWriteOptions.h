#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptClipboardWriteOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnkb3cdaf;
    ::ll::UntypedStorage<1, 2> mUnk400dae;
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
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND

};

}
