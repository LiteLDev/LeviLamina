#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptVector {

public:
    // prevent constructor by default
    ScriptVector& operator=(ScriptVector const&) = delete;
    ScriptVector(ScriptVector const&)            = delete;
    ScriptVector()                               = delete;

public:
    /**
     * @symbol ?length\@ScriptVector\@ScriptModuleMinecraft\@\@QEBAMXZ
     */
    MCAPI float length() const; // NOLINT
    /**
     * @symbol ?lengthSquared\@ScriptVector\@ScriptModuleMinecraft\@\@QEBAMXZ
     */
    MCAPI float lengthSquared() const; // NOLINT
    /**
     * @symbol ?normalized\@ScriptVector\@ScriptModuleMinecraft\@\@QEBA?AV12\@XZ
     */
    MCAPI class ScriptModuleMinecraft::ScriptVector normalized() const; // NOLINT
    /**
     * @symbol ??8ScriptVector\@ScriptModuleMinecraft\@\@QEBA_NAEBV01\@\@Z
     */
    MCAPI bool operator==(class ScriptModuleMinecraft::ScriptVector const&) const; // NOLINT
    /**
     * @symbol ?add\@ScriptVector\@ScriptModuleMinecraft\@\@SA?AV12\@AEBVVec3\@\@0\@Z
     */
    MCAPI static class ScriptModuleMinecraft::ScriptVector add(class Vec3 const&, class Vec3 const&); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptVector\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptVector\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptVector> bind(); // NOLINT
    /**
     * @symbol ?cross\@ScriptVector\@ScriptModuleMinecraft\@\@SA?AV12\@AEBVVec3\@\@0\@Z
     */
    MCAPI static class ScriptModuleMinecraft::ScriptVector cross(class Vec3 const&, class Vec3 const&); // NOLINT
    /**
     * @symbol ?distance\@ScriptVector\@ScriptModuleMinecraft\@\@SAMAEBVVec3\@\@0\@Z
     */
    MCAPI static float distance(class Vec3 const&, class Vec3 const&); // NOLINT
    /**
     * @symbol
     * ?divide\@ScriptVector\@ScriptModuleMinecraft\@\@SA?AV?$Result\@VScriptVector\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEBVVec3\@\@AEBV?$variant\@MVVec3\@\@\@std\@\@\@Z
     */
    MCAPI static class Scripting::Result<class ScriptModuleMinecraft::ScriptVector>
    divide(class Vec3 const&, class std::variant<float, class Vec3> const&); // NOLINT
    /**
     * @symbol ?lerp\@ScriptVector\@ScriptModuleMinecraft\@\@SA?AV12\@AEBVVec3\@\@0M\@Z
     */
    MCAPI static class ScriptModuleMinecraft::ScriptVector lerp(class Vec3 const&, class Vec3 const&, float); // NOLINT
    /**
     * @symbol ?max\@ScriptVector\@ScriptModuleMinecraft\@\@SA?AV12\@AEBVVec3\@\@0\@Z
     */
    MCAPI static class ScriptModuleMinecraft::ScriptVector max(class Vec3 const&, class Vec3 const&); // NOLINT
    /**
     * @symbol ?min\@ScriptVector\@ScriptModuleMinecraft\@\@SA?AV12\@AEBVVec3\@\@0\@Z
     */
    MCAPI static class ScriptModuleMinecraft::ScriptVector min(class Vec3 const&, class Vec3 const&); // NOLINT
    /**
     * @symbol
     * ?multiply\@ScriptVector\@ScriptModuleMinecraft\@\@SA?AV12\@AEBVVec3\@\@AEBV?$variant\@MVVec3\@\@\@std\@\@\@Z
     */
    MCAPI static class ScriptModuleMinecraft::ScriptVector
    multiply(class Vec3 const&, class std::variant<float, class Vec3> const&); // NOLINT
    /**
     * @symbol ?slerp\@ScriptVector\@ScriptModuleMinecraft\@\@SA?AV12\@AEBVVec3\@\@0M\@Z
     */
    MCAPI static class ScriptModuleMinecraft::ScriptVector slerp(class Vec3 const&, class Vec3 const&, float); // NOLINT
    /**
     * @symbol ?subtract\@ScriptVector\@ScriptModuleMinecraft\@\@SA?AV12\@AEBVVec3\@\@0\@Z
     */
    MCAPI static class ScriptModuleMinecraft::ScriptVector subtract(class Vec3 const&, class Vec3 const&); // NOLINT
};

}; // namespace ScriptModuleMinecraft
