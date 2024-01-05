#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

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
    // symbol:
    // ?bind@ScriptBoundingBoxUtils@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBoundingBoxUtils@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBoundingBoxUtils> bind();

    // symbol: ?createValid@ScriptBoundingBoxUtils@ScriptModuleMinecraft@@SA?AVBoundingBox@@AEBVVec3@@V4@@Z
    MCAPI static class BoundingBox createValid(class Vec3 const& min, class Vec3 max);

    // symbol: ?dilate@ScriptBoundingBoxUtils@ScriptModuleMinecraft@@SA?AVBoundingBox@@AEBV3@AEBVVec3@@@Z
    MCAPI static class BoundingBox dilate(class BoundingBox const& box, class Vec3 const& size);

    // symbol: ?expand@ScriptBoundingBoxUtils@ScriptModuleMinecraft@@SA?AVBoundingBox@@AEBV3@0@Z
    MCAPI static class BoundingBox expand(class BoundingBox const& box, class BoundingBox const& other);

    // symbol: ?getCenter@ScriptBoundingBoxUtils@ScriptModuleMinecraft@@SA?AVVec3@@AEBVBoundingBox@@@Z
    MCAPI static class Vec3 getCenter(class BoundingBox const& box);

    // symbol:
    // ?getIntersection@ScriptBoundingBoxUtils@ScriptModuleMinecraft@@SA?AV?$optional@VBoundingBox@@@std@@AEBVBoundingBox@@0@Z
    MCAPI static std::optional<class BoundingBox>
    getIntersection(class BoundingBox const& box, class BoundingBox const& other);

    // symbol: ?getSpan@ScriptBoundingBoxUtils@ScriptModuleMinecraft@@SA?AVVec3@@AEBVBoundingBox@@@Z
    MCAPI static class Vec3 getSpan(class BoundingBox const& box);

    // symbol: ?intersects@ScriptBoundingBoxUtils@ScriptModuleMinecraft@@SA_NAEBVBoundingBox@@0@Z
    MCAPI static bool intersects(class BoundingBox const& box, class BoundingBox const& other);

    // symbol: ?isInside@ScriptBoundingBoxUtils@ScriptModuleMinecraft@@SA_NAEBVBoundingBox@@AEBVVec3@@@Z
    MCAPI static bool isInside(class BoundingBox const& box, class Vec3 const& pos);

    // symbol: ?translate@ScriptBoundingBoxUtils@ScriptModuleMinecraft@@SA?AVBoundingBox@@AEBV3@AEBVVec3@@@Z
    MCAPI static class BoundingBox translate(class BoundingBox const& box, class Vec3 const& delta);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
