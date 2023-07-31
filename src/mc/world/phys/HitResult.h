#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HitResult {

public:
    enum class HitResultType : int {
        Tile             = 0x0,
        Entity           = 0x1,
        EntityOutOfRange = 0x2,
        NoHit            = 0x3,
    };

    // NOLINTBEGIN
    /**
     * @symbol ??0HitResult\@\@QEAA\@AEBVVec3\@\@0AEAVActor\@\@\@Z
     */
    MCAPI HitResult(class Vec3 const&, class Vec3 const&, class Actor&);
    /**
     * @symbol ??0HitResult\@\@QEAA\@AEBVVec3\@\@0AEAVActor\@\@0\@Z
     */
    MCAPI HitResult(class Vec3 const&, class Vec3 const&, class Actor&, class Vec3 const&);
    /**
     * @symbol ??0HitResult\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI HitResult(class HitResult const&);
    /**
     * @symbol ??0HitResult\@\@QEAA\@XZ
     */
    MCAPI HitResult();
    /**
     * @symbol ??0HitResult\@\@QEAA\@AEBVVec3\@\@00\@Z
     */
    MCAPI HitResult(class Vec3 const&, class Vec3 const&, class Vec3 const&);
    /**
     * @symbol ??0HitResult\@\@QEAA\@AEBVVec3\@\@0AEBVBlockPos\@\@E0\@Z
     */
    MCAPI HitResult(class Vec3 const&, class Vec3 const&, class BlockPos const&, unsigned char, class Vec3 const&);
    /**
     * @symbol ??0HitResult\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI HitResult(class HitResult&&);
    /**
     * @symbol ?distanceTo\@HitResult\@\@QEBAMAEBVActor\@\@\@Z
     */
    MCAPI float distanceTo(class Actor const&) const;
    /**
     * @symbol ?getEntity\@HitResult\@\@QEBAPEAVActor\@\@XZ
     */
    MCAPI class Actor* getEntity() const;
    /**
     * @symbol ??4HitResult\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class HitResult& operator=(class HitResult const&);
    /**
     * @symbol ??4HitResult\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class HitResult& operator=(class HitResult&&);
    /**
     * @symbol ??1HitResult\@\@QEAA\@XZ
     */
    MCAPI ~HitResult();
    // NOLINTEND
};
