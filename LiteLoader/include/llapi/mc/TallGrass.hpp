/**
 * @file  TallGrass.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BushBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TallGrass.
 *
 */
class TallGrass : public BushBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TALLGRASS
public:
    class TallGrass& operator=(class TallGrass const &) = delete;
    TallGrass(class TallGrass const &) = delete;
    TallGrass() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TallGrass();
    /**
     * @hash   -1119867410
     * @vftbl  8
     * @symbol ?randomlyModifyPosition@TallGrass@@UEBA?AVVec3@@AEBVBlockPos@@@Z
     */
    virtual class Vec3 randomlyModifyPosition(class BlockPos const &) const;
    /**
     * @hash   1901790457
     * @vftbl  10
     * @symbol ?getAABB@TallGrass@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
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
     * @hash   1061351759
     * @vftbl  62
     * @symbol ?canContainLiquid@TallGrass@@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
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
     * @hash   1915409181
     * @vftbl  85
     * @symbol ?onFertilized@TallGrass@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
     */
    virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum FertilizerType) const;
    /**
     * @hash   1628212810
     * @vftbl  86
     * @symbol ?mayConsumeFertilizer@TallGrass@@UEBA_NAEAVBlockSource@@@Z
     */
    virtual bool mayConsumeFertilizer(class BlockSource &) const;
    /**
     * @hash   973599998
     * @vftbl  87
     * @symbol ?canBeFertilized@TallGrass@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   47041399
     * @vftbl  91
     * @symbol ?mayPlace@TallGrass@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1027612743
     * @vftbl  102
     * @symbol ?getResourceItem@TallGrass@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
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
     * @hash   -1485387792
     * @vftbl  134
     * @symbol ?buildDescriptionId@TallGrass@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
     */
    virtual std::string buildDescriptionId(class Block const &) const;
    /**
     * @hash   1649771195
     * @vftbl  136
     * @symbol ?getColor@TallGrass@@UEBAHAEBVBlock@@@Z
     */
    virtual int getColor(class Block const &) const;
    /**
     * @hash   2117444229
     * @vftbl  137
     * @symbol ?getColor@TallGrass@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual int getColor(class BlockSource &, class BlockPos const &, class Block const &) const;
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
     * @hash   1469834157
     * @vftbl  173
     * @symbol ?playerDestroy@TallGrass@@UEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   456348983
     * @vftbl  180
     * @symbol ?canSurvive@TallGrass@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1531243826
     * @vftbl  181
     * @symbol ?getRenderLayer@TallGrass@@UEBA?AW4BlockRenderLayer@@XZ
     */
    virtual enum BlockRenderLayer getRenderLayer() const;
    /**
     * @hash   -2055446398
     * @vftbl  182
     * @symbol ?getRenderLayer@TallGrass@@UEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual enum BlockRenderLayer getRenderLayer(class Block const &, class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   999615245
     * @vftbl  187
     * @symbol ?getMapColor@TallGrass@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TALLGRASS
    /**
     * @hash   -739381090
     * @symbol ?canBeSilkTouched@TallGrass@@MEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
#endif
    /**
     * @hash   672193847
     * @symbol ??0TallGrass@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI TallGrass(std::string const &, int);

};