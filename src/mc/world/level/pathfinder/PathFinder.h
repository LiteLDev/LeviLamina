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
    // symbol: ??0PathFinder@@QEAA@AEAVBlockSource@@AEBVNavigationComponent@@@Z
    MCAPI PathFinder(class BlockSource& region, class NavigationComponent const& navigation);

    // symbol: ?findPath@PathFinder@@QEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVActor@@0M@Z
    MCAPI std::unique_ptr<class Path> findPath(class Actor& from, class Actor& to, float maxDist);

    // symbol: ?findPath@PathFinder@@QEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVActor@@HHHM@Z
    MCAPI std::unique_ptr<class Path> findPath(class Actor& from, int x, int y, int z, float maxDist);

    // symbol:
    // ?isFree@PathFinder@@QEAA?AW4NodeType@@AEAVActor@@AEBVBlockPos@@11W4CanJumpIntoNode@@W4CanClimbIntoNode@@@Z
    MCAPI ::NodeType isFree(
        class Actor&          actor,
        class BlockPos const& fromPos,
        class BlockPos const& testPos,
        class BlockPos const& size,
        ::CanJumpIntoNode     jumpIntoNode,
        ::CanClimbIntoNode
    );

    // symbol:
    // ?isFree@PathFinder@@QEAA?AW4NodeType@@AEBUActorPathingData@@AEBVBlockPos@@11W4CanJumpIntoNode@@W4CanClimbIntoNode@@@Z
    MCAPI ::NodeType isFree(
        struct ActorPathingData const& data,
        class BlockPos const&          lastPathPos,
        class BlockPos const&          testPos,
        class BlockPos const&          size,
        ::CanJumpIntoNode              jumpIntoNode,
        ::CanClimbIntoNode
    );

    // symbol: ??1PathFinder@@QEAA@XZ
    MCAPI ~PathFinder();

    // symbol: ?_getStartPositionFlyingActor@PathFinder@@SA?AVBlockPos@@AEBVIPathBlockSource@@V2@_N2M@Z
    MCAPI static class BlockPos _getStartPositionFlyingActor(
        class IPathBlockSource const&,
        class BlockPos originalStartPos,
        bool           canFloat,
        bool,
        float
    );

    // symbol: ?extractPathingData@PathFinder@@SA?AUActorPathingData@@AEAVActor@@W4ExtractionPurpose@1@@Z
    MCAPI static struct ActorPathingData extractPathingData(class Actor&, ::PathFinder::ExtractionPurpose purpose);

    // symbol: ?DEFAULT_DESC@PathFinder@@2UPreferredPathDescription@@B
    MCAPI static struct PreferredPathDescription const DEFAULT_DESC;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_checkBlockAndNeighborsProperty@PathFinder@@AEAA_NAEBUActorPathingData@@AEBVBlockPos@@AEBVBlock@@W4BlockProperty@@HPEBVBreakBlocksComponent@@V?$function@$$A6A_NAEBVBlock@@AEBVBlockPos@@@Z@std@@@Z
    MCAPI bool _checkBlockAndNeighborsProperty(
        struct ActorPathingData const&                                 data,
        class BlockPos const&                                          pos,
        class Block const&                                             block,
        ::BlockProperty                                                testProperty,
        int                                                            radius,
        class BreakBlocksComponent const*                              breakBlocksComponent,
        std::function<bool(class Block const&, class BlockPos const&)> extraCondition
    );

    // symbol:
    // ?_checkForDamagingBlock@PathFinder@@AEAA_NAEBUActorPathingData@@AEBVBlockPos@@AEBVBlock@@HPEBVBreakBlocksComponent@@@Z
    MCAPI bool _checkForDamagingBlock(
        struct ActorPathingData const&    data,
        class BlockPos const&             pos,
        class Block const&                block,
        int                               radius,
        class BreakBlocksComponent const* breakBlocksComponent
    );

    // symbol: ?_classifyDoorNode@PathFinder@@AEAA?AW4NodeType@@AEBUActorPathingData@@AEBVBlock@@AEBVBlockPos@@2@Z
    MCAPI ::NodeType _classifyDoorNode(
        struct ActorPathingData const& data,
        class Block const&             testBlock,
        class BlockPos const&          testPos,
        class BlockPos const&          lastPathPos
    );

    // symbol:
    // ?_classifyNode@PathFinder@@AEAA?AW4NodeType@@AEBUActorPathingData@@AEBVBlockPos@@AEBVBlock@@1W4CanJumpIntoNode@@W4CanClimbIntoNode@@@Z
    MCAPI ::NodeType _classifyNode(
        struct ActorPathingData const& data,
        class BlockPos const&          lastPathPos,
        class Block const&             testBlock,
        class BlockPos const&          testPos,
        ::CanJumpIntoNode              jumpIntoNode,
        ::CanClimbIntoNode
    );

    // symbol: ?_findNearestPathableNeighbor@PathFinder@@AEAA_NAEAVBlockPos@@AEBUActorPathingData@@AEBV2@@Z
    MCAPI bool _findNearestPathableNeighbor(
        class BlockPos&                outPos,
        struct ActorPathingData const& data,
        class BlockPos const&          testPos
    );

    // symbol:
    // ?_findPath@PathFinder@@AEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEBUActorPathingData@@PEAVPathfinderNode@@1AEBV5@M@Z
    MCAPI std::unique_ptr<class Path> _findPath(
        struct ActorPathingData const& data,
        class PathfinderNode*          from,
        class PathfinderNode*          to,
        class PathfinderNode const&    size,
        float                          maxDist
    );

    // symbol:
    // ?_findPath@PathFinder@@AEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEBUActorPathingData@@MMMM@Z
    MCAPI std::unique_ptr<class Path>
          _findPath(struct ActorPathingData const& actorData, float xt, float yt, float zt, float maxDist);

    // symbol: ?_getAABBForPathfinding@PathFinder@@AEBA?AVAABB@@AEBVBlockPos@@AEBVBlock@@@Z
    MCAPI class AABB _getAABBForPathfinding(class BlockPos const&, class Block const&) const;

    // symbol: ?_getHighestReachablePosByJumping@PathFinder@@AEBA?AV?$optional@VBlockPos@@@std@@AEBVBlockPos@@M0@Z
    MCAPI std::optional<class BlockPos>
          _getHighestReachablePosByJumping(class BlockPos const&, float, class BlockPos const&) const;

    // symbol:
    // ?_getMinAndMaxHeightAroundBlock@PathFinder@@AEBA?AUMinMaxHeightCacheEntry@ActorPathingData@@AEBU3@AEBVBlockPos@@M@Z
    MCAPI struct ActorPathingData::MinMaxHeightCacheEntry
    _getMinAndMaxHeightAroundBlock(struct ActorPathingData const&, class BlockPos const&, float) const;

    // symbol: ?_getNode@PathFinder@@AEAAPEAVPathfinderNode@@AEBVBlockPos@@W4NodeType@@@Z
    MCAPI class PathfinderNode* _getNode(class BlockPos const& pos, ::NodeType nodeType);

    // symbol:
    // ?_getNode@PathFinder@@AEAAPEAVPathfinderNode@@AEBUActorPathingData@@AEBVBlockPos@@1AEBV2@MW4CanClimbIntoNode@@@Z
    MCAPI class PathfinderNode* _getNode(
        struct ActorPathingData const& data,
        class BlockPos const&          fromPos,
        class BlockPos const&          blockPos,
        class PathfinderNode const&    size,
        float,
        ::CanClimbIntoNode
    );

    // symbol:
    // ?_getPartialBlockNodeType@PathFinder@@AEAA?AV?$optional@W4NodeType@@@std@@AEBVBlockPos@@0AEBUActorPathingData@@@Z
    MCAPI std::optional<::NodeType>
          _getPartialBlockNodeType(class BlockPos const&, class BlockPos const&, struct ActorPathingData const& data);

    // symbol: ?_getPathfindingMalus@PathFinder@@AEAAMAEBUActorPathingData@@W4NodeType@@AEBVBlockPos@@@Z
    MCAPI float
    _getPathfindingMalus(struct ActorPathingData const& data, ::NodeType nodeType, class BlockPos const& blockPos);

    // symbol:
    // ?_getUnderneathSupportedNode@PathFinder@@AEAAPEAVPathfinderNode@@PEAV2@AEBUActorPathingData@@AEBVBlockPos@@AEBV2@W4CanClimbIntoNode@@@Z
    MCAPI class PathfinderNode* _getUnderneathSupportedNode(
        class PathfinderNode*          node,
        struct ActorPathingData const& data,
        class BlockPos const&          fromPos,
        class PathfinderNode const&    size,
        ::CanClimbIntoNode
    );

    // symbol: ?_getWaterNode@PathFinder@@AEAAPEAVPathfinderNode@@AEBUActorPathingData@@AEBVBlockPos@@1@Z
    MCAPI class PathfinderNode*
    _getWaterNode(struct ActorPathingData const& data, class BlockPos const&, class BlockPos const& blockPos);

    // symbol: ?_isFreeStartNode@PathFinder@@AEAA?AW4NodeType@@AEBUActorPathingData@@AEBVAABB@@AEBVBlockPos@@2@Z
    MCAPI ::NodeType _isFreeStartNode(
        struct ActorPathingData const& data,
        class AABB const&,
        class BlockPos const& testPos,
        class BlockPos const& size
    );

    // symbol: ?_isNeighborPotentiallyValid@PathFinder@@AEAA_NAEBVPathfinderNode@@0AEBVBlockPos@@I@Z
    MCAPI bool
    _isNeighborPotentiallyValid(class PathfinderNode const&, class PathfinderNode const&, class BlockPos const&, uint);

    // symbol:
    // ?_reconstructPath@PathFinder@@AEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@PEAVPathfinderNode@@W4PathCompletionType@@UActorUniqueID@@@Z
    MCAPI std::unique_ptr<class Path>
          _reconstructPath(class PathfinderNode* to, ::PathCompletionType completionType, struct ActorUniqueID actorId);

    // NOLINTEND
};
