#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/primitiveshapes/ScriptLinePrimitive.h"

// auto generated forward declare list
// clang-format off
class Vec3;
struct PrimitiveShapeDataPayload;
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
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
    MCAPI ScriptArrowPrimitive();

#ifdef LL_PLAT_S
    MCAPI ScriptArrowPrimitive(
        ::std::variant<::ScriptModuleMinecraft::ScriptDimensionLocation, ::Vec3> const& location,
        ::Vec3 const&                                                                   endLocation,
        bool                                                                            isDebugShape
    );
#endif

    MCAPI float getHeadLength() const;

    MCAPI float getHeadRadius() const;

    MCFOLD int getNumSegments() const;

    MCAPI void setHeadLength(float length);

    MCAPI void setHeadRadius(float radius);

    MCAPI void setNumSegments(int segments);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

#ifdef LL_PLAT_S
    MCAPI void* $ctor(
        ::std::variant<::ScriptModuleMinecraft::ScriptDimensionLocation, ::Vec3> const& location,
        ::Vec3 const&                                                                   endLocation,
        bool                                                                            isDebugShape
    );
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $populatePacketData(::PrimitiveShapeDataPayload& packetShapeData) const;

    MCAPI void $applyUpdatedData(::PrimitiveShapeDataPayload const& existing);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
