#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/EnumBindingBuilder.h"
#include "mc/world/level/block/utils/SimpleBlockVolume.h"

// auto generated forward declare list
// clang-format off
class SimpleBlockVolume;
class Vec3;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSimpleBlockVolumeUtils {

public:
    // prevent constructor by default
    ScriptSimpleBlockVolumeUtils& operator=(ScriptSimpleBlockVolumeUtils const&) = delete;
    ScriptSimpleBlockVolumeUtils(ScriptSimpleBlockVolumeUtils const&)            = delete;
    ScriptSimpleBlockVolumeUtils()                                               = delete;

public:
    /**
     * @symbol
     * ?bind\@ScriptSimpleBlockVolumeUtils\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptSimpleBlockVolumeUtils\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptSimpleBlockVolumeUtils>
    bind(); // NOLINT
    /**
     * @symbol
     * ?bindEnums\@ScriptSimpleBlockVolumeUtils\@ScriptModuleMinecraft\@\@SA?AV?$EnumBindingBuilder\@W4IntersectionResult\@SimpleBlockVolume\@\@W412\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::EnumBindingBuilder<
        enum class SimpleBlockVolume::IntersectionResult,
        enum class SimpleBlockVolume::IntersectionResult>
    bindEnums(); // NOLINT
    /**
     * @symbol
     * ?doesLocationTouchFaces\@ScriptSimpleBlockVolumeUtils\@ScriptModuleMinecraft\@\@SA_NAEBVSimpleBlockVolume\@\@AEBVVec3\@\@\@Z
     */
    MCAPI static bool doesLocationTouchFaces(class SimpleBlockVolume const&, class Vec3 const&); // NOLINT
    /**
     * @symbol
     * ?doesVolumeTouchFaces\@ScriptSimpleBlockVolumeUtils\@ScriptModuleMinecraft\@\@SA_NAEBVSimpleBlockVolume\@\@0\@Z
     */
    MCAPI static bool doesVolumeTouchFaces(class SimpleBlockVolume const&, class SimpleBlockVolume const&); // NOLINT
    /**
     * @symbol ?getMax\@ScriptSimpleBlockVolumeUtils\@ScriptModuleMinecraft\@\@SA?AVVec3\@\@AEBVSimpleBlockVolume\@\@\@Z
     */
    MCAPI static class Vec3 getMax(class SimpleBlockVolume const&); // NOLINT
    /**
     * @symbol ?getMin\@ScriptSimpleBlockVolumeUtils\@ScriptModuleMinecraft\@\@SA?AVVec3\@\@AEBVSimpleBlockVolume\@\@\@Z
     */
    MCAPI static class Vec3 getMin(class SimpleBlockVolume const&); // NOLINT
    /**
     * @symbol
     * ?getSpan\@ScriptSimpleBlockVolumeUtils\@ScriptModuleMinecraft\@\@SA?AVVec3\@\@AEBVSimpleBlockVolume\@\@\@Z
     */
    MCAPI static class Vec3 getSpan(class SimpleBlockVolume const&); // NOLINT
    /**
     * @symbol
     * ?intersects\@ScriptSimpleBlockVolumeUtils\@ScriptModuleMinecraft\@\@SA?AW4IntersectionResult\@SimpleBlockVolume\@\@AEBV4\@0\@Z
     */
    MCAPI static enum class SimpleBlockVolume::IntersectionResult
    intersects(class SimpleBlockVolume const&, class SimpleBlockVolume const&); // NOLINT
    /**
     * @symbol
     * ?isInside\@ScriptSimpleBlockVolumeUtils\@ScriptModuleMinecraft\@\@SA_NAEBVSimpleBlockVolume\@\@AEBVVec3\@\@\@Z
     */
    MCAPI static bool isInside(class SimpleBlockVolume const&, class Vec3 const&); // NOLINT
    /**
     * @symbol
     * ?translate\@ScriptSimpleBlockVolumeUtils\@ScriptModuleMinecraft\@\@SA?AVSimpleBlockVolume\@\@AEBV3\@AEBVVec3\@\@\@Z
     */
    MCAPI static class SimpleBlockVolume translate(class SimpleBlockVolume const&, class Vec3 const&); // NOLINT
};

}; // namespace ScriptModuleMinecraft
