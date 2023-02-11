/**
 * @file  PathFinder.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ??0PathFinder\@\@QEAA\@AEAVBlockSource\@\@AEBVNavigationComponent\@\@\@Z
     */
    MCAPI PathFinder(class BlockSource &, class NavigationComponent const &);
    /**
     * @hash   -1791714503
     * @symbol  ?findPath\@PathFinder\@\@QEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVActor\@\@0M\@Z
     */
    MCAPI std::unique_ptr<class Path> findPath(class Actor &, class Actor &, float);
    /**
     * @hash   -898122407
     * @symbol  ?findPath\@PathFinder\@\@QEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVActor\@\@HHHM\@Z
     */
    MCAPI std::unique_ptr<class Path> findPath(class Actor &, int, int, int, float);
    /**
     * @hash   1673051014
     * @symbol  ?isFree\@PathFinder\@\@QEAA?AW4NodeType\@\@AEAVActor\@\@AEBVBlockPos\@\@11W4CanJumpIntoNode\@\@W4CanClimbIntoNode\@\@\@Z
     */
    MCAPI enum class NodeType isFree(class Actor &, class BlockPos const &, class BlockPos const &, class BlockPos const &, enum class CanJumpIntoNode, enum class CanClimbIntoNode);
    /**
     * @hash   -1420800123
     * @symbol  ??1PathFinder\@\@QEAA\@XZ
     */
    MCAPI ~PathFinder();
    /**
     * @hash   -1936799201
     * @symbol  ?_getStartPositionFlyingActor\@PathFinder\@\@SA?AVBlockPos\@\@AEBVIPathBlockSource\@\@V2\@_N2M\@Z
     */
    MCAPI static class BlockPos _getStartPositionFlyingActor(class IPathBlockSource const &, class BlockPos, bool, bool, float);

//private:
    /**
     * @hash   -1813169436
     * @symbol  ?_checkBlockAndNeighborsProperty\@PathFinder\@\@AEAA_NAEAVActor\@\@AEBVBlockPos\@\@AEBVBlock\@\@W4BlockProperty\@\@HPEBVBreakBlocksComponent\@\@V?$function\@$$A6A_NAEBVBlock\@\@AEBVBlockPos\@\@\@Z\@std\@\@\@Z
     */
    MCAPI bool _checkBlockAndNeighborsProperty(class Actor &, class BlockPos const &, class Block const &, enum class BlockProperty, int, class BreakBlocksComponent const *, class std::function<bool (class Block const &, class BlockPos const &)>);
    /**
     * @hash   381797315
     * @symbol  ?_checkForDamagingBlock\@PathFinder\@\@AEAA_NAEAVActor\@\@AEBVBlockPos\@\@AEBVBlock\@\@HPEBVBreakBlocksComponent\@\@\@Z
     */
    MCAPI bool _checkForDamagingBlock(class Actor &, class BlockPos const &, class Block const &, int, class BreakBlocksComponent const *);
    /**
     * @hash   1063771743
     * @symbol  ?_classifyDoorNode\@PathFinder\@\@AEAA?AW4NodeType\@\@AEAVActor\@\@AEBVBlock\@\@AEBVBlockPos\@\@2\@Z
     */
    MCAPI enum class NodeType _classifyDoorNode(class Actor &, class Block const &, class BlockPos const &, class BlockPos const &);
    /**
     * @hash   -1753689640
     * @symbol  ?_classifyNode\@PathFinder\@\@AEAA?AW4NodeType\@\@AEAVActor\@\@AEBVBlockPos\@\@AEBVBlock\@\@1W4CanJumpIntoNode\@\@W4CanClimbIntoNode\@\@\@Z
     */
    MCAPI enum class NodeType _classifyNode(class Actor &, class BlockPos const &, class Block const &, class BlockPos const &, enum class CanJumpIntoNode, enum class CanClimbIntoNode);
    /**
     * @hash   -1947850946
     * @symbol  ?_findNearestPathableNeighbor\@PathFinder\@\@AEAA_NAEAVBlockPos\@\@AEAVActor\@\@AEBV2\@\@Z
     */
    MCAPI bool _findNearestPathableNeighbor(class BlockPos &, class Actor &, class BlockPos const &);
    /**
     * @hash   -1669495042
     * @symbol  ?_findPath\@PathFinder\@\@AEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVActor\@\@MMMM\@Z
     */
    MCAPI std::unique_ptr<class Path> _findPath(class Actor &, float, float, float, float);
    /**
     * @hash   -85096364
     * @symbol  ?_findPath\@PathFinder\@\@AEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVActor\@\@PEAVPathfinderNode\@\@1AEBV5\@M\@Z
     */
    MCAPI std::unique_ptr<class Path> _findPath(class Actor &, class PathfinderNode *, class PathfinderNode *, class PathfinderNode const &, float);
    /**
     * @hash   1946919184
     * @symbol  ?_getAABBForHeightComputation\@PathFinder\@\@AEBAAEAVAABB\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAV2\@\@Z
     */
    MCAPI class AABB & _getAABBForHeightComputation(class BlockPos const &, class Block const &, class AABB &) const;
    /**
     * @hash   -2117382692
     * @symbol  ?_getAABBForPathfinding\@PathFinder\@\@AEBAAEAVAABB\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAV2\@\@Z
     */
    MCAPI class AABB & _getAABBForPathfinding(class BlockPos const &, class Block const &, class AABB &) const;
    /**
     * @hash   1813169590
     * @symbol  ?_getHeightAboveBlock\@PathFinder\@\@AEBAMAEBVBlockPos\@\@M\@Z
     */
    MCAPI float _getHeightAboveBlock(class BlockPos const &, float) const;
    /**
     * @hash   513119490
     * @symbol  ?_getHeightBelowBlock\@PathFinder\@\@AEBAMAEBVBlockPos\@\@M\@Z
     */
    MCAPI float _getHeightBelowBlock(class BlockPos const &, float) const;
    /**
     * @hash   1125597060
     * @symbol  ?_getHighestReachablePosByJumping\@PathFinder\@\@AEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEBVBlockPos\@\@M0\@Z
     */
    MCAPI class std::optional<class BlockPos> _getHighestReachablePosByJumping(class BlockPos const &, float, class BlockPos const &) const;
    /**
     * @hash   419755426
     * @symbol  ?_getNeighbors\@PathFinder\@\@AEAAHAEAVActor\@\@AEAVPathfinderNode\@\@AEBV3\@2I\@Z
     */
    MCAPI int _getNeighbors(class Actor &, class PathfinderNode &, class PathfinderNode const &, class PathfinderNode const &, unsigned int);
    /**
     * @hash   -1694628157
     * @symbol  ?_getNode\@PathFinder\@\@AEAAPEAVPathfinderNode\@\@AEAVActor\@\@AEBVBlockPos\@\@1AEBV2\@MW4CanClimbIntoNode\@\@\@Z
     */
    MCAPI class PathfinderNode * _getNode(class Actor &, class BlockPos const &, class BlockPos const &, class PathfinderNode const &, float, enum class CanClimbIntoNode);
    /**
     * @hash   886941113
     * @symbol  ?_getNode\@PathFinder\@\@AEAAPEAVPathfinderNode\@\@AEBVBlockPos\@\@W4NodeType\@\@\@Z
     */
    MCAPI class PathfinderNode * _getNode(class BlockPos const &, enum class NodeType);
    /**
     * @hash   -1507791462
     * @symbol  ?_getPartialBlockNodeType\@PathFinder\@\@AEAA?AV?$optional\@W4NodeType\@\@\@std\@\@AEBVBlockPos\@\@0AEAVActor\@\@\@Z
     */
    MCAPI class std::optional<enum class NodeType> _getPartialBlockNodeType(class BlockPos const &, class BlockPos const &, class Actor &);
    /**
     * @hash   495429111
     * @symbol  ?_getPathfindingMalus\@PathFinder\@\@AEAAMAEAVActor\@\@W4NodeType\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI float _getPathfindingMalus(class Actor &, enum class NodeType, class BlockPos const &);
    /**
     * @hash   -388225926
     * @symbol  ?_getUnderneathSupportedNode\@PathFinder\@\@AEAAPEAVPathfinderNode\@\@PEAV2\@AEAVActor\@\@AEBVBlockPos\@\@AEBV2\@W4CanClimbIntoNode\@\@\@Z
     */
    MCAPI class PathfinderNode * _getUnderneathSupportedNode(class PathfinderNode *, class Actor &, class BlockPos const &, class PathfinderNode const &, enum class CanClimbIntoNode);
    /**
     * @hash   -1556512365
     * @symbol  ?_getWaterNode\@PathFinder\@\@AEAAPEAVPathfinderNode\@\@AEAVActor\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI class PathfinderNode * _getWaterNode(class Actor &, class BlockPos const &, class BlockPos const &);
    /**
     * @hash   -564654984
     * @symbol  ?_isFreeStartNode\@PathFinder\@\@AEAA?AW4NodeType\@\@AEAVActor\@\@AEBVAABB\@\@AEBVBlockPos\@\@2\@Z
     */
    MCAPI enum class NodeType _isFreeStartNode(class Actor &, class AABB const &, class BlockPos const &, class BlockPos const &);
    /**
     * @hash   -189602580
     * @symbol  ?_isFreeWaterNode\@PathFinder\@\@AEAA?AW4NodeType\@\@AEAVActor\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI enum class NodeType _isFreeWaterNode(class Actor &, class BlockPos const &, class BlockPos const &);
    /**
     * @hash   -154039815
     * @symbol  ?_reconstructPath\@PathFinder\@\@AEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@PEAVPathfinderNode\@\@W4PathCompletionType\@\@UActorUniqueID\@\@\@Z
     */
    MCAPI std::unique_ptr<class Path> _reconstructPath(class PathfinderNode *, enum class PathCompletionType, struct ActorUniqueID);

private:

};