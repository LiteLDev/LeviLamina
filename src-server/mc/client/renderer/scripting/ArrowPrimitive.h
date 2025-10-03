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
    // vIndex: 4
    virtual ~ArrowPrimitive() /*override*/ = default;

    // vIndex: 2
    virtual void setPosition(::Vec3 const&) /*override*/;

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
