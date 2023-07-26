#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockPos {

public:
    /**
     * @symbol ??0BlockPos\@\@QEAA\@AEBVVec3\@\@\@Z
     */
    MCAPI BlockPos(class Vec3 const&); // NOLINT
    /**
     * @symbol ??0BlockPos\@\@QEAA\@MMM\@Z
     */
    MCAPI BlockPos(float, float, float); // NOLINT
    /**
     * @symbol ??0BlockPos\@\@QEAA\@AEBVChunkPos\@\@H\@Z
     */
    MCAPI BlockPos(class ChunkPos const&, int); // NOLINT
    /**
     * @symbol ??0BlockPos\@\@QEAA\@AEBVSubChunkPos\@\@\@Z
     */
    MCAPI BlockPos(class SubChunkPos const&); // NOLINT
    /**
     * @symbol ??0BlockPos\@\@QEAA\@AEBVChunkPos\@\@AEBVChunkBlockPos\@\@F\@Z
     */
    MCAPI BlockPos(class ChunkPos const&, class ChunkBlockPos const&, short); // NOLINT
    /**
     * @symbol ?above\@BlockPos\@\@QEBA?AV1\@XZ
     */
    MCAPI class BlockPos above() const; // NOLINT
    /**
     * @symbol ?neighbor\@BlockPos\@\@QEBA?AV1\@E\@Z
     */
    MCAPI class BlockPos neighbor(unsigned char) const; // NOLINT
    /**
     * @symbol ??BBlockPos\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI operator class Vec3() const; // NOLINT
    /**
     * @symbol ??9BlockPos\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ??HBlockPos\@\@QEBA?AV0\@AEBV0\@\@Z
     */
    MCAPI class BlockPos operator+(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ??8BlockPos\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?randomSeed\@BlockPos\@\@QEBAHXZ
     */
    MCAPI int randomSeed() const; // NOLINT
    /**
     * @symbol ?relative\@BlockPos\@\@QEBA?AV1\@EH\@Z
     */
    MCAPI class BlockPos relative(unsigned char, int) const; // NOLINT
    /**
     * @symbol ?toString\@BlockPos\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const; // NOLINT
    /**
     * @symbol ?transform\@BlockPos\@\@QEBA?AV1\@W4Rotation\@\@W4Mirror\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class BlockPos transform(enum class Rotation, enum class Mirror, class Vec3 const&) const; // NOLINT
    /**
     * @symbol ?bindType\@BlockPos\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
    /**
     * @symbol ?MAX\@BlockPos\@\@2V1\@B
     */
    MCAPI static class BlockPos const MAX; // NOLINT
    /**
     * @symbol ?MIN\@BlockPos\@\@2V1\@B
     */
    MCAPI static class BlockPos const MIN; // NOLINT
    /**
     * @symbol ?ONE\@BlockPos\@\@2V1\@B
     */
    MCAPI static class BlockPos const ONE; // NOLINT
    /**
     * @symbol ?ZERO\@BlockPos\@\@2V1\@B
     */
    MCAPI static class BlockPos const ZERO; // NOLINT
};
