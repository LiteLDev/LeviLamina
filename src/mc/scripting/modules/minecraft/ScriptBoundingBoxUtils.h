#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptBoundingBoxUtils {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTBOUNDINGBOXUTILS
public:
    ScriptBoundingBoxUtils& operator=(ScriptBoundingBoxUtils const&) = delete;
    ScriptBoundingBoxUtils(ScriptBoundingBoxUtils const&)            = delete;
    ScriptBoundingBoxUtils()                                         = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@ScriptBoundingBoxUtils\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptBoundingBoxUtils\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBoundingBoxUtils> bind();
    /**
     * @symbol ?createValid\@ScriptBoundingBoxUtils\@ScriptModuleMinecraft\@\@SA?AVBoundingBox\@\@AEBVVec3\@\@V4\@\@Z
     */
    MCAPI static class BoundingBox createValid(class Vec3 const&, class Vec3);
    /**
     * @symbol ?dilate\@ScriptBoundingBoxUtils\@ScriptModuleMinecraft\@\@SA?AVBoundingBox\@\@AEBV3\@AEBVVec3\@\@\@Z
     */
    MCAPI static class BoundingBox dilate(class BoundingBox const&, class Vec3 const&);
    /**
     * @symbol ?expand\@ScriptBoundingBoxUtils\@ScriptModuleMinecraft\@\@SA?AVBoundingBox\@\@AEBV3\@0\@Z
     */
    MCAPI static class BoundingBox expand(class BoundingBox const&, class BoundingBox const&);
    /**
     * @symbol ?getCenter\@ScriptBoundingBoxUtils\@ScriptModuleMinecraft\@\@SA?AVVec3\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI static class Vec3 getCenter(class BoundingBox const&);
    /**
     * @symbol
     * ?getIntersection\@ScriptBoundingBoxUtils\@ScriptModuleMinecraft\@\@SA?AV?$optional\@VBoundingBox\@\@\@std\@\@AEBVBoundingBox\@\@0\@Z
     */
    MCAPI static class std::optional<class BoundingBox>
    getIntersection(class BoundingBox const&, class BoundingBox const&);
    /**
     * @symbol ?getSpan\@ScriptBoundingBoxUtils\@ScriptModuleMinecraft\@\@SA?AVVec3\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI static class Vec3 getSpan(class BoundingBox const&);
    /**
     * @symbol ?intersects\@ScriptBoundingBoxUtils\@ScriptModuleMinecraft\@\@SA_NAEBVBoundingBox\@\@0\@Z
     */
    MCAPI static bool intersects(class BoundingBox const&, class BoundingBox const&);
    /**
     * @symbol ?isInside\@ScriptBoundingBoxUtils\@ScriptModuleMinecraft\@\@SA_NAEBVBoundingBox\@\@AEBVVec3\@\@\@Z
     */
    MCAPI static bool isInside(class BoundingBox const&, class Vec3 const&);
    /**
     * @symbol ?translate\@ScriptBoundingBoxUtils\@ScriptModuleMinecraft\@\@SA?AVBoundingBox\@\@AEBV3\@AEBVVec3\@\@\@Z
     */
    MCAPI static class BoundingBox translate(class BoundingBox const&, class Vec3 const&);
};

}; // namespace ScriptModuleMinecraft
