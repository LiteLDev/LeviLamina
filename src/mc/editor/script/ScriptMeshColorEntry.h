#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptMeshColorEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk859873;
    ::ll::UntypedStorage<8, 24> mUnk4d5a2c;
    ::ll::UntypedStorage<4, 4>  mUnk7b8c8c;
    ::ll::UntypedStorage<8, 32> mUnkd6d402;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMeshColorEntry& operator=(ScriptMeshColorEntry const&);
    ScriptMeshColorEntry(ScriptMeshColorEntry const&);
    ScriptMeshColorEntry();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
