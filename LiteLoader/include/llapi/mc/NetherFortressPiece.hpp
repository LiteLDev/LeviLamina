/**
 * @file  NetherFortressPiece.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetherFortressPiece.
 *
 */
class NetherFortressPiece : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERFORTRESSPIECE
public:
    class NetherFortressPiece& operator=(class NetherFortressPiece const &) = delete;
    NetherFortressPiece(class NetherFortressPiece const &) = delete;
    NetherFortressPiece() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~NetherFortressPiece();
    /**
     * @hash   -278297035
     * @vftbl  4
     * @symbol ?postProcess@NetherFortressPiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   1229508005
     * @vftbl  12
     * @symbol ?addHardcodedSpawnAreas@NetherFortressPiece@@UEBAXAEAVLevelChunk@@@Z
     */
    virtual void addHardcodedSpawnAreas(class LevelChunk &) const;
    /**
     * @hash   -239416633
     * @symbol ??0NetherFortressPiece@@QEAA@H@Z
     */
    MCAPI NetherFortressPiece(int);
    /**
     * @hash   1152346039
     * @symbol ?findAndCreateBridgePieceFactory@NetherFortressPiece@@QEAA?AV?$unique_ptr@VNetherFortressPiece@@U?$default_delete@VNetherFortressPiece@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@3@AEAVRandom@@HHHHH@Z
     */
    MCAPI std::unique_ptr<class NetherFortressPiece> findAndCreateBridgePieceFactory(std::string const &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, int, int, int);
    /**
     * @hash   149968953
     * @symbol ?generateAndAddPiece@NetherFortressPiece@@QEAAPEAVStructurePiece@@AEAVNBStartPiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HHHHH_N@Z
     */
    MCAPI class StructurePiece * generateAndAddPiece(class NBStartPiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, int, int, int, bool);
    /**
     * @hash   1964272274
     * @symbol ?generateChildForward@NetherFortressPiece@@QEAAPEAVStructurePiece@@AEAVNBStartPiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HH_N@Z
     */
    MCAPI class StructurePiece * generateChildForward(class NBStartPiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, bool);
    /**
     * @hash   1333488788
     * @symbol ?generateChildLeft@NetherFortressPiece@@QEAAPEAVStructurePiece@@AEAVNBStartPiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HH_N@Z
     */
    MCAPI class StructurePiece * generateChildLeft(class NBStartPiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, bool);
    /**
     * @hash   -1414452416
     * @symbol ?generateChildRight@NetherFortressPiece@@QEAAPEAVStructurePiece@@AEAVNBStartPiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@HH_N@Z
     */
    MCAPI class StructurePiece * generateChildRight(class NBStartPiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, bool);
    /**
     * @hash   -777638460
     * @symbol ?generatePiece@NetherFortressPiece@@QEAA?AV?$unique_ptr@VNetherFortressPiece@@U?$default_delete@VNetherFortressPiece@@@std@@@std@@AEAVNBStartPiece@@AEAV?$vector@VPieceWeight@@V?$allocator@VPieceWeight@@@std@@@3@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@3@AEAVRandom@@HHHHH@Z
     */
    MCAPI std::unique_ptr<class NetherFortressPiece> generatePiece(class NBStartPiece &, std::vector<class PieceWeight> &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, int, int, int);

};