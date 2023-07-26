#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/PoolElementStructurePiece.h"

class BastionPiece : public ::PoolElementStructurePiece {

public:
    // prevent constructor by default
    BastionPiece& operator=(BastionPiece const&) = delete;
    BastionPiece(BastionPiece const&)            = delete;
    BastionPiece()                               = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 13
     * @symbol
     * ?generateHeightAtPosition\@BastionPiece\@\@UEBAHAEBVBlockPos\@\@AEAVDimension\@\@AEAVBlockVolume\@\@AEAV?$unordered_map\@VChunkPos\@\@V?$unique_ptr\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@U?$default_delete\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@\@2\@\@std\@\@U?$hash\@VChunkPos\@\@\@3\@U?$equal_to\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$unique_ptr\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@U?$default_delete\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    virtual int generateHeightAtPosition(class BlockPos const&, class Dimension&, class BlockVolume&, class std::unordered_map<class ChunkPos, std::unique_ptr<std::vector<short>>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, std::unique_ptr<std::vector<short>>>>>&)
        const; // NOLINT
    /**
     * @vftbl 14
     * @symbol ?getSupportBlock\@BastionPiece\@\@UEBAPEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBV2\@\@Z
     */
    virtual class Block const*
    getSupportBlock(class BlockSource&, class BlockPos const&, class Block const&) const; // NOLINT
    /**
     * @vftbl 15
     * @symbol ?getBeardStabilizeBlock\@BastionPiece\@\@UEBAAEBVBlock\@\@AEBV2\@\@Z
     */
    virtual class Block const& getBeardStabilizeBlock(class Block const&) const; // NOLINT
    /**
     * @vftbl 16
     * @symbol ?getTerrainAdjustmentEffect\@BastionPiece\@\@UEBA?AW4AdjustmentEffect\@\@XZ
     */
    virtual enum class AdjustmentEffect getTerrainAdjustmentEffect() const; // NOLINT
    /**
     * @symbol
     * ?addPieces\@BastionPiece\@\@SAXVBlockPos\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@AEAVJigsawStructureRegistry\@\@W4VanillaBiomeTypes\@\@AEAVDimension\@\@\@Z
     */
    MCAPI static void
    addPieces(class BlockPos, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&, class JigsawStructureRegistry&, enum class VanillaBiomeTypes, class Dimension&); // NOLINT
};
