#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AABB;
class BoundingBox;
class Vec3;

class BlockPos : public intN3<BlockPos> {

public:
    using intN3::intN3;

    LLNDAPI operator class AABB() const;
    LLNDAPI operator class BoundingBox() const;

    LLNDAPI class Vec3 bottomCenter() const;
    LLNDAPI class Vec3 center() const;

    // NOLINTBEGIN
    /**
     * @symbol ??0BlockPos\@\@QEAA\@AEBVVec3\@\@\@Z
     */
    MCAPI BlockPos(class Vec3 const&);
    /**
     * @symbol ??0BlockPos\@\@QEAA\@MMM\@Z
     */
    MCAPI BlockPos(float, float, float);
    /**
     * @symbol ??0BlockPos\@\@QEAA\@AEBVSubChunkPos\@\@\@Z
     */
    MCAPI BlockPos(class SubChunkPos const&);
    /**
     * @symbol ??0BlockPos\@\@QEAA\@AEBVChunkPos\@\@H\@Z
     */
    MCAPI BlockPos(class ChunkPos const&, int);
    /**
     * @symbol ??0BlockPos\@\@QEAA\@AEBVChunkPos\@\@AEBVChunkBlockPos\@\@F\@Z
     */
    MCAPI BlockPos(class ChunkPos const&, class ChunkBlockPos const&, short);
    /**
     * @symbol ?above\@BlockPos\@\@QEBA?AV1\@XZ
     */
    MCAPI class BlockPos above() const;
    /**
     * @symbol ?neighbor\@BlockPos\@\@QEBA?AV1\@E\@Z
     */
    MCAPI class BlockPos neighbor(unsigned char) const;
    /**
     * @symbol ??BBlockPos\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI operator class Vec3() const;
    /**
     * @symbol ?randomSeed\@BlockPos\@\@QEBAHXZ
     */
    MCAPI int randomSeed() const;
    /**
     * @symbol ?relative\@BlockPos\@\@QEBA?AV1\@EH\@Z
     */
    MCAPI class BlockPos relative(unsigned char, int) const;
    /**
     * @symbol ?transform\@BlockPos\@\@QEBA?AV1\@W4Rotation\@\@W4Mirror\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class BlockPos transform(enum class Rotation, enum class Mirror, class Vec3 const&) const;
    /**
     * @symbol ?bindType\@BlockPos\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?MAX\@BlockPos\@\@2V1\@B
     */
    MCAPI static class BlockPos const MAX;
    /**
     * @symbol ?MIN\@BlockPos\@\@2V1\@B
     */
    MCAPI static class BlockPos const MIN;
    /**
     * @symbol ?ONE\@BlockPos\@\@2V1\@B
     */
    MCAPI static class BlockPos const ONE;
    /**
     * @symbol ?ZERO\@BlockPos\@\@2V1\@B
     */
    MCAPI static class BlockPos const ZERO;
    // NOLINTEND
};
