#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/primitiveshapes/ScriptPrimitiveShape.h"

// auto generated forward declare list
// clang-format off
class Vec3;
struct PrimitiveShapeDataPayload;
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCirclePrimitive : public ::ScriptModuleMinecraft::ScriptPrimitiveShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mSegments;
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
    MCAPI ScriptCirclePrimitive();

#ifdef LL_PLAT_S
    MCAPI ScriptCirclePrimitive(
        ::std::variant<::ScriptModuleMinecraft::ScriptDimensionLocation, ::Vec3> const& location,
        bool                                                                            isDebugShape
    );
#endif

#ifdef LL_PLAT_C
    MCFOLD int getNumSegments() const;
#endif
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
    MCAPI void*
    $ctor(::std::variant<::ScriptModuleMinecraft::ScriptDimensionLocation, ::Vec3> const& location, bool isDebugShape);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $populatePacketData(::PrimitiveShapeDataPayload& packetShapeData) const;

    MCFOLD void $applyUpdatedData(::PrimitiveShapeDataPayload const& existing);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
