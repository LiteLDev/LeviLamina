#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/glm/vec.h"

class SimpleBlockVolume {
public:
    // SimpleBlockVolume inner types declare
    // clang-format off

    // clang-format on

    // SimpleBlockVolume inner types define
    enum class IntersectionResult {};

public:
    // prevent constructor by default
    SimpleBlockVolume() = delete;

public:
    /**
     * @symbol ??0SimpleBlockVolume\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI SimpleBlockVolume(class SimpleBlockVolume const&); // NOLINT
    /**
     * @symbol ??0SimpleBlockVolume\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI SimpleBlockVolume(class SimpleBlockVolume&&); // NOLINT
    /**
     * @symbol ?begin\@SimpleBlockVolume\@\@QEBA?AVSimpleBlockVolumeIterator\@\@XZ
     */
    MCAPI class SimpleBlockVolumeIterator begin() const; // NOLINT
    /**
     * @symbol ?contains\@SimpleBlockVolume\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool contains(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?doesAreaTouchFaces\@SimpleBlockVolume\@\@QEBA_NAEBVBlockPos\@\@0\@Z
     */
    MCAPI bool doesAreaTouchFaces(class BlockPos const&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?doesBlockTouchFaces\@SimpleBlockVolume\@\@QEBA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool doesBlockTouchFaces(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?getBoundingBox\@SimpleBlockVolume\@\@QEBA?AVBoundingBox\@\@XZ
     */
    MCAPI class BoundingBox getBoundingBox() const; // NOLINT
    /**
     * @symbol ?getCapacity\@SimpleBlockVolume\@\@QEBAHXZ
     */
    MCAPI int getCapacity() const; // NOLINT
    /**
     * @symbol ?getFrom\@SimpleBlockVolume\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getFrom() const; // NOLINT
    /**
     * @symbol ?getMax\@SimpleBlockVolume\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getMax() const; // NOLINT
    /**
     * @symbol ?getMin\@SimpleBlockVolume\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getMin() const; // NOLINT
    /**
     * @symbol ?getSpan\@SimpleBlockVolume\@\@QEBA?AU?$vec\@$02H$0A\@\@glm\@\@XZ
     */
    MCAPI struct glm::vec<3, int, 0> getSpan() const; // NOLINT
    /**
     * @symbol ?getTo\@SimpleBlockVolume\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getTo() const; // NOLINT
    /**
     * @symbol ?getWorldAABB\@SimpleBlockVolume\@\@QEBA?AVAABB\@\@XZ
     */
    MCAPI class AABB getWorldAABB() const; // NOLINT
    /**
     * @symbol ?intersects\@SimpleBlockVolume\@\@QEBA?AW4IntersectionResult\@1\@AEBV1\@\@Z
     */
    MCAPI enum class SimpleBlockVolume::IntersectionResult intersects(class SimpleBlockVolume const&) const; // NOLINT
    /**
     * @symbol ??4SimpleBlockVolume\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class SimpleBlockVolume& operator=(class SimpleBlockVolume const&); // NOLINT
    /**
     * @symbol ??4SimpleBlockVolume\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class SimpleBlockVolume& operator=(class SimpleBlockVolume&&); // NOLINT
    /**
     * @symbol ??8SimpleBlockVolume\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class SimpleBlockVolume const&) const; // NOLINT
    /**
     * @symbol ?translate\@SimpleBlockVolume\@\@QEAAAEAV1\@AEBU?$vec\@$02H$0A\@\@glm\@\@\@Z
     */
    MCAPI class SimpleBlockVolume& translate(struct glm::vec<3, int, 0> const&); // NOLINT
    /**
     * @symbol ?translated\@SimpleBlockVolume\@\@QEBA?AV1\@AEBU?$vec\@$02H$0A\@\@glm\@\@\@Z
     */
    MCAPI class SimpleBlockVolume translated(struct glm::vec<3, int, 0> const&) const; // NOLINT
    /**
     * @symbol ?cerealBindTypes\@SimpleBlockVolume\@\@SAXXZ
     */
    MCAPI static void cerealBindTypes(); // NOLINT

    // protected:
    /**
     * @symbol ?_setFrom\@SimpleBlockVolume\@\@IEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void _setFrom(class Vec3 const&); // NOLINT
    /**
     * @symbol ?_setTo\@SimpleBlockVolume\@\@IEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void _setTo(class Vec3 const&); // NOLINT

protected:
};
