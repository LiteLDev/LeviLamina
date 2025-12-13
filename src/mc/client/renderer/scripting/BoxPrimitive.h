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
    // vIndex: 4
    virtual ~BoxPrimitive() /*override*/ = default;

    // vIndex: 0
    virtual ::Scripting::RenderHelper::PrimitiveType getType() const /*override*/;

    // vIndex: 3
    virtual void updateBoundingBox(::Vec3 const&, ::AABB&) const /*override*/;

    // vIndex: 5
    virtual void _rebuild() /*override*/;

    // vIndex: 6
    virtual void _getVertices(::std::vector<::Scripting::RenderHelper::Vertex>&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Scripting::RenderHelper
