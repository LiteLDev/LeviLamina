#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/CachedChunkBlockSource.h"
#include "mc/world/level/pathfinder/BinaryHeap.h"
#include "mc/world/level/pathfinder/CanClimbIntoNode.h"
#include "mc/world/level/pathfinder/CanJumpIntoNode.h"
#include "mc/world/level/pathfinder/NodeType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class NavigationComponent;
class Path;
class PathfinderNode;
class Vec3;
struct ActorPathingData;
// clang-format on

class PathFinder {
public:
    // PathFinder inner types define
    enum class ExtractionPurpose : uchar {
        Pathing = 0,
        IsFree  = 1,
    };

    enum class NeighborDiagonalType : int {
        Default = 0,
        Liquid  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::CachedChunkBlockSource>                           mRegion;
    ::ll::TypedStorage<8, 32, ::BinaryHeap>                                       mOpenSet;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::PathfinderNode>> mNodes;
    ::ll::TypedStorage<8, 256, ::std::array<::PathfinderNode*, 32>>               mNeighbors;
    bool                                                                          mCanPassDoors      : 1;
    bool                                                                          mCanOpenDoors      : 1;
    bool                                                                          mCanOpenIronDoors  : 1;
    bool                                                                          mAvoidWater        : 1;
    bool                                                                          mAvoidDamageBlocks : 1;
    bool                                                                          mCanFloat          : 1;
    bool                                                                          mCanPathOverLava   : 1;
    bool                                                                          mCanWalkInLava     : 1;
    bool                                                                          mIsAmphibious      : 1;
    bool                                                                          mAvoidPortals      : 1;
    bool                                                                          mCanBreach         : 1;
    bool                                                                          mCanJump           : 1;
    // NOLINTEND

public:
    // prevent constructor by default
    PathFinder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PathFinder(::BlockSource& region, ::NavigationComponent const& navigation);

    MCNAPI ::std::unique_ptr<::Path>
    _findPath(::ActorPathingData const& actorData, float xt, float yt, float zt, float maxDist);

    MCNAPI ::std::unique_ptr<::Path> findPath(::Actor& from, ::Actor const& to, float maxDist);

    MCNAPI ::NodeType isFree(
        ::ActorPathingData const& data,
        ::BlockPos const&         lastPathPos,
        ::BlockPos const&         testPos,
        ::BlockPos const&         size,
        ::CanJumpIntoNode         jumpIntoNode,
        ::CanClimbIntoNode        climbIntoNode
    );

    MCNAPI ~PathFinder();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ActorPathingData extractPathingData(
        ::Actor&                        mutableActor,
        ::PathFinder::ExtractionPurpose purpose,
        ::std::optional<::Vec3>         targetPos
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockSource& region, ::NavigationComponent const& navigation);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
