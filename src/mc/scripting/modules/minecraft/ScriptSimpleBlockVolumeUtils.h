#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/EnumBindingBuilder.h"
#include "mc/world/level/block/utils/SimpleBlockVolume.h"

namespace ScriptModuleMinecraft {

class ScriptSimpleBlockVolumeUtils {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTSIMPLEBLOCKVOLUMEUTILS
public:
    ScriptSimpleBlockVolumeUtils& operator=(ScriptSimpleBlockVolumeUtils const&) = delete;
    ScriptSimpleBlockVolumeUtils(ScriptSimpleBlockVolumeUtils const&)            = delete;
    ScriptSimpleBlockVolumeUtils()                                               = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@ScriptSimpleBlockVolumeUtils\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptSimpleBlockVolumeUtils\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptSimpleBlockVolumeUtils> bind();
    /**
     * @symbol
     * ?bindEnums\@ScriptSimpleBlockVolumeUtils\@ScriptModuleMinecraft\@\@SA?AV?$EnumBindingBuilder\@W4IntersectionResult\@SimpleBlockVolume\@\@W412\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::EnumBindingBuilder<
        enum class SimpleBlockVolume::IntersectionResult,
        enum class SimpleBlockVolume::IntersectionResult>
    bindEnums();
    /**
     * @symbol
     * ?doesLocationTouchFaces\@ScriptSimpleBlockVolumeUtils\@ScriptModuleMinecraft\@\@SA_NAEBVSimpleBlockVolume\@\@AEBVVec3\@\@\@Z
     */
    MCAPI static bool doesLocationTouchFaces(class SimpleBlockVolume const&, class Vec3 const&);
    /**
     * @symbol
     * ?doesVolumeTouchFaces\@ScriptSimpleBlockVolumeUtils\@ScriptModuleMinecraft\@\@SA_NAEBVSimpleBlockVolume\@\@0\@Z
     */
    MCAPI static bool doesVolumeTouchFaces(class SimpleBlockVolume const&, class SimpleBlockVolume const&);
    /**
     * @symbol ?getMax\@ScriptSimpleBlockVolumeUtils\@ScriptModuleMinecraft\@\@SA?AVVec3\@\@AEBVSimpleBlockVolume\@\@\@Z
     */
    MCAPI static class Vec3 getMax(class SimpleBlockVolume const&);
    /**
     * @symbol ?getMin\@ScriptSimpleBlockVolumeUtils\@ScriptModuleMinecraft\@\@SA?AVVec3\@\@AEBVSimpleBlockVolume\@\@\@Z
     */
    MCAPI static class Vec3 getMin(class SimpleBlockVolume const&);
    /**
     * @symbol
     * ?getSpan\@ScriptSimpleBlockVolumeUtils\@ScriptModuleMinecraft\@\@SA?AVVec3\@\@AEBVSimpleBlockVolume\@\@\@Z
     */
    MCAPI static class Vec3 getSpan(class SimpleBlockVolume const&);
    /**
     * @symbol
     * ?intersects\@ScriptSimpleBlockVolumeUtils\@ScriptModuleMinecraft\@\@SA?AW4IntersectionResult\@SimpleBlockVolume\@\@AEBV4\@0\@Z
     */
    MCAPI static enum class SimpleBlockVolume::IntersectionResult
    intersects(class SimpleBlockVolume const&, class SimpleBlockVolume const&);
    /**
     * @symbol
     * ?isInside\@ScriptSimpleBlockVolumeUtils\@ScriptModuleMinecraft\@\@SA_NAEBVSimpleBlockVolume\@\@AEBVVec3\@\@\@Z
     */
    MCAPI static bool isInside(class SimpleBlockVolume const&, class Vec3 const&);
    /**
     * @symbol
     * ?translate\@ScriptSimpleBlockVolumeUtils\@ScriptModuleMinecraft\@\@SA?AVSimpleBlockVolume\@\@AEBV3\@AEBVVec3\@\@\@Z
     */
    MCAPI static class SimpleBlockVolume translate(class SimpleBlockVolume const&, class Vec3 const&);
};

}; // namespace ScriptModuleMinecraft
