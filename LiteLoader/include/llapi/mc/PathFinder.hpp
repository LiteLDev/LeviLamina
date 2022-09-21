/**
 * @file  MC/PathFinder.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PathFinder.
 *
 */
class PathFinder {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PATHFINDER
public:
    class PathFinder& operator=(class PathFinder const &) = delete;
    PathFinder(class PathFinder const &) = delete;
    PathFinder() = delete;
#endif

public:
    /**
     * @hash   -462169364
     * @symbol ??0PathFinder@@QEAA@PEAVBlockSource@@AEBVNavigationComponent@@@Z
     */
    MCAPI PathFinder(class BlockSource *, class NavigationComponent const &);
    /**
     * @hash   1819635833
     * @symbol ?findPath@PathFinder@@QEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVActor@@0M@Z
     */
    MCAPI std::unique_ptr<class Path> findPath(class Actor &, class Actor &, float);
    /**
     * @hash   -1581754743
     * @symbol ?findPath@PathFinder@@QEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVActor@@HHHM@Z
     */
    MCAPI std::unique_ptr<class Path> findPath(class Actor &, int, int, int, float);
    /**
     * @hash   989418678
     * @symbol ?isFree@PathFinder@@QEAA?AW4NodeType@@AEAVActor@@AEBVBlockPos@@11W4CanJumpIntoNode@@W4CanClimbIntoNode@@@Z
     */
    MCAPI enum NodeType isFree(class Actor &, class BlockPos const &, class BlockPos const &, class BlockPos const &, enum CanJumpIntoNode, enum CanClimbIntoNode);
    /**
     * @hash   -2103971179
     * @symbol ??1PathFinder@@QEAA@XZ
     */
    MCAPI ~PathFinder();
    /**
     * @symbol ?_getStartPositionFlyingActor@PathFinder@@SA?AVBlockPos@@AEBVIPathBlockSource@@V2@_N2M@Z
     */
    MCAPI static class BlockPos _getStartPositionFlyingActor(class IPathBlockSource const &, class BlockPos, bool, bool, float);

//private:
    /**
     * @hash   1798672932
     * @symbol ?_checkBlockAndNeighborsProperty@PathFinder@@AEAA_NAEAVActor@@AEBVBlockPos@@AEBVBlock@@W4BlockProperty@@HPEBVBreakBlocksComponent@@V?$function@$$A6A_NAEBVBlock@@AEBVBlockPos@@@Z@std@@@Z
     */
    MCAPI bool _checkBlockAndNeighborsProperty(class Actor &, class BlockPos const &, class Block const &, enum BlockProperty, int, class BreakBlocksComponent const *, class std::function<bool (class Block const &, class BlockPos const &)>);
    /**
     * @hash   -301358365
     * @symbol ?_checkForDamagingBlock@PathFinder@@AEAA_NAEAVActor@@AEBVBlockPos@@AEBVBlock@@HPEBVBreakBlocksComponent@@@Z
     */
    MCAPI bool _checkForDamagingBlock(class Actor &, class BlockPos const &, class Block const &, int, class BreakBlocksComponent const *);
    /**
     * @hash   380646815
     * @symbol ?_classifyDoorNode@PathFinder@@AEAA?AW4NodeType@@AEAVActor@@AEBVBlock@@AEBVBlockPos@@2@Z
     */
    MCAPI enum NodeType _classifyDoorNode(class Actor &, class Block const &, class BlockPos const &, class BlockPos const &);
    /**
     * @hash   1858152728
     * @symbol ?_classifyNode@PathFinder@@AEAA?AW4NodeType@@AEAVActor@@AEBVBlockPos@@AEBVBlock@@1W4CanJumpIntoNode@@W4CanClimbIntoNode@@@Z
     */
    MCAPI enum NodeType _classifyNode(class Actor &, class BlockPos const &, class Block const &, class BlockPos const &, enum CanJumpIntoNode, enum CanClimbIntoNode);
    /**
     * @hash   1663837662
     * @symbol ?_findNearestPathableNeighbor@PathFinder@@AEAA_NAEAVBlockPos@@AEAVActor@@AEBV2@@Z
     */
    MCAPI bool _findNearestPathableNeighbor(class BlockPos &, class Actor &, class BlockPos const &);
    /**
     * @hash   1942178190
     * @symbol ?_findPath@PathFinder@@AEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVActor@@MMMM@Z
     */
    MCAPI std::unique_ptr<class Path> _findPath(class Actor &, float, float, float, float);
    /**
     * @hash   -768113660
     * @symbol ?_findPath@PathFinder@@AEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVActor@@PEAVPathfinderNode@@1AEBV5@M@Z
     */
    MCAPI std::unique_ptr<class Path> _findPath(class Actor &, class PathfinderNode *, class PathfinderNode *, class PathfinderNode const &, float);
    /**
     * @hash   1263901888
     * @symbol ?_getAABBForHeightComputation@PathFinder@@AEBAAEAVAABB@@AEBVBlockPos@@AEBVBlock@@AEAV2@@Z
     */
    MCAPI class AABB & _getAABBForHeightComputation(class BlockPos const &, class Block const &, class AABB &) const;
    /**
     * @hash   1494567308
     * @symbol ?_getAABBForPathfinding@PathFinder@@AEBAAEAVAABB@@AEBVBlockPos@@AEBVBlock@@AEAV2@@Z
     */
    MCAPI class AABB & _getAABBForPathfinding(class BlockPos const &, class Block const &, class AABB &) const;
    /**
     * @hash   1130152294
     * @symbol ?_getHeightAboveBlock@PathFinder@@AEBAMAEBVBlockPos@@M@Z
     */
    MCAPI float _getHeightAboveBlock(class BlockPos const &, float) const;
    /**
     * @hash   442118484
     * @symbol ?_getHighestReachablePosByJumping@PathFinder@@AEBA?AV?$optional@VBlockPos@@@std@@AEBVBlockPos@@M0@Z
     */
    MCAPI class std::optional<class BlockPos> _getHighestReachablePosByJumping(class BlockPos const &, float, class BlockPos const &) const;
    /**
     * @hash   484688138
     * @symbol ?_getMinAndMaxHeightAroundBlock@PathFinder@@AEBA?AU?$pair@MM@std@@AEBVBlockPos@@M@Z
     */
    MCAPI struct std::pair<float, float> _getMinAndMaxHeightAroundBlock(class BlockPos const &, float) const;
    /**
     * @hash   -263246494
     * @symbol ?_getNeighbors@PathFinder@@AEAAHAEAVActor@@AEAVPathfinderNode@@AEBV3@2I@Z
     */
    MCAPI int _getNeighbors(class Actor &, class PathfinderNode &, class PathfinderNode const &, class PathfinderNode const &, unsigned int);
    /**
     * @hash   1917321843
     * @symbol ?_getNode@PathFinder@@AEAAPEAVPathfinderNode@@AEAVActor@@AEBVBlockPos@@1AEBV2@MW4CanClimbIntoNode@@@Z
     */
    MCAPI class PathfinderNode * _getNode(class Actor &, class BlockPos const &, class BlockPos const &, class PathfinderNode const &, float, enum CanClimbIntoNode);
    /**
     * @hash   203846937
     * @symbol ?_getNode@PathFinder@@AEAAPEAVPathfinderNode@@AEBVBlockPos@@W4NodeType@@@Z
     */
    MCAPI class PathfinderNode * _getNode(class BlockPos const &, enum NodeType);
    /**
     * @hash   2104081658
     * @symbol ?_getPartialBlockNodeType@PathFinder@@AEAA?AV?$optional@W4NodeType@@@std@@AEBVBlockPos@@0AEAVActor@@@Z
     */
    MCAPI class std::optional<enum NodeType> _getPartialBlockNodeType(class BlockPos const &, class BlockPos const &, class Actor &);
    /**
     * @hash   -187741945
     * @symbol ?_getPathfindingMalus@PathFinder@@AEAAMAEAVActor@@W4NodeType@@AEBVBlockPos@@@Z
     */
    MCAPI float _getPathfindingMalus(class Actor &, enum NodeType, class BlockPos const &);
    /**
     * @hash   -1071796758
     * @symbol ?_getUnderneathSupportedNode@PathFinder@@AEAAPEAVPathfinderNode@@PEAV2@AEAVActor@@AEBVBlockPos@@AEBV2@W4CanClimbIntoNode@@@Z
     */
    MCAPI class PathfinderNode * _getUnderneathSupportedNode(class PathfinderNode *, class Actor &, class BlockPos const &, class PathfinderNode const &, enum CanClimbIntoNode);
    /**
     * @hash   2054868723
     * @symbol ?_getWaterNode@PathFinder@@AEAAPEAVPathfinderNode@@AEAVActor@@AEBVBlockPos@@1@Z
     */
    MCAPI class PathfinderNode * _getWaterNode(class Actor &, class BlockPos const &, class BlockPos const &);
    /**
     * @hash   -1248256568
     * @symbol ?_isFreeStartNode@PathFinder@@AEAA?AW4NodeType@@AEAVActor@@AEBVAABB@@AEBVBlockPos@@2@Z
     */
    MCAPI enum NodeType _isFreeStartNode(class Actor &, class AABB const &, class BlockPos const &, class BlockPos const &);
    /**
     * @hash   -873204164
     * @symbol ?_isFreeWaterNode@PathFinder@@AEAA?AW4NodeType@@AEAVActor@@AEBVBlockPos@@1@Z
     */
    MCAPI enum NodeType _isFreeWaterNode(class Actor &, class BlockPos const &, class BlockPos const &);
    /**
     * @hash   -837656775
     * @symbol ?_reconstructPath@PathFinder@@AEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@PEAVPathfinderNode@@W4PathCompletionType@@UActorUniqueID@@@Z
     */
    MCAPI std::unique_ptr<class Path> _reconstructPath(class PathfinderNode *, enum PathCompletionType, struct ActorUniqueID);

private:

};