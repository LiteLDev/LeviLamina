#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorPathingData.h"
#include "mc/enums/CanClimbIntoNode.h"
#include "mc/enums/CanJumpIntoNode.h"
#include "mc/enums/NodeType.h"
#include "mc/enums/PathCompletionType.h"
#include "mc/world/level/block/utils/BlockProperty.h"

class PathFinder {
public:
    // PathFinder inner types define
    enum class ExtractionPurpose {};

public:
    // prevent constructor by default
    PathFinder& operator=(PathFinder const&);
    PathFinder(PathFinder const&);
    PathFinder();

public:
    // NOLINTBEGIN
    MCAPI PathFinder(class BlockSource& region, class NavigationComponent const& navigation);

    MCAPI std::unique_ptr<class Path> findPath(class Actor& from, class Actor& to, float maxDist);

    MCAPI std::unique_ptr<class Path> findPath(class Actor& from, int x, int y, int z, float maxDist);

    MCAPI ::NodeType isFree(
        class Actor&          actor,
        class BlockPos const& fromPos,
        class BlockPos const& testPos,
        class BlockPos const& size,
        ::CanJumpIntoNode     jumpIntoNode,
        ::CanClimbIntoNode
    );

    MCAPI ::NodeType isFree(
        struct ActorPathingData const& data,
        class BlockPos const&          lastPathPos,
        class BlockPos const&          testPos,
        class BlockPos const&          size,
        ::CanJumpIntoNode              jumpIntoNode,
        ::CanClimbIntoNode
    );

    MCAPI ~PathFinder();

    MCAPI static class BlockPos _getStartPositionFlyingActor(
        class IPathBlockSource const&,
        class BlockPos originalStartPos,
        bool           canFloat,
        bool,
        float
    );

    MCAPI static struct ActorPathingData extractPathingData(class Actor&, ::PathFinder::ExtractionPurpose purpose);

    MCAPI static struct PreferredPathDescription const DEFAULT_DESC;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _checkBlockAndNeighborsProperty(
        struct ActorPathingData const&                                 data,
        class BlockPos const&                                          pos,
        class Block const&                                             block,
        ::BlockProperty                                                testProperty,
        int                                                            radius,
        class BreakBlocksComponent const*                              breakBlocksComponent,
        std::function<bool(class Block const&, class BlockPos const&)> extraCondition
    );

    MCAPI bool _checkForDamagingBlock(
        struct ActorPathingData const&    data,
        class BlockPos const&             pos,
        class Block const&                block,
        int                               radius,
        class BreakBlocksComponent const* breakBlocksComponent
    );

    MCAPI ::NodeType _classifyDoorNode(
        struct ActorPathingData const& data,
        class Block const&             testBlock,
        class BlockPos const&          testPos,
        class BlockPos const&          lastPathPos
    );

    MCAPI ::NodeType _classifyNode(
        struct ActorPathingData const& data,
        class BlockPos const&          lastPathPos,
        class Block const&             testBlock,
        class BlockPos const&          testPos,
        ::CanJumpIntoNode              jumpIntoNode,
        ::CanClimbIntoNode
    );

    MCAPI bool _findNearestPathableNeighbor(
        class BlockPos&                outPos,
        struct ActorPathingData const& data,
        class BlockPos const&          testPos
    );

    MCAPI std::unique_ptr<class Path> _findPath(
        struct ActorPathingData const& data,
        class PathfinderNode*          from,
        class PathfinderNode*          to,
        class PathfinderNode const&    size,
        float                          maxDist
    );

    MCAPI std::unique_ptr<class Path>
          _findPath(struct ActorPathingData const& actorData, float xt, float yt, float zt, float maxDist);

    MCAPI class AABB _getAABBForPathfinding(class BlockPos const&, class Block const&) const;

    MCAPI std::optional<class BlockPos>
          _getHighestReachablePosByJumping(class BlockPos const&, float, class BlockPos const&) const;

    MCAPI struct ActorPathingData::MinMaxHeightCacheEntry
    _getMinAndMaxHeightAroundBlock(struct ActorPathingData const&, class BlockPos const&, float) const;

    MCAPI int
    _getNeighbors(struct ActorPathingData const&, class PathfinderNode&, class PathfinderNode const&, class PathfinderNode const&, uint, std::bitset<18> const&);

    MCAPI class PathfinderNode* _getNode(class BlockPos const& pos, ::NodeType nodeType);

    MCAPI class PathfinderNode* _getNode(
        struct ActorPathingData const& data,
        class BlockPos const&          fromPos,
        class BlockPos const&          blockPos,
        class PathfinderNode const&    size,
        float,
        ::CanClimbIntoNode
    );

    MCAPI std::optional<::NodeType>
          _getPartialBlockNodeType(class BlockPos const&, class BlockPos const&, struct ActorPathingData const& data);

    MCAPI float
    _getPathfindingMalus(struct ActorPathingData const& data, ::NodeType nodeType, class BlockPos const& blockPos);

    MCAPI class PathfinderNode* _getUnderneathSupportedNode(
        class PathfinderNode*          node,
        struct ActorPathingData const& data,
        class BlockPos const&          fromPos,
        class PathfinderNode const&    size,
        ::CanClimbIntoNode
    );

    MCAPI class PathfinderNode*
    _getWaterNode(struct ActorPathingData const& data, class BlockPos const&, class BlockPos const& blockPos);

    MCAPI ::NodeType _isFreeStartNode(
        struct ActorPathingData const& data,
        class AABB const&,
        class BlockPos const& testPos,
        class BlockPos const& size
    );

    MCAPI ::NodeType
    _isFreeWaterNode(struct ActorPathingData const& data, class BlockPos const&, class BlockPos const& blockPos);

    MCAPI bool
    _isNeighborPotentiallyValid(class PathfinderNode const&, class PathfinderNode const&, class BlockPos const&, uint);

    MCAPI std::unique_ptr<class Path>
          _reconstructPath(class PathfinderNode* to, ::PathCompletionType completionType, struct ActorUniqueID actorId);

    // NOLINTEND
};
