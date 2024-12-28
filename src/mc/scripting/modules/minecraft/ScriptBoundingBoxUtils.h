#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class BoundingBox;
class Vec3;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBoundingBoxUtils {
public:
    // prevent constructor by default
    ScriptBoundingBoxUtils& operator=(ScriptBoundingBoxUtils const&);
    ScriptBoundingBoxUtils(ScriptBoundingBoxUtils const&);
    ScriptBoundingBoxUtils();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptBoundingBoxUtils> bind();

    MCAPI static ::BoundingBox createValid(::Vec3 const& min, ::Vec3 max);

    MCAPI static ::BoundingBox dilate(::BoundingBox const& box, ::Vec3 const& size);

    MCAPI static ::BoundingBox expand(::BoundingBox const& box, ::BoundingBox const& other);

    MCAPI static ::Vec3 getCenter(::BoundingBox const& box);

    MCAPI static ::std::optional<::BoundingBox> getIntersection(::BoundingBox const& box, ::BoundingBox const& other);

    MCAPI static ::Vec3 getSpan(::BoundingBox const& box);

    MCAPI static ::BoundingBox translate(::BoundingBox const& box, ::Vec3 const& delta);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
