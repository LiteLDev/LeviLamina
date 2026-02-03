#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BoundingBox;
class Vec3;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockBoundingBoxUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::BoundingBox createValid(::Vec3 const& min, ::Vec3 max);

    MCAPI static ::BoundingBox dilate(::BoundingBox const& box, ::Vec3 const& size);

    MCAPI static ::BoundingBox expand(::BoundingBox const& box, ::BoundingBox const& other);

    MCAPI static ::Vec3 getCenter(::BoundingBox const& box);

    MCAPI static ::std::optional<::BoundingBox> getIntersection(::BoundingBox const& box, ::BoundingBox const& other);

    MCAPI static ::Vec3 getSpan(::BoundingBox const& box);

    MCAPI static bool intersects(::BoundingBox const& box, ::BoundingBox const& other);

    MCAPI static bool isInside(::BoundingBox const& box, ::Vec3 const& pos);

    MCAPI static ::BoundingBox translate(::BoundingBox const& box, ::Vec3 const& delta);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
