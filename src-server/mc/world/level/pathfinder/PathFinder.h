#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/CachedChunkBlockSource.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/pathfinder/ActorPathingData.h"
#include "mc/world/level/pathfinder/BinaryHeap.h"
#include "mc/world/level/pathfinder/CanClimbIntoNode.h"
#include "mc/world/level/pathfinder/CanJumpIntoNode.h"
#include "mc/world/level/pathfinder/NodeType.h"
#include "mc/world/level/pathfinder/PathCompletionType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class BreakBlocksComponent;
class IPathBlockSource;
class NavigationComponent;
class Path;
class PathfinderNode;
class Vec3;
struct ActorPathingData;
struct ActorUniqueID;
struct PreferredPathDescription;
// clang-format on

class PathFinder {
public:
    // PathFinder inner types define
    enum class ExtractionPurpose : uchar {
        Pathing = 0,
        IsFree = 1,
    };
    
    enum class NeighborDiagonalType : int {
        Default = 0,
        Liquid = 1,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::CachedChunkBlockSource> mRegion;
    ::ll::TypedStorage<8, 32, ::BinaryHeap> mOpenSet;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::PathfinderNode>> mNodes;
    ::ll::TypedStorage<8, 256, ::std::array<::PathfinderNode*, 32>> mNeighbors;
    bool mCanPassDoors : 1;
    bool mCanOpenDoors : 1;
    bool mCanOpenIronDoors : 1;
    bool mAvoidWater : 1;
    bool mAvoidDamageBlocks : 1;
    bool mCanFloat : 1;
    bool mCanPathOverLava : 1;
    bool mCanWalkInLava : 1;
    bool mIsAmphibious : 1;
    bool mAvoidPortals : 1;
    bool mCanBreach : 1;
    bool mCanJump : 1;
    // NOLINTEND

public:
    // prevent constructor by default
    PathFinder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PathFinder(::BlockSource& region, ::NavigationComponent const& navigation);

    MCNAPI bool _checkBlockAndNeighborsProperty(::ActorPathingData const& data, ::BlockPos const& pos, ::Block const& block, ::BlockProperty testProperty, int radius, ::BreakBlocksComponent const* breakBlocksComponent, ::std::function<bool(::Block const&, ::BlockPos const&)> extraCondition);

    MCNAPI bool _checkForDamagingBlock(::ActorPathingData const& data, ::BlockPos const& pos, ::Block const& block, int radius, ::BreakBlocksComponent const* breakBlocksComponent);

    MCNAPI ::NodeType _classifyDoorNode(::ActorPathingData const& data, ::Block const& testBlock, ::BlockPos const& testPos, ::BlockPos const& lastPathPos);

    MCNAPI ::NodeType _classifyNode(::ActorPathingData const& data, ::BlockPos const& fromPos, ::BlockPos const& testPos);

    MCNAPI ::NodeType _classifyNode(::ActorPathingData const& data, ::BlockPos const& lastPathPos, ::Block const& testBlock, ::BlockPos const& testPos, ::CanJumpIntoNode jumpIntoNode, ::CanClimbIntoNode climbIntoNode);

    MCNAPI bool _findNearestPathableNeighbor(::BlockPos& outPos, ::ActorPathingData const& data, ::BlockPos const& testPos);

    MCNAPI ::std::unique_ptr<::Path> _findPath(::ActorPathingData const& actorData, float xt, float yt, float zt, float maxDist);

    MCNAPI ::std::unique_ptr<::Path> _findPath(::ActorPathingData const& data, ::PathfinderNode* from, ::PathfinderNode* to, ::PathfinderNode const& size, float maxDist);

    MCNAPI ::AABB _getAABBForHeightComputation(::BlockPos const& pos, ::Block const& block) const;

    MCNAPI float _getHeightAboveBlock(::BlockPos const& blockPos, float mobHeight) const;

    MCNAPI float _getHeightBelowBlock(::BlockPos const& blockPos, float mobHeight) const;

    MCNAPI ::std::optional<::BlockPos> _getHighestReachablePosByJumping(::BlockPos const& originalTargetPos, float maxReachableHeight, ::BlockPos const& actorSize) const;

    MCNAPI ::ActorPathingData::MinMaxHeightCacheEntry _getMinAndMaxHeightAroundBlock(::ActorPathingData const& data, ::BlockPos const& blockPos, float mobHeight) const;

    MCNAPI int _getNeighbors(::ActorPathingData const& data, ::PathfinderNode& pos, ::PathfinderNode const& size, ::PathfinderNode const& target, uint maxDistSqr, ::std::bitset<18> const& validPositions);

    MCNAPI ::PathfinderNode* _getNode(::BlockPos const& pos, ::NodeType nodeType);

    MCNAPI ::PathfinderNode* _getNode(::ActorPathingData const& data, ::BlockPos const& fromPos, ::BlockPos const& blockPos, ::PathfinderNode const& size, float jumpHeight, ::CanClimbIntoNode climbIntoNode);

    MCNAPI ::std::optional<::NodeType> _getPartialBlockNodeType(::BlockPos const& currentBlockPos, ::BlockPos const& lastBlockPos, ::ActorPathingData const& data);

    MCNAPI float _getPathfindingMalus(::ActorPathingData const& data, ::NodeType nodeType, ::BlockPos const& blockPos);

    MCNAPI ::PathfinderNode* _getUnderneathSupportedNode(::PathfinderNode* node, ::ActorPathingData const& data, ::BlockPos const& fromPos, ::PathfinderNode const& size, ::CanClimbIntoNode climbIntoNode);

    MCNAPI ::PathfinderNode* _getWaterNode(::ActorPathingData const& data, ::BlockPos const& lastPos, ::BlockPos const& blockPos);

    MCNAPI ::NodeType _isFreeStartNode(::ActorPathingData const& data, ::AABB const& entityAABB, ::BlockPos const& testPos, ::BlockPos const& size);

    MCNAPI ::NodeType _isFreeWaterNode(::ActorPathingData const& data, ::BlockPos const& lastPos, ::BlockPos const& blockPos);

    MCNAPI bool _isNeighborPotentiallyValid(::PathfinderNode const& node, ::PathfinderNode const& target, ::BlockPos const& offset, uint maxDistSqr);

    MCNAPI ::std::unique_ptr<::Path> _reconstructPath(::PathfinderNode* to, ::PathCompletionType completionType, ::ActorUniqueID actorId);

    MCNAPI ::NodeType isFree(::ActorPathingData const& data, ::BlockPos const& lastPathPos, ::BlockPos const& testPos, ::BlockPos const& size, ::CanJumpIntoNode jumpIntoNode, ::CanClimbIntoNode climbIntoNode);

    MCNAPI ~PathFinder();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static float _calculateMoveCost(::ActorPathingData const& data, ::PathfinderNode& start, ::BlockPos const& fromPos, ::CachedChunkBlockSource& region);

    MCNAPI static ::BlockPos _getStartPositionFlyingActor(::IPathBlockSource const& pathBlockSource, ::BlockPos originalStartPos, bool canFloat, bool canPathOverLava, float yFeetPosition);

    MCNAPI static ::ActorPathingData extractPathingData(::Actor& mutableActor, ::PathFinder::ExtractionPurpose purpose, ::std::optional<::Vec3> targetPos);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::PreferredPathDescription const& DEFAULT_DESC();
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
