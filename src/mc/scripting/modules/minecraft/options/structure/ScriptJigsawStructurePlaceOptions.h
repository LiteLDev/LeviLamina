#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptJigsawStructurePlaceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnk91ce25;
    ::ll::UntypedStorage<1, 2> mUnk55c309;
    ::ll::UntypedStorage<1, 2> mUnke320d7;
    ::ll::UntypedStorage<1, 2> mUnkb5bf91;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptJigsawStructurePlaceOptions& operator=(ScriptJigsawStructurePlaceOptions const&);
    ScriptJigsawStructurePlaceOptions(ScriptJigsawStructurePlaceOptions const&);
    ScriptJigsawStructurePlaceOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
