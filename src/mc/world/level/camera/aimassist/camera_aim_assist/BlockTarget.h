#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Vec3;
// clang-format on

namespace CameraAimAssist {

class BlockTarget {
public:
    // BlockTarget inner types declare
    // clang-format off
    struct Side;
    // clang-format on

    // BlockTarget inner types define
    struct Side {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnk8a79b6;
        ::ll::UntypedStorage<4, 12> mUnk47f7be;
        // NOLINTEND

    public:
        // prevent constructor by default
        Side& operator=(Side const&);
        Side(Side const&);
        Side();

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI Side(::Vec3 const& pos, uchar fid);
#endif
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void* $ctor(::Vec3 const& pos, uchar fid);
#endif
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk300108;
    ::ll::UntypedStorage<4, 4>  mUnk143c79;
    ::ll::UntypedStorage<4, 48> mUnk24f778;
    ::ll::UntypedStorage<1, 1>  mUnkea9b6a;
    ::ll::UntypedStorage<1, 1>  mUnk3061e4;
    ::ll::UntypedStorage<1, 1>  mUnk268e0e;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockTarget& operator=(BlockTarget const&);
    BlockTarget(BlockTarget const&);
    BlockTarget();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void addSide(::CameraAimAssist::BlockTarget::Side const& side);

    MCNAPI void forEachSide(::std::function<void(::CameraAimAssist::BlockTarget::Side const&)> const& callback) const;

    MCNAPI float getAimAssistPriorityPercentage() const;

    MCNAPI ::BlockPos const& getBlockPos() const;

    MCNAPI bool getIsFlowingLiquid() const;

    MCNAPI bool getIsLiquid() const;

    MCNAPI uchar getSidesCount() const;

    MCNAPI void setAimAssistPriorityPercentage(float priorityPercentage);

    MCNAPI void setBlockPos(::BlockPos const& blockPos);

    MCNAPI void setIsLiquid(bool isLiquid, bool isFlowing);
#endif
    // NOLINTEND
};

} // namespace CameraAimAssist
