/**
 * @file  ChorusPlantBlock.hpp
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
 * @brief MC class ChorusPlantBlock.
 *
 */
class ChorusPlantBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHORUSPLANTBLOCK
public:
    class ChorusPlantBlock& operator=(class ChorusPlantBlock const &) = delete;
    ChorusPlantBlock(class ChorusPlantBlock const &) = delete;
    ChorusPlantBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ChorusPlantBlock();
    /**
     * @hash   -1670602824
     * @vftbl  10
     * @symbol ?getAABB@ChorusPlantBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @hash   -1858091321
     * @vftbl  22
     * @symbol ?canProvideSupport@ChorusPlantBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
     */
    virtual bool canProvideSupport(class Block const &, unsigned char, enum class BlockSupportType) const;
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
     * @hash   -671638254
     * @vftbl  35
     * @symbol ?isWaterBlocking@ChorusPlantBlock@@UEBA_NXZ
     */
    virtual bool isWaterBlocking() const;
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
     * @hash   -1017966992
     * @vftbl  62
     * @symbol ?canContainLiquid@ChorusPlantBlock@@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @hash   1204381500
     * @vftbl  68
     * @symbol ?checkIsPathable@ChorusPlantBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
     */
    virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  74
     * @symbol __unk_vfn_74
     */
    virtual void __unk_vfn_74();
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   1489006232
     * @vftbl  91
     * @symbol ?mayPlace@ChorusPlantBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1904643046
     * @vftbl  99
     * @symbol ?neighborChanged@ChorusPlantBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   202919662
     * @vftbl  101
     * @symbol ?getResourceCount@ChorusPlantBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /**
     * @hash   1302730854
     * @vftbl  102
     * @symbol ?getResourceItem@ChorusPlantBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
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
     * @vftbl  132
     * @symbol __unk_vfn_132
     */
    virtual void __unk_vfn_132();
    /**
     * @vftbl  148
     * @symbol __unk_vfn_148
     */
    virtual void __unk_vfn_148();
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
     * @hash   1669930510
     * @vftbl  174
     * @symbol ?tick@ChorusPlantBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   1608800008
     * @vftbl  180
     * @symbol ?canSurvive@ChorusPlantBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHORUSPLANTBLOCK
    /**
     * @hash   1546131782
     * @symbol ?canBeSilkTouched@ChorusPlantBlock@@UEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @hash   -442277353
     * @symbol ?waterSpreadCausesSpawn@ChorusPlantBlock@@UEBA_NXZ
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @hash   679434566
     * @symbol ??0ChorusPlantBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI ChorusPlantBlock(std::string const &, int);
    /**
     * @hash   1486174821
     * @symbol ?PLANT_HEIGHT@ChorusPlantBlock@@2MB
     */
    MCAPI static float const PLANT_HEIGHT;
    /**
     * @hash   1520510345
     * @symbol ?PLANT_ITEM_DIMENSION@ChorusPlantBlock@@2MB
     */
    MCAPI static float const PLANT_ITEM_DIMENSION;
    /**
     * @hash   -1713778913
     * @symbol ?PLANT_WIDTH@ChorusPlantBlock@@2MB
     */
    MCAPI static float const PLANT_WIDTH;
    /**
     * @hash   -1797007021
     * @symbol ?canGrowChorus@ChorusPlantBlock@@SA_NAEBVBlock@@@Z
     */
    MCAPI static bool canGrowChorus(class Block const &);

};