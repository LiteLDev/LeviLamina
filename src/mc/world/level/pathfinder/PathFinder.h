#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PathFinder {
public:
    // PathFinder inner types declare
    // clang-format off

    // clang-format on

    // PathFinder inner types define
    enum class ExtractionPurpose {};

public:
    // prevent constructor by default
    PathFinder& operator=(PathFinder const&) = delete;
    PathFinder(PathFinder const&)            = delete;
    PathFinder()                             = delete;

public:
    /**
     * @symbol ??0PathFinder\@\@QEAA\@AEAVBlockSource\@\@AEBVNavigationComponent\@\@\@Z
     */
    MCAPI PathFinder(class BlockSource&, class NavigationComponent const&); // NOLINT
    /**
     * @symbol
     * ?findPath\@PathFinder\@\@QEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVActor\@\@0M\@Z
     */
    MCAPI std::unique_ptr<class Path> findPath(class Actor&, class Actor&, float); // NOLINT
    /**
     * @symbol
     * ?findPath\@PathFinder\@\@QEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVActor\@\@HHHM\@Z
     */
    MCAPI std::unique_ptr<class Path> findPath(class Actor&, int, int, int, float); // NOLINT
    /**
     * @symbol
     * ?isFree\@PathFinder\@\@QEAA?AW4NodeType\@\@AEBUActorPathingData\@\@AEBVBlockPos\@\@11W4CanJumpIntoNode\@\@W4CanClimbIntoNode\@\@\@Z
     */
    MCAPI enum class NodeType isFree(
        struct ActorPathingData const&,
        class BlockPos const&,
        class BlockPos const&,
        class BlockPos const&,
        enum class CanJumpIntoNode,
        enum class CanClimbIntoNode
    ); // NOLINT
    /**
     * @symbol
     * ?isFree\@PathFinder\@\@QEAA?AW4NodeType\@\@AEAVActor\@\@AEBVBlockPos\@\@11W4CanJumpIntoNode\@\@W4CanClimbIntoNode\@\@\@Z
     */
    MCAPI enum class NodeType isFree(
        class Actor&,
        class BlockPos const&,
        class BlockPos const&,
        class BlockPos const&,
        enum class CanJumpIntoNode,
        enum class CanClimbIntoNode
    ); // NOLINT
    /**
     * @symbol ??1PathFinder\@\@QEAA\@XZ
     */
    MCAPI ~PathFinder(); // NOLINT
    /**
     * @symbol ?_getStartPositionFlyingActor\@PathFinder\@\@SA?AVBlockPos\@\@AEBVIPathBlockSource\@\@V2\@_N2M\@Z
     */
    MCAPI static class BlockPos
    _getStartPositionFlyingActor(class IPathBlockSource const&, class BlockPos, bool, bool, float); // NOLINT
    /**
     * @symbol ?extractPathingData\@PathFinder\@\@SA?AUActorPathingData\@\@AEAVActor\@\@W4ExtractionPurpose\@1\@\@Z
     */
    MCAPI static struct ActorPathingData
    extractPathingData(class Actor&, enum class PathFinder::ExtractionPurpose); // NOLINT
    /**
     * @symbol ?DEFAULT_DESC\@PathFinder\@\@2UPreferredPathDescription\@\@B
     */
    MCAPI static struct PreferredPathDescription const DEFAULT_DESC; // NOLINT

    // private:
    /**
     * @symbol
     * ?_checkBlockAndNeighborsProperty\@PathFinder\@\@AEAA_NAEBUActorPathingData\@\@AEBVBlockPos\@\@AEBVBlock\@\@W4BlockProperty\@\@HPEBVBreakBlocksComponent\@\@V?$function\@$$A6A_NAEBVBlock\@\@AEBVBlockPos\@\@\@Z\@std\@\@\@Z
     */
    MCAPI bool
    _checkBlockAndNeighborsProperty(struct ActorPathingData const&, class BlockPos const&, class Block const&, enum class BlockProperty, int, class BreakBlocksComponent const*, class std::function<bool(class Block const&, class BlockPos const&)>); // NOLINT
    /**
     * @symbol
     * ?_checkForDamagingBlock\@PathFinder\@\@AEAA_NAEBUActorPathingData\@\@AEBVBlockPos\@\@AEBVBlock\@\@HPEBVBreakBlocksComponent\@\@\@Z
     */
    MCAPI bool
    _checkForDamagingBlock(struct ActorPathingData const&, class BlockPos const&, class Block const&, int, class BreakBlocksComponent const*); // NOLINT
    /**
     * @symbol
     * ?_classifyDoorNode\@PathFinder\@\@AEAA?AW4NodeType\@\@AEBUActorPathingData\@\@AEBVBlock\@\@AEBVBlockPos\@\@2\@Z
     */
    MCAPI enum class NodeType
    _classifyDoorNode(struct ActorPathingData const&, class Block const&, class BlockPos const&, class BlockPos const&); // NOLINT
    /**
     * @symbol
     * ?_classifyNode\@PathFinder\@\@AEAA?AW4NodeType\@\@AEBUActorPathingData\@\@AEBVBlockPos\@\@AEBVBlock\@\@1W4CanJumpIntoNode\@\@W4CanClimbIntoNode\@\@\@Z
     */
    MCAPI enum class NodeType _classifyNode(
        struct ActorPathingData const&,
        class BlockPos const&,
        class Block const&,
        class BlockPos const&,
        enum class CanJumpIntoNode,
        enum class CanClimbIntoNode
    ); // NOLINT
    /**
     * @symbol ?_findNearestPathableNeighbor\@PathFinder\@\@AEAA_NAEAVBlockPos\@\@AEBUActorPathingData\@\@AEBV2\@\@Z
     */
    MCAPI bool
    _findNearestPathableNeighbor(class BlockPos&, struct ActorPathingData const&, class BlockPos const&); // NOLINT
    /**
     * @symbol
     * ?_findPath\@PathFinder\@\@AEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEBUActorPathingData\@\@MMMM\@Z
     */
    MCAPI std::unique_ptr<class Path> _findPath(struct ActorPathingData const&, float, float, float, float); // NOLINT
    /**
     * @symbol
     * ?_findPath\@PathFinder\@\@AEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEBUActorPathingData\@\@PEAVPathfinderNode\@\@1AEBV5\@M\@Z
     */
    MCAPI std::unique_ptr<class Path> _findPath(
        struct ActorPathingData const&,
        class PathfinderNode*,
        class PathfinderNode*,
        class PathfinderNode const&,
        float
    ); // NOLINT
    /**
     * @symbol ?_getAABBForHeightComputation\@PathFinder\@\@AEBAAEAVAABB\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAV2\@\@Z
     */
    MCAPI class AABB&
    _getAABBForHeightComputation(class BlockPos const&, class Block const&, class AABB&) const; // NOLINT
    /**
     * @symbol ?_getAABBForPathfinding\@PathFinder\@\@AEBAAEAVAABB\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAV2\@\@Z
     */
    MCAPI class AABB& _getAABBForPathfinding(class BlockPos const&, class Block const&, class AABB&) const; // NOLINT
    /**
     * @symbol ?_getHeightAboveBlock\@PathFinder\@\@AEBAMAEBVBlockPos\@\@M\@Z
     */
    MCAPI float _getHeightAboveBlock(class BlockPos const&, float) const; // NOLINT
    /**
     * @symbol ?_getHeightBelowBlock\@PathFinder\@\@AEBAMAEBVBlockPos\@\@M\@Z
     */
    MCAPI float _getHeightBelowBlock(class BlockPos const&, float) const; // NOLINT
    /**
     * @symbol
     * ?_getHighestReachablePosByJumping\@PathFinder\@\@AEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEBVBlockPos\@\@M0\@Z
     */
    MCAPI class std::optional<class BlockPos>
    _getHighestReachablePosByJumping(class BlockPos const&, float, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?_getNeighbors\@PathFinder\@\@AEAAHAEBUActorPathingData\@\@AEAVPathfinderNode\@\@AEBV3\@2I\@Z
     */
    MCAPI int _getNeighbors(
        struct ActorPathingData const&,
        class PathfinderNode&,
        class PathfinderNode const&,
        class PathfinderNode const&,
        unsigned int
    ); // NOLINT
    /**
     * @symbol
     * ?_getNode\@PathFinder\@\@AEAAPEAVPathfinderNode\@\@AEBUActorPathingData\@\@AEBVBlockPos\@\@1AEBV2\@MW4CanClimbIntoNode\@\@\@Z
     */
    MCAPI class PathfinderNode* _getNode(
        struct ActorPathingData const&,
        class BlockPos const&,
        class BlockPos const&,
        class PathfinderNode const&,
        float,
        enum class CanClimbIntoNode
    ); // NOLINT
    /**
     * @symbol ?_getNode\@PathFinder\@\@AEAAPEAVPathfinderNode\@\@AEBVBlockPos\@\@W4NodeType\@\@\@Z
     */
    MCAPI class PathfinderNode* _getNode(class BlockPos const&, enum class NodeType); // NOLINT
    /**
     * @symbol
     * ?_getPartialBlockNodeType\@PathFinder\@\@AEAA?AV?$optional\@W4NodeType\@\@\@std\@\@AEBVBlockPos\@\@0AEBUActorPathingData\@\@\@Z
     */
    MCAPI class std::optional<enum class NodeType>
    _getPartialBlockNodeType(class BlockPos const&, class BlockPos const&, struct ActorPathingData const&); // NOLINT
    /**
     * @symbol ?_getPathfindingMalus\@PathFinder\@\@AEAAMAEBUActorPathingData\@\@W4NodeType\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI float
    _getPathfindingMalus(struct ActorPathingData const&, enum class NodeType, class BlockPos const&); // NOLINT
    /**
     * @symbol
     * ?_getUnderneathSupportedNode\@PathFinder\@\@AEAAPEAVPathfinderNode\@\@PEAV2\@AEBUActorPathingData\@\@AEBVBlockPos\@\@AEBV2\@W4CanClimbIntoNode\@\@\@Z
     */
    MCAPI class PathfinderNode* _getUnderneathSupportedNode(
        class PathfinderNode*,
        struct ActorPathingData const&,
        class BlockPos const&,
        class PathfinderNode const&,
        enum class CanClimbIntoNode
    ); // NOLINT
    /**
     * @symbol ?_getWaterNode\@PathFinder\@\@AEAAPEAVPathfinderNode\@\@AEBUActorPathingData\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI class PathfinderNode*
    _getWaterNode(struct ActorPathingData const&, class BlockPos const&, class BlockPos const&); // NOLINT
    /**
     * @symbol
     * ?_isFreeStartNode\@PathFinder\@\@AEAA?AW4NodeType\@\@AEBUActorPathingData\@\@AEBVAABB\@\@AEBVBlockPos\@\@2\@Z
     */
    MCAPI enum class NodeType
    _isFreeStartNode(struct ActorPathingData const&, class AABB const&, class BlockPos const&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?_isFreeWaterNode\@PathFinder\@\@AEAA?AW4NodeType\@\@AEBUActorPathingData\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI enum class NodeType
    _isFreeWaterNode(struct ActorPathingData const&, class BlockPos const&, class BlockPos const&); // NOLINT
    /**
     * @symbol
     * ?_reconstructPath\@PathFinder\@\@AEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@PEAVPathfinderNode\@\@W4PathCompletionType\@\@UActorUniqueID\@\@\@Z
     */
    MCAPI std::unique_ptr<class Path>
          _reconstructPath(class PathfinderNode*, enum class PathCompletionType, struct ActorUniqueID); // NOLINT

private:
};
