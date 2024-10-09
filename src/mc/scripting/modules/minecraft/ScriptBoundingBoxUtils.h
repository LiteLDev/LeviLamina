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
    // NOLINTBEGIN
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBoundingBoxUtils> bind();

    MCAPI static class BoundingBox createValid(class Vec3 const& min, class Vec3 max);

    MCAPI static class BoundingBox dilate(class BoundingBox const& box, class Vec3 const& size);

    MCAPI static class BoundingBox expand(class BoundingBox const& box, class BoundingBox const& other);

    MCAPI static class Vec3 getCenter(class BoundingBox const& box);

    MCAPI static std::optional<class BoundingBox>
    getIntersection(class BoundingBox const& box, class BoundingBox const& other);

    MCAPI static class Vec3 getSpan(class BoundingBox const& box);

    MCAPI static bool intersects(class BoundingBox const& box, class BoundingBox const& other);

    MCAPI static bool isInside(class BoundingBox const& box, class Vec3 const& pos);

    MCAPI static class BoundingBox translate(class BoundingBox const& box, class Vec3 const& delta);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
