#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/debugdrawer/ScriptDebugShape.h"

// auto generated forward declare list
// clang-format off
struct ShapeDataPayload;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleDebugUtilities {

class ScriptTextShape : public ::ScriptModuleDebugUtilities::ScriptDebugShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mText;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTextShape();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void populatePacketData(::ShapeDataPayload& packet) const /*override*/;

    virtual void applyUpdatedData(::ShapeDataPayload const& packet) /*override*/;

    virtual ~ScriptTextShape() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptTextShape(::ScriptModuleDebugUtilities::ScriptTextShape const&);

    MCAPI ::ScriptModuleDebugUtilities::ScriptTextShape&
    operator=(::ScriptModuleDebugUtilities::ScriptTextShape const&);

    MCAPI void setText(::std::string text);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleDebugUtilities::ScriptTextShape const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $populatePacketData(::ShapeDataPayload& packet) const;

    MCAPI void $applyUpdatedData(::ShapeDataPayload const& packet);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
