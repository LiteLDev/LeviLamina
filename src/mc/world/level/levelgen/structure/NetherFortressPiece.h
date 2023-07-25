#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

class NetherFortressPiece : public ::StructurePiece {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERFORTRESSPIECE
public:
    NetherFortressPiece& operator=(NetherFortressPiece const&) = delete;
    NetherFortressPiece(NetherFortressPiece const&)            = delete;
    NetherFortressPiece()                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 4
     * @symbol ?postProcess\@NetherFortressPiece\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /**
     * @vftbl 12
     * @symbol ?addHardcodedSpawnAreas\@NetherFortressPiece\@\@UEBAXAEAVLevelChunk\@\@\@Z
     */
    virtual void addHardcodedSpawnAreas(class LevelChunk&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETHERFORTRESSPIECE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NetherFortressPiece();
#endif
    /**
     * @symbol ??0NetherFortressPiece\@\@QEAA\@H\@Z
     */
    MCAPI NetherFortressPiece(int);
    /**
     * @symbol
     * ?findAndCreateBridgePieceFactory\@NetherFortressPiece\@\@QEAA?AV?$unique_ptr\@VNetherFortressPiece\@\@U?$default_delete\@VNetherFortressPiece\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@3\@AEAVRandom\@\@HHHHH\@Z
     */
    MCAPI std::unique_ptr<class NetherFortressPiece> findAndCreateBridgePieceFactory(
        std::string const&,
        std::vector<std::unique_ptr<class StructurePiece>>&,
        class Random&,
        int,
        int,
        int,
        int,
        int
    );
    /**
     * @symbol
     * ?generateAndAddPiece\@NetherFortressPiece\@\@QEAAPEAVStructurePiece\@\@AEAVNBStartPiece\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@HHHHH_N\@Z
     */
    MCAPI class StructurePiece* generateAndAddPiece(
        class NBStartPiece&,
        std::vector<std::unique_ptr<class StructurePiece>>&,
        class Random&,
        int,
        int,
        int,
        int,
        int,
        bool
    );
    /**
     * @symbol
     * ?generateChildForward\@NetherFortressPiece\@\@QEAAPEAVStructurePiece\@\@AEAVNBStartPiece\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@HH_N\@Z
     */
    MCAPI class StructurePiece* generateChildForward(
        class NBStartPiece&,
        std::vector<std::unique_ptr<class StructurePiece>>&,
        class Random&,
        int,
        int,
        bool
    );
    /**
     * @symbol
     * ?generateChildLeft\@NetherFortressPiece\@\@QEAAPEAVStructurePiece\@\@AEAVNBStartPiece\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@HH_N\@Z
     */
    MCAPI class StructurePiece* generateChildLeft(
        class NBStartPiece&,
        std::vector<std::unique_ptr<class StructurePiece>>&,
        class Random&,
        int,
        int,
        bool
    );
    /**
     * @symbol
     * ?generateChildRight\@NetherFortressPiece\@\@QEAAPEAVStructurePiece\@\@AEAVNBStartPiece\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@HH_N\@Z
     */
    MCAPI class StructurePiece* generateChildRight(
        class NBStartPiece&,
        std::vector<std::unique_ptr<class StructurePiece>>&,
        class Random&,
        int,
        int,
        bool
    );
    /**
     * @symbol
     * ?generatePiece\@NetherFortressPiece\@\@QEAA?AV?$unique_ptr\@VNetherFortressPiece\@\@U?$default_delete\@VNetherFortressPiece\@\@\@std\@\@\@std\@\@AEAVNBStartPiece\@\@AEAV?$vector\@VPieceWeight\@\@V?$allocator\@VPieceWeight\@\@\@std\@\@\@3\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@3\@AEAVRandom\@\@HHHHH\@Z
     */
    MCAPI std::unique_ptr<class NetherFortressPiece> generatePiece(
        class NBStartPiece&,
        std::vector<class PieceWeight>&,
        std::vector<std::unique_ptr<class StructurePiece>>&,
        class Random&,
        int,
        int,
        int,
        int,
        int
    );
};
