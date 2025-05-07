#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/editor/services/render_helper/BasePrimitivePosition.h"
#include "mc/editor/services/render_helper/PrimitiveType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec3;
namespace Editor::RenderHelper { struct Vertex; }
// clang-format on

namespace Editor::RenderHelper {

class LinePrimitive : public ::Editor::RenderHelper::BasePrimitivePosition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk671061;
    ::ll::UntypedStorage<4, 16> mUnkb21c81;
    ::ll::UntypedStorage<4, 32> mUnk86361e;
    // NOLINTEND

public:
    // prevent constructor by default
    LinePrimitive& operator=(LinePrimitive const&);
    LinePrimitive(LinePrimitive const&);
    LinePrimitive();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual ~LinePrimitive() /*override*/ = default;

    // vIndex: 2
    virtual void setPosition(::Vec3 const&) /*override*/;

    // vIndex: 0
    virtual ::Editor::RenderHelper::PrimitiveType getType() const /*override*/;

    // vIndex: 3
    virtual void updateBoundingBox(::Vec3 const&, ::AABB&) const /*override*/;

    // vIndex: 5
    virtual void _rebuild() /*override*/;

    // vIndex: 6
    virtual void _getVertices(::std::vector<::Editor::RenderHelper::Vertex>&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::RenderHelper
