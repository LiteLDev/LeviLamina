#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"

class NetherFortressPiece : public ::StructurePiece {

public:
    // prevent constructor by default
    NetherFortressPiece& operator=(NetherFortressPiece const&) = delete;
    NetherFortressPiece(NetherFortressPiece const&)            = delete;
    NetherFortressPiece()                                      = delete;

public:
    // NOLINTBEGIN
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
    MCAPI NetherFortressPiece(int32_t);
    /**
     * @symbol
     * ?findAndCreateBridgePieceFactory\@NetherFortressPiece\@\@QEAA?AV?$unique_ptr\@VNetherFortressPiece\@\@U?$default_delete\@VNetherFortressPiece\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@3\@AEAVRandom\@\@HHHHH\@Z
     */
    MCAPI std::unique_ptr<class NetherFortressPiece> findAndCreateBridgePieceFactory(
        std::string const&,
        std::vector<std::unique_ptr<class StructurePiece>>&,
        class Random&,
        int32_t,
        int32_t,
        int32_t,
        int32_t,
        int32_t
    );
    /**
     * @symbol
     * ?generateAndAddPiece\@NetherFortressPiece\@\@QEAAPEAVStructurePiece\@\@AEAVNBStartPiece\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@HHHHH_N\@Z
     */
    MCAPI class StructurePiece* generateAndAddPiece(
        class NBStartPiece&,
        std::vector<std::unique_ptr<class StructurePiece>>&,
        class Random&,
        int32_t,
        int32_t,
        int32_t,
        int32_t,
        int32_t,
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
        int32_t,
        int32_t,
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
        int32_t,
        int32_t,
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
        int32_t,
        int32_t,
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
        int32_t,
        int32_t,
        int32_t,
        int32_t,
        int32_t
    );
    // NOLINTEND
};
