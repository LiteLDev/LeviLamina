#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/primitiveshapes/ScriptLinePrimitive.h"

// auto generated forward declare list
// clang-format off
struct PrimitiveShapeDataPayload;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptArrowPrimitive : public ::ScriptModuleMinecraft::ScriptLinePrimitive {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mHeadRadius;
    ::ll::TypedStorage<4, 4, float> mHeadLength;
    ::ll::TypedStorage<4, 4, int>   mSegments;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void populatePacketData(::PrimitiveShapeDataPayload& packetShapeData) const /*override*/;

    virtual void applyUpdatedData(::PrimitiveShapeDataPayload const& existing) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptArrowPrimitive();

    MCNAPI void setHeadLength(float length);

    MCNAPI void setHeadRadius(float radius);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $populatePacketData(::PrimitiveShapeDataPayload& packetShapeData) const;

    MCNAPI void $applyUpdatedData(::PrimitiveShapeDataPayload const& existing);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
