#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/pathfinder/ActorPathingData.h"
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
        IsFree  = 1,
    };

    enum class NeighborDiagonalType : int {
        Default = 0,
        Liquid  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mUnk1b481f;
    ::ll::UntypedStorage<8, 32>  mUnk1a9e34;
    ::ll::UntypedStorage<8, 64>  mUnk863704;
    ::ll::UntypedStorage<8, 256> mUnkb761b0;
    ::ll::UntypedStorage<1, 1>   mUnkd69a6c;
    ::ll::UntypedStorage<1, 1>   mUnkce9cdc;
    ::ll::UntypedStorage<1, 1>   mUnk89a671;
    ::ll::UntypedStorage<1, 1>   mUnke6666a;
    ::ll::UntypedStorage<1, 1>   mUnka84388;
    ::ll::UntypedStorage<1, 1>   mUnk945f15;
    ::ll::UntypedStorage<1, 1>   mUnkcf66c9;
    ::ll::UntypedStorage<1, 1>   mUnk4842e4;
    ::ll::UntypedStorage<1, 1>   mUnk682bf3;
    ::ll::UntypedStorage<1, 1>   mUnk149e4d;
    ::ll::UntypedStorage<1, 1>   mUnk90bdf5;
    // NOLINTEND

public:
    // prevent constructor by default
    PathFinder& operator=(PathFinder const&);
    PathFinder(PathFinder const&);
    PathFinder();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PathFinder(::BlockSource& region, ::NavigationComponent const& navigation);

    MCAPI bool _checkBlockAndNeighborsProperty(
        ::ActorPathingData const&                                data,
        ::BlockPos const&                                        pos,
        ::Block const&                                           block,
        ::BlockProperty                                          testProperty,
        int                                                      radius,
        ::BreakBlocksComponent const*                            breakBlocksComponent,
        ::std::function<bool(::Block const&, ::BlockPos const&)> extraCondition
    );

    MCAPI bool _checkForDamagingBlock(
        ::ActorPathingData const&     data,
        ::BlockPos const&             pos,
        ::Block const&                block,
        int                           radius,
        ::BreakBlocksComponent const* breakBlocksComponent
    );

    MCAPI ::NodeType _classifyDoorNode(
        ::ActorPathingData const& data,
        ::Block const&            testBlock,
        ::BlockPos const&         testPos,
        ::BlockPos const&         lastPathPos
    );

    MCAPI ::NodeType _classifyNode(
        ::ActorPathingData const& data,
        ::BlockPos const&         lastPathPos,
        ::Block const&            testBlock,
        ::BlockPos const&         testPos,
        ::CanJumpIntoNode         jumpIntoNode,
        ::CanClimbIntoNode        climbIntoNode
    );

    MCAPI bool
    _findNearestPathableNeighbor(::BlockPos& outPos, ::ActorPathingData const& data, ::BlockPos const& testPos);

    MCAPI ::std::unique_ptr<::Path>
    _findPath(::ActorPathingData const& actorData, float xt, float yt, float zt, float maxDist);

    MCAPI ::std::unique_ptr<::Path> _findPath(
        ::ActorPathingData const& data,
        ::PathfinderNode*         from,
        ::PathfinderNode*         to,
        ::PathfinderNode const&   size,
        float                     maxDist
    );

    MCAPI ::std::optional<::BlockPos> _getHighestReachablePosByJumping(
        ::BlockPos const& originalTargetPos,
        float             maxReachableHeight,
        ::BlockPos const& actorSize
    ) const;

    MCAPI ::ActorPathingData::MinMaxHeightCacheEntry
    _getMinAndMaxHeightAroundBlock(::ActorPathingData const& data, ::BlockPos const& blockPos, float mobHeight) const;

    MCAPI ::PathfinderNode* _getNode(::BlockPos const& pos, ::NodeType nodeType);

    MCAPI ::PathfinderNode* _getNode(
        ::ActorPathingData const& data,
        ::BlockPos const&         fromPos,
        ::BlockPos const&         blockPos,
        ::PathfinderNode const&   size,
        float                     jumpHeight,
        ::CanClimbIntoNode        climbIntoNode
    );

    MCAPI ::std::optional<::NodeType> _getPartialBlockNodeType(
        ::BlockPos const&         currentBlockPos,
        ::BlockPos const&         lastBlockPos,
        ::ActorPathingData const& data
    );

    MCAPI float _getPathfindingMalus(::ActorPathingData const& data, ::NodeType nodeType, ::BlockPos const& blockPos);

    MCAPI ::PathfinderNode* _getUnderneathSupportedNode(
        ::PathfinderNode*         node,
        ::ActorPathingData const& data,
        ::BlockPos const&         fromPos,
        ::PathfinderNode const&   size,
        ::CanClimbIntoNode        climbIntoNode
    );

    MCAPI ::PathfinderNode*
    _getWaterNode(::ActorPathingData const& data, ::BlockPos const& lastPos, ::BlockPos const& blockPos);

    MCAPI ::NodeType _isFreeStartNode(
        ::ActorPathingData const& data,
        ::AABB const&             entityAABB,
        ::BlockPos const&         testPos,
        ::BlockPos const&         size
    );

    MCAPI bool _isNeighborPotentiallyValid(
        ::PathfinderNode const& node,
        ::PathfinderNode const& target,
        ::BlockPos const&       offset,
        uint                    maxDistSqr
    );

    MCAPI ::std::unique_ptr<::Path>
    _reconstructPath(::PathfinderNode* to, ::PathCompletionType completionType, ::ActorUniqueID actorId);

    MCAPI ::std::unique_ptr<::Path> findPath(::Actor& from, ::Actor const& to, float maxDist);

    MCAPI ::std::unique_ptr<::Path> findPath(::Actor& from, int x, int y, int z, float maxDist);

    MCAPI ::NodeType isFree(
        ::Actor&           actor,
        ::BlockPos const&  fromPos,
        ::BlockPos const&  testPos,
        ::BlockPos const&  size,
        ::CanJumpIntoNode  jumpIntoNode,
        ::CanClimbIntoNode climbIntoNode
    );

    MCAPI ::NodeType isFree(
        ::ActorPathingData const& data,
        ::BlockPos const&         lastPathPos,
        ::BlockPos const&         testPos,
        ::BlockPos const&         size,
        ::CanJumpIntoNode         jumpIntoNode,
        ::CanClimbIntoNode        climbIntoNode
    );

    MCAPI ~PathFinder();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::BlockPos _getStartPositionFlyingActor(
        ::IPathBlockSource const& pathBlockSource,
        ::BlockPos                originalStartPos,
        bool                      canFloat,
        bool                      canPathOverLava,
        float                     yFeetPosition
    );

    MCAPI static ::ActorPathingData extractPathingData(
        ::Actor&                        mutableActor,
        ::PathFinder::ExtractionPurpose purpose,
        ::std::optional<::Vec3>         targetPos
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::PreferredPathDescription const& DEFAULT_DESC();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockSource& region, ::NavigationComponent const& navigation);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
