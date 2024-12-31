#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/editor/services/render_helper/BasePrimitive.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec3;
// clang-format on

namespace Editor::RenderHelper {

class BasePrimitivePosition : public ::Editor::RenderHelper::BasePrimitive {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkf4e7bc;
    // NOLINTEND

public:
    // prevent constructor by default
    BasePrimitivePosition& operator=(BasePrimitivePosition const&);
    BasePrimitivePosition(BasePrimitivePosition const&);
    BasePrimitivePosition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Vec3 const& getPosition() const /*override*/;

    // vIndex: 2
    virtual void setPosition(::Vec3 const&) /*override*/;

    // vIndex: 3
    virtual void updateBoundingBox(::Vec3 const&, ::AABB&) const /*override*/;

    // vIndex: 4
    virtual ~BasePrimitivePosition() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::RenderHelper
