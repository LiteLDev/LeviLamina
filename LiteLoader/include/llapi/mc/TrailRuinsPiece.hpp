/**
 * @file  TrailRuinsPiece.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "PoolElementStructurePiece.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class TrailRuinsPiece : public PoolElementStructurePiece {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRAILRUINSPIECE
public:
    class TrailRuinsPiece& operator=(class TrailRuinsPiece const &) = delete;
    TrailRuinsPiece(class TrailRuinsPiece const &) = delete;
    TrailRuinsPiece() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 13
     * @symbol ?generateHeightAtPosition\@TrailRuinsPiece\@\@UEBAHAEBVBlockPos\@\@AEAVDimension\@\@AEAVBlockVolume\@\@AEAV?$unordered_map\@VChunkPos\@\@V?$unique_ptr\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@U?$default_delete\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@\@2\@\@std\@\@U?$hash\@VChunkPos\@\@\@3\@U?$equal_to\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$unique_ptr\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@U?$default_delete\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    virtual int generateHeightAtPosition(class BlockPos const &, class Dimension &, class BlockVolume &, class std::unordered_map<class ChunkPos, std::unique_ptr<std::vector<short>>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, std::unique_ptr<std::vector<short>>>>> &) const;
    /**
     * @vftbl 14
     * @symbol ?getSupportBlock\@TrailRuinsPiece\@\@UEBAPEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBV2\@\@Z
     */
    virtual class Block const * getSupportBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl 15
     * @symbol ?getBeardStabilizeBlock\@TrailRuinsPiece\@\@UEBAAEBVBlock\@\@AEBV2\@\@Z
     */
    virtual class Block const & getBeardStabilizeBlock(class Block const &) const;
    /**
     * @vftbl 16
     * @symbol ?getTerrainAdjustmentEffect\@TrailRuinsPiece\@\@UEBA?AW4AdjustmentEffect\@\@XZ
     */
    virtual enum class AdjustmentEffect getTerrainAdjustmentEffect() const;
    /**
     * @symbol ?addPieces\@TrailRuinsPiece\@\@SAXVBlockPos\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@AEAVJigsawStructureRegistry\@\@W4VanillaBiomeTypes\@\@AEAVDimension\@\@\@Z
     */
    MCAPI static void addPieces(class BlockPos, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, class JigsawStructureRegistry &, enum class VanillaBiomeTypes, class Dimension &);

//private:
    /**
     * @symbol ?_isPieceTowerTop\@TrailRuinsPiece\@\@AEBA?B_NXZ
     */
    MCAPI bool const _isPieceTowerTop() const;

private:

};
