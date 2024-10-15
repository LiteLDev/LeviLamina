#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HitResult {
public:
    // NOLINTBEGIN
    MCAPI HitResult();

    MCAPI HitResult(class HitResult&&);

    MCAPI HitResult(class HitResult const&);

    MCAPI HitResult(class Vec3 const& startPos, class Vec3 const& rayDir, class Actor& entity);

    MCAPI HitResult(class Vec3 const& startPos, class Vec3 const& rayDir, class Vec3 const& rayEnd);

    MCAPI HitResult(class Vec3 const& startPos, class Vec3 const& rayDir, class Actor& entity, class Vec3 const& pos);

    MCAPI HitResult(
        class Vec3 const&     startPos,
        class Vec3 const&     rayDir,
        class BlockPos const& blockPos,
        uchar                 facing,
        class Vec3 const&     pos
    );

    MCAPI float distanceTo(class Actor const& otherEntity) const;

    MCAPI class Actor* getEntity() const;

    MCAPI class HitResult& operator=(class HitResult&&);

    MCAPI class HitResult& operator=(class HitResult const&);

    MCAPI void setIsHitLiquid(bool isHit, class HitResult const& liquidHit);

    MCAPI ~HitResult();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class Vec3 const& startPos, class Vec3 const& rayDir, class Actor& entity);

    MCAPI void* ctor$();

    MCAPI void* ctor$(
        class Vec3 const&     startPos,
        class Vec3 const&     rayDir,
        class BlockPos const& blockPos,
        uchar                 facing,
        class Vec3 const&     pos
    );

    MCAPI void* ctor$(class Vec3 const& startPos, class Vec3 const& rayDir, class Actor& entity, class Vec3 const& pos);

    MCAPI void* ctor$(class Vec3 const& startPos, class Vec3 const& rayDir, class Vec3 const& rayEnd);

    MCAPI void* ctor$(class HitResult const&);

    MCAPI void* ctor$(class HitResult&&);

    MCAPI void dtor$();

    // NOLINTEND
};
