#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class BoundingBox;
class Vec3;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBoundingBoxUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptBoundingBoxUtils> bind();

    MCNAPI static ::BoundingBox createValid(::Vec3 const& min, ::Vec3 max);

    MCNAPI static ::BoundingBox dilate(::BoundingBox const& box, ::Vec3 const& size);

    MCNAPI static ::BoundingBox expand(::BoundingBox const& box, ::BoundingBox const& other);

    MCNAPI static ::Vec3 getCenter(::BoundingBox const& box);

    MCNAPI static ::std::optional<::BoundingBox> getIntersection(::BoundingBox const& box, ::BoundingBox const& other);

    MCNAPI static ::Vec3 getSpan(::BoundingBox const& box);

    MCNAPI static bool intersects(::BoundingBox const& box, ::BoundingBox const& other);

    MCNAPI static bool isInside(::BoundingBox const& box, ::Vec3 const& pos);

    MCNAPI static bool isValid(::BoundingBox const& box);

    MCNAPI static ::BoundingBox translate(::BoundingBox const& box, ::Vec3 const& delta);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
