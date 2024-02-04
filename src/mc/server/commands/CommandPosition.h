#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec3.h"
#include "mc/nbt/CompoundTag.h"

class CommandPosition {
public:
    Vec3 mOffset;
    bool mRelativeX;
    bool mRelativeY;
    bool mRelativeZ;
    bool mLocal;

public:
    // NOLINTBEGIN
    // symbol: ??0CommandPosition@@QEAA@XZ
    MCAPI CommandPosition();

    // symbol: ??0CommandPosition@@QEAA@AEBVVec3@@@Z
    MCAPI explicit CommandPosition(class Vec3 const&);

    // symbol: ?getBlockPos@CommandPosition@@QEBA?AVBlockPos@@AEBVVec3@@0@Z
    MCAPI class BlockPos getBlockPos(class Vec3 const& ref, class Vec3 const& offsetFromBase = {}) const;

    // symbol: ?getBlockPos@CommandPosition@@QEBA?AVBlockPos@@HAEBVCommandOrigin@@AEBVVec3@@@Z
    MCAPI class BlockPos
    getBlockPos(int version, class CommandOrigin const& origin, class Vec3 const& offsetFromBase = {}) const;

    // symbol: ?getPosition@CommandPosition@@QEBA?AVVec3@@AEBV2@0@Z
    MCAPI class Vec3 getPosition(class Vec3 const& ref, class Vec3 const& offsetFromBase = {}) const;

    // symbol: ?getPosition@CommandPosition@@QEBA?AVVec3@@HAEBVCommandOrigin@@AEBV2@@Z
    MCAPI class Vec3
    getPosition(int version, class CommandOrigin const& origin, class Vec3 const& offsetFromBase = {}) const;

    // symbol: ?serialize@CommandPosition@@QEBA?AVCompoundTag@@XZ
    MCAPI class CompoundTag serialize() const;

    // NOLINTEND
};
