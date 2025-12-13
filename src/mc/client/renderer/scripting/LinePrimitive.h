#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/scripting/BasePrimitivePosition.h"
#include "mc/scripting/PrimitiveType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec3;
namespace Scripting::RenderHelper { struct Vertex; }
// clang-format on

namespace Scripting::RenderHelper {

class LinePrimitive : public ::Scripting::RenderHelper::BasePrimitivePosition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkfec3ba;
    ::ll::UntypedStorage<4, 16> mUnkaecbb4;
    ::ll::UntypedStorage<4, 32> mUnk56302a;
    // NOLINTEND

public:
    // prevent constructor by default
    LinePrimitive& operator=(LinePrimitive const&);
    LinePrimitive(LinePrimitive const&);
    LinePrimitive();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LinePrimitive() /*override*/ = default;

    virtual void setPosition(::Vec3 const& position) /*override*/;

    virtual ::Scripting::RenderHelper::PrimitiveType getType() const /*override*/;

    virtual void updateBoundingBox(::Vec3 const& ownerOffset, ::AABB& bounds) const /*override*/;

    virtual void _rebuild() /*override*/;

    virtual void _getVertices(::std::vector<::Scripting::RenderHelper::Vertex>& vertices) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $setPosition(::Vec3 const& position);

    MCNAPI void $updateBoundingBox(::Vec3 const& ownerOffset, ::AABB& bounds) const;

    MCNAPI void $_rebuild();

    MCNAPI void $_getVertices(::std::vector<::Scripting::RenderHelper::Vertex>& vertices);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting::RenderHelper
