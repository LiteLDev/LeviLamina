#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/services/render_helper/PrimitiveType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec3;
namespace Editor::RenderHelper { struct Vertex; }
// clang-format on

namespace Editor::RenderHelper {

class BasePrimitive {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnka585d7;
    ::ll::UntypedStorage<1, 1> mUnke419dd;
    ::ll::UntypedStorage<4, 4> mUnkd8c4c8;
    // NOLINTEND

public:
    // prevent constructor by default
    BasePrimitive& operator=(BasePrimitive const&);
    BasePrimitive(BasePrimitive const&);
    BasePrimitive();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::Editor::RenderHelper::PrimitiveType getType() const = 0;

    // vIndex: 1
    virtual ::Vec3 const& getPosition() const = 0;

    // vIndex: 2
    virtual void setPosition(::Vec3 const&);

    // vIndex: 3
    virtual void updateBoundingBox(::Vec3 const&, ::AABB&) const;

    // vIndex: 4
    virtual ~BasePrimitive() = default;

    // vIndex: 5
    virtual void _rebuild() = 0;

    // vIndex: 6
    virtual void _getVertices(::std::vector<::Editor::RenderHelper::Vertex>&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::RenderHelper
