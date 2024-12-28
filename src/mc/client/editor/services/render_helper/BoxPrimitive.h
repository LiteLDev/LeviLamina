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

class BoxPrimitive : public ::Editor::RenderHelper::BasePrimitivePosition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12>  mUnk2ea6fb;
    ::ll::UntypedStorage<4, 16>  mUnka034a2;
    ::ll::UntypedStorage<4, 384> mUnkdc80f9;
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
    virtual ~BoxPrimitive() /*override*/;

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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Editor::RenderHelper::PrimitiveType $getType() const;

    MCAPI void $updateBoundingBox(::Vec3 const&, ::AABB&) const;

    MCAPI void $_rebuild();

    MCAPI void $_getVertices(::std::vector<::Editor::RenderHelper::Vertex>&);
    // NOLINTEND
};

} // namespace Editor::RenderHelper
