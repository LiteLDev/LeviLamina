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
namespace mce { class Color; }
// clang-format on

namespace Scripting::RenderHelper {

class ArrowPrimitive : public ::Scripting::RenderHelper::BasePrimitivePosition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk34fd9e;
    ::ll::UntypedStorage<4, 16> mUnkbbfeb2;
    ::ll::UntypedStorage<4, 4>  mUnk7c4f95;
    ::ll::UntypedStorage<4, 4>  mUnk581d55;
    ::ll::UntypedStorage<4, 4>  mUnka7a1fd;
    ::ll::UntypedStorage<8, 24> mUnk93bef8;
    // NOLINTEND

public:
    // prevent constructor by default
    ArrowPrimitive& operator=(ArrowPrimitive const&);
    ArrowPrimitive(ArrowPrimitive const&);
    ArrowPrimitive();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ArrowPrimitive() /*override*/ = default;

    virtual void setPosition(::Vec3 const& position) /*override*/;

    virtual ::Scripting::RenderHelper::PrimitiveType getType() const /*override*/;

    virtual void updateBoundingBox(::Vec3 const& ownerOffset, ::AABB& bounds) const /*override*/;

    virtual void _rebuild() /*override*/;

    virtual void _getVertices(::std::vector<::Scripting::RenderHelper::Vertex>& vertices) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ArrowPrimitive(
        ::Vec3 const&       start,
        ::Vec3 const&       end,
        ::mce::Color const& color,
        int                 headNumSegments,
        float               arrowHeadLength,
        float               arrowHeadRadius
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::Vec3 const&       start,
        ::Vec3 const&       end,
        ::mce::Color const& color,
        int                 headNumSegments,
        float               arrowHeadLength,
        float               arrowHeadRadius
    );
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
