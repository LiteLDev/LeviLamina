#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptMeshColorSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk82343f;
    ::ll::UntypedStorage<1, 1>  mUnk687300;
    ::ll::UntypedStorage<8, 32> mUnk17214c;
    ::ll::UntypedStorage<8, 24> mUnk962a36;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMeshColorSource& operator=(ScriptMeshColorSource const&);
    ScriptMeshColorSource(ScriptMeshColorSource const&);
    ScriptMeshColorSource();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
