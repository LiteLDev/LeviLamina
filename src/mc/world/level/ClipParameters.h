#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClipParameters {
public:
    class Vec3 const* mA;                  // this+0x0
    class Vec3 const* mB;                  // this+0x8
    class Player*     mPlayer;             // this+0x10
    bool              mLiquid;             // this+0x18
    bool              mFullOnly;           // this+0x19
    bool              mSolidOnly;          // this+0x1A
    bool              mIgnoreBorderBlocks; // this+0x1B
    int               mMaxDistance;        // this+0x1C

    std::function<bool(class BlockSource const&, class Block const&, bool)> mShouldCheckBlock; // this+0x20

    // prevent constructor by default
    ClipParameters& operator=(ClipParameters const&);
    ClipParameters(ClipParameters const&);
    ClipParameters();

public:
    // NOLINTBEGIN
    MCAPI ClipParameters(class Vec3 const& a, class Vec3 const& b);

    MCAPI
    ClipParameters(class Vec3 const& a, class Vec3 const& b, std::function<bool(class BlockSource const&, class Block const&, bool)> const&);

    MCAPI ~ClipParameters();

    // NOLINTEND
};
