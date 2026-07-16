#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptMinimapCreateOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk34ae9b;
    ::ll::UntypedStorage<4, 8>  mUnkb4c02e;
    ::ll::UntypedStorage<4, 8>  mUnkbad1e5;
    ::ll::UntypedStorage<4, 12> mUnk4e9534;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMinimapCreateOptions& operator=(ScriptMinimapCreateOptions const&);
    ScriptMinimapCreateOptions(ScriptMinimapCreateOptions const&);
    ScriptMinimapCreateOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindInterface();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
