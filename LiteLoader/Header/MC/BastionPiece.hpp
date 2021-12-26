// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "PoolElementStructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BastionPiece : public PoolElementStructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASTIONPIECE
public:
    class BastionPiece& operator=(class BastionPiece const&) = delete;
    BastionPiece(class BastionPiece const&) = delete;
    BastionPiece() = delete;
#endif

public:
    /*0*/ virtual ~BastionPiece();
    /*1*/ virtual class PoolElementStructurePiece* asPoolElement();
    /*2*/ virtual enum StructurePieceType getType() const;
    /*3*/ virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /*4*/ virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);
    /*5*/ virtual void addHardcodedSpawnAreas(class LevelChunk&) const;
    /*6*/ virtual int generateHeightAtPosition(class BlockPos const&, class Dimension&, class BlockVolume&, class std::unordered_map<class ChunkPos, std::unique_ptr<std::vector<short>>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, std::unique_ptr<std::vector<short>> > > >&) const;
    /*7*/ virtual void __unk_vfn_0();
    /*8*/ virtual class Block const& getBeardStabilizeBlock(class Block const&) const;
    /*9*/ virtual void __unk_vfn_1();
    /*10*/ virtual bool _needsPostProcessing(class BlockSource&);
    /*
    inline class Block const* getSupportBlock(class BlockSource& a0, class BlockPos const& a1, class Block const& a2) const{
        class Block const* (BastionPiece::*rv)(class BlockSource&, class BlockPos const&, class Block const&) const;
        *((void**)&rv) = dlsym("?getSupportBlock@BastionPiece@@UEBAPEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEBV2@@Z");
        return (this->*rv)(std::forward<class BlockSource&>(a0), std::forward<class BlockPos const&>(a1), std::forward<class Block const&>(a2));
    }
    inline enum AdjustmentEffect getTerrainAdjustmentEffect() const{
        enum AdjustmentEffect (BastionPiece::*rv)() const;
        *((void**)&rv) = dlsym("?getTerrainAdjustmentEffect@BastionPiece@@UEBA?AW4AdjustmentEffect@@XZ");
        return (this->*rv)();
    }
    */
    MCAPI static void addPieces(class BlockPos, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&, class JigsawStructureRegistry&, enum VanillaBiomeTypes, class Dimension&);

protected:

private:

};