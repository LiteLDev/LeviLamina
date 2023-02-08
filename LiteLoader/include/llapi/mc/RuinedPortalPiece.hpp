/**
 * @file  RuinedPortalPiece.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RuinedPortalPiece.
 *
 */
class RuinedPortalPiece : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RUINEDPORTALPIECE
public:
    class RuinedPortalPiece& operator=(class RuinedPortalPiece const &) = delete;
    RuinedPortalPiece(class RuinedPortalPiece const &) = delete;
    RuinedPortalPiece() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RuinedPortalPiece();
    /**
     * @hash   675869232
     * @vftbl  2
     * @symbol  ?getType\@RuinedPortalPiece\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @hash   -1456512472
     * @vftbl  4
     * @symbol  ?postProcess\@RuinedPortalPiece\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

//private:
    /**
     * @hash   -1753309564
     * @symbol  ?_addNetherrackDripColumn\@RuinedPortalPiece\@\@AEAAXAEAVRandom\@\@AEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    MCAPI void _addNetherrackDripColumn(class Random &, class BlockSource &, class BlockPos);
    /**
     * @hash   -899064957
     * @symbol  ?_maybeReplaceBlock\@RuinedPortalPiece\@\@AEAAXAEAVRandom\@\@AEAVBlockSource\@\@VBlockPos\@\@AEBUPortalEnvironmentModifiers\@\@\@Z
     */
    MCAPI void _maybeReplaceBlock(class Random &, class BlockSource &, class BlockPos, struct PortalEnvironmentModifiers const &);
    /**
     * @hash   -493819709
     * @symbol  ?_maybeReplaceFullStoneBlock\@RuinedPortalPiece\@\@AEAAXAEAVRandom\@\@AEAVBlockSource\@\@VBlockPos\@\@AEBVBlock\@\@AEBUPortalEnvironmentModifiers\@\@\@Z
     */
    MCAPI void _maybeReplaceFullStoneBlock(class Random &, class BlockSource &, class BlockPos, class Block const &, struct PortalEnvironmentModifiers const &);
    /**
     * @hash   -379221194
     * @symbol  ?_maybeReplaceStairs\@RuinedPortalPiece\@\@AEAAXAEAVRandom\@\@AEAVBlockSource\@\@VBlockPos\@\@AEBUPortalEnvironmentModifiers\@\@\@Z
     */
    MCAPI void _maybeReplaceStairs(class Random &, class BlockSource &, class BlockPos, struct PortalEnvironmentModifiers const &);
    /**
     * @hash   -544894506
     * @symbol  ?_maybeReplaceWall\@RuinedPortalPiece\@\@AEAAXAEAVRandom\@\@AEAVBlockSource\@\@VBlockPos\@\@AEBUPortalEnvironmentModifiers\@\@\@Z
     */
    MCAPI void _maybeReplaceWall(class Random &, class BlockSource &, class BlockPos, struct PortalEnvironmentModifiers const &);
    /**
     * @hash   1305304470
     * @symbol  ?_moveStructureBoundsToSuitableY\@RuinedPortalPiece\@\@AEAAXAEAVRandom\@\@AEAVBlockSource\@\@AEBUPortalEnvironmentModifiers\@\@\@Z
     */
    MCAPI void _moveStructureBoundsToSuitableY(class Random &, class BlockSource &, struct PortalEnvironmentModifiers const &);
    /**
     * @hash   -2097506284
     * @symbol  ?_spreadNetherrack\@RuinedPortalPiece\@\@AEAAXAEAVRandom\@\@AEAVBlockSource\@\@AEBUPortalEnvironmentModifiers\@\@\@Z
     */
    MCAPI void _spreadNetherrack(class Random &, class BlockSource &, struct PortalEnvironmentModifiers const &);
    /**
     * @hash   806736552
     * @symbol  ?_getRandomFacingStairs\@RuinedPortalPiece\@\@CAAEBVBlock\@\@AEAVRandom\@\@AEBV2\@\@Z
     */
    MCAPI static class Block const & _getRandomFacingStairs(class Random &, class Block const &);
    /**
     * @hash   -135597920
     * @symbol  ?_isLava\@RuinedPortalPiece\@\@CA_NAEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    MCAPI static bool _isLava(class BlockSource &, class BlockPos);
    /**
     * @hash   -979234965
     * @symbol  ?_willLavaFlowIn\@RuinedPortalPiece\@\@CA_NAEAVBlockSource\@\@VBlockPos\@\@\@Z
     */
    MCAPI static bool _willLavaFlowIn(class BlockSource &, class BlockPos);

private:

};