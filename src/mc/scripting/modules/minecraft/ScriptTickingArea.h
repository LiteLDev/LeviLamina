#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptTickingArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension>>
                                             mDimension;
    ::ll::TypedStorage<4, 24, ::BoundingBox> mBoundingBox;
    ::ll::TypedStorage<8, 32, ::std::string> mIdentifier;
    ::ll::TypedStorage<4, 4, int>            mNumberOfChunks;
    ::ll::TypedStorage<1, 1, bool>           mIsFullyLoaded;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
