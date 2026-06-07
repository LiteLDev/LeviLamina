#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/pathfinder/NodeType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class PathfinderNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk62bf72;
    ::ll::UntypedStorage<4, 4>  mUnkc2992d;
    ::ll::UntypedStorage<4, 4>  mUnk51c963;
    ::ll::UntypedStorage<4, 4>  mUnke68e8d;
    ::ll::UntypedStorage<4, 4>  mUnk84468c;
    ::ll::UntypedStorage<4, 4>  mUnkac9ee6;
    ::ll::UntypedStorage<4, 4>  mUnk5e6080;
    ::ll::UntypedStorage<4, 4>  mUnk675361;
    ::ll::UntypedStorage<8, 8>  mUnk2901ae;
    ::ll::UntypedStorage<4, 12> mUnk41a7d6;
    ::ll::UntypedStorage<1, 1>  mUnkcf5c02;
    // NOLINTEND

public:
    // prevent constructor by default
    PathfinderNode& operator=(PathfinderNode const&);
    PathfinderNode();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PathfinderNode(::PathfinderNode const& node);

    MCNAPI PathfinderNode(::BlockPos const& pos, ::NodeType type);

    MCNAPI float distanceTo(::PathfinderNode* to) const;

    MCNAPI float distanceToSqr(::PathfinderNode* to) const;

    MCNAPI bool equals(::PathfinderNode* o);

    MCNAPI float getCostMalus() const;

    MCNAPI ::NodeType getType() const;

    MCNAPI bool inOpenSet();

    MCNAPI void setCostMalus(float costMalus);

    MCNAPI void setMoveMalus(float moveMalus);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PathfinderNode const& node);

    MCNAPI void* $ctor(::BlockPos const& pos, ::NodeType type);
    // NOLINTEND
};
