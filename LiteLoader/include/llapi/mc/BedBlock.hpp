/**
 * @file  MC/BedBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BedBlock.
 *
 */
class BedBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDBLOCK
public:
    class BedBlock& operator=(class BedBlock const &) = delete;
    BedBlock(class BedBlock const &) = delete;
    BedBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BedBlock();
    /**
     * @hash   82450680
     * @vftbl  3
     * @symbol ?getNextBlockPermutation@BedBlock@@UEBAPEBVBlock@@AEBV2@@Z
     */
    virtual class Block const * getNextBlockPermutation(class Block const &) const;
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol __unk_vfn_37
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @symbol __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @symbol __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @symbol __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @symbol __unk_vfn_45
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @symbol __unk_vfn_46
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @symbol __unk_vfn_47
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @symbol __unk_vfn_48
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @symbol __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @hash   1627298858
     * @vftbl  56
     * @symbol ?canFillAtPos@BedBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual bool canFillAtPos(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   -1476004065
     * @vftbl  57
     * @symbol ?sanitizeFillBlock@BedBlock@@UEBAAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEBV2@@Z
     */
    virtual class Block const & sanitizeFillBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   313631407
     * @vftbl  58
     * @symbol ?onFillBlock@BedBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual void onFillBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @hash   -753652704
     * @vftbl  68
     * @symbol ?checkIsPathable@BedBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
     */
    virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  74
     * @symbol __unk_vfn_74
     */
    virtual void __unk_vfn_74();
    /**
     * @hash   -280126740
     * @vftbl  80
     * @symbol ?updateEntityAfterFallOn@BedBlock@@UEBAXAEBVBlockPos@@AEAUUpdateEntityAfterFallOnInterface@@@Z
     */
    virtual void updateEntityAfterFallOn(class BlockPos const &, struct UpdateEntityAfterFallOnInterface &) const;
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   1380944048
     * @vftbl  97
     * @symbol ?playerWillDestroy@BedBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   -1290550274
     * @vftbl  99
     * @symbol ?neighborChanged@BedBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   1885242553
     * @vftbl  100
     * @symbol ?getSecondPart@BedBlock@@UEBA_NAEBVBlockSource@@AEBVBlockPos@@AEAV3@@Z
     */
    virtual bool getSecondPart(class BlockSource const &, class BlockPos const &, class BlockPos &) const;
    /**
     * @hash   1809690063
     * @vftbl  103
     * @symbol ?asItemInstance@BedBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   -1079689264
     * @vftbl  104
     * @symbol ?spawnResources@BedBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@PEAV?$vector@PEBVItem@@V?$allocator@PEBVItem@@@std@@@std@@MH@Z
     */
    virtual void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, class Randomize &, std::vector<class Item const *> *, float, int) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl  124
     * @symbol __unk_vfn_124
     */
    virtual void __unk_vfn_124();
    /**
     * @vftbl  126
     * @symbol __unk_vfn_126
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  127
     * @symbol __unk_vfn_127
     */
    virtual void __unk_vfn_127();
    /**
     * @hash   646946451
     * @vftbl  130
     * @symbol ?canSpawnAt@BedBlock@@UEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool canSpawnAt(class BlockSource const &, class BlockPos const &) const;
    /**
     * @vftbl  132
     * @symbol __unk_vfn_132
     */
    virtual void __unk_vfn_132();
    /**
     * @hash   -1860408511
     * @vftbl  146
     * @symbol ?telemetryVariant@BedBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual int telemetryVariant(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -363055556
     * @vftbl  147
     * @symbol ?getVariant@BedBlock@@UEBAHAEBVBlock@@@Z
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  148
     * @symbol __unk_vfn_148
     */
    virtual void __unk_vfn_148();
    /**
     * @hash   -737891726
     * @vftbl  150
     * @symbol ?getMappedFace@BedBlock@@UEBAEEAEBVBlock@@@Z
     */
    virtual unsigned char getMappedFace(unsigned char, class Block const &) const;
    /**
     * @vftbl  157
     * @symbol __unk_vfn_157
     */
    virtual void __unk_vfn_157();
    /**
     * @vftbl  168
     * @symbol __unk_vfn_168
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @symbol __unk_vfn_169
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl  170
     * @symbol __unk_vfn_170
     */
    virtual void __unk_vfn_170();
    /**
     * @hash   -2080794744
     * @vftbl  171
     * @symbol ?onPlace@BedBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1665384388
     * @vftbl  172
     * @symbol ?onFallOn@BedBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@M@Z
     */
    virtual void onFallOn(class BlockSource &, class BlockPos const &, class Actor &, float) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   1929277729
     * @vftbl  179
     * @symbol ?use@BedBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDBLOCK
    /**
     * @hash   -1778653733
     * @symbol ?canBeSilkTouched@BedBlock@@MEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @hash   295917991
     * @symbol ?isBounceBlock@BedBlock@@UEBA_NXZ
     */
    MCVAPI bool isBounceBlock() const;
    /**
     * @hash   32365153
     * @symbol ?isInteractiveBlock@BedBlock@@UEBA_NXZ
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @hash   1793120826
     * @symbol ??0BedBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI BedBlock(std::string const &, int);
    /**
     * @hash   1487607100
     * @symbol ?HEAD_PIECE_DATA@BedBlock@@2GB
     */
    MCAPI static unsigned short const HEAD_PIECE_DATA;
    /**
     * @hash   -1892964512
     * @symbol ?OCCUPIED_DATA@BedBlock@@2GB
     */
    MCAPI static unsigned short const OCCUPIED_DATA;
    /**
     * @hash   1661031892
     * @symbol ?findWakeupPosition@BedBlock@@SA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@AEBVBlockPos@@_NAEBV?$optional@VVec3@@@3@@Z
     */
    MCAPI static class std::optional<class BlockPos> findWakeupPosition(class BlockSource &, class BlockPos const &, bool, class std::optional<class Vec3> const &);
    /**
     * @hash   876019066
     * @symbol ?isDangerousSpawnBlock@BedBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static bool isDangerousSpawnBlock(class BlockSource &, class BlockPos const &);
    /**
     * @hash   -1183565220
     * @symbol ?isValidStandUpPosition@BedBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static bool isValidStandUpPosition(class BlockSource &, class BlockPos const &);
    /**
     * @hash   42817920
     * @symbol ?setOccupied@BedBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@_N@Z
     */
    MCAPI static void setOccupied(class BlockSource &, class BlockPos const &, bool);

};