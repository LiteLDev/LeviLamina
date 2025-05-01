#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptJigsawStructurePlaceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnk91ce25;
    ::ll::UntypedStorage<1, 2> mUnk55c309;
    ::ll::UntypedStorage<1, 2> mUnke320d7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptJigsawStructurePlaceOptions& operator=(ScriptJigsawStructurePlaceOptions const&);
    ScriptJigsawStructurePlaceOptions(ScriptJigsawStructurePlaceOptions const&);
    ScriptJigsawStructurePlaceOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptJigsawStructurePlaceOptions>
    bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
