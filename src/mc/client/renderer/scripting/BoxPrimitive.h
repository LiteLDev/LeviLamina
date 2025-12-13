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

class BoxPrimitive : public ::Scripting::RenderHelper::BasePrimitivePosition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12>  mUnk6229dd;
    ::ll::UntypedStorage<4, 16>  mUnk20be55;
    ::ll::UntypedStorage<4, 384> mUnkdda332;
    // NOLINTEND

public:
    // prevent constructor by default
    BoxPrimitive& operator=(BoxPrimitive const&);
    BoxPrimitive(BoxPrimitive const&);
    BoxPrimitive();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BoxPrimitive() /*override*/ = default;

    virtual ::Scripting::RenderHelper::PrimitiveType getType() const /*override*/;

    virtual void updateBoundingBox(::Vec3 const& ownerOffset, ::AABB& bounds) const /*override*/;

    virtual void _rebuild() /*override*/;

    virtual void _getVertices(::std::vector<::Scripting::RenderHelper::Vertex>& vertices) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Scripting::RenderHelper::PrimitiveType $getType() const;

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
