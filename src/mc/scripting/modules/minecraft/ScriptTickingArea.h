#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
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
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptTickingArea();

    MCAPI ScriptTickingArea(::ScriptModuleMinecraft::ScriptTickingArea const&);

    MCAPI ::ScriptModuleMinecraft::ScriptTickingArea& operator=(::ScriptModuleMinecraft::ScriptTickingArea&&);

    MCAPI ::ScriptModuleMinecraft::ScriptTickingArea& operator=(::ScriptModuleMinecraft::ScriptTickingArea const&);

    MCAPI bool operator==(::ScriptModuleMinecraft::ScriptTickingArea const&) const;

    MCAPI ~ScriptTickingArea();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptTickingArea const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
