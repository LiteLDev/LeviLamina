/**
 * @file  PowderSnowBlock.hpp
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
 * @brief MC class PowderSnowBlock.
 *
 */
class PowderSnowBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POWDERSNOWBLOCK
public:
    class PowderSnowBlock& operator=(class PowderSnowBlock const &) = delete;
    PowderSnowBlock(class PowderSnowBlock const &) = delete;
    PowderSnowBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~PowderSnowBlock();
    /**
     * @hash   -1146125465
     * @vftbl  5
     * @symbol ?getCollisionShape@PowderSnowBlock@@UEBA_NAEAVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     */
    virtual bool getCollisionShape(class AABB &, class Block const &, class IConstBlockSource const &, class BlockPos const &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @hash   1663644145
     * @vftbl  10
     * @symbol ?getAABB@PowderSnowBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @hash   -1709690544
     * @vftbl  22
     * @symbol ?canProvideSupport@PowderSnowBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
     */
    virtual bool canProvideSupport(class Block const &, unsigned char, enum BlockSupportType) const;
    /**
     * @hash   1429675928
     * @vftbl  25
     * @symbol ?canConnect@PowderSnowBlock@@UEBA_NAEBVBlock@@E0@Z
     */
    virtual bool canConnect(class Block const &, unsigned char, class Block const &) const;
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
     * @hash   977766843
     * @vftbl  31
     * @symbol ?isClimbable@PowderSnowBlock@@UEBA_NAEBUIActorMovementProxy@@@Z
     */
    virtual bool isClimbable(struct IActorMovementProxy const &) const;
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
     * @hash   389348841
     * @vftbl  35
     * @symbol ?isWaterBlocking@PowderSnowBlock@@UEBA_NXZ
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
     * @hash   562125950
     * @vftbl  53
     * @symbol ?canBeAscendedByJumping@PowderSnowBlock@@UEBA_NAEBVActor@@AEBVBlockPos@@@Z
     */
    virtual bool canBeAscendedByJumping(class Actor const &, class BlockPos const &) const;
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
     * @hash   -622145977
     * @vftbl  62
     * @symbol ?canContainLiquid@PowderSnowBlock@@UEBA_NXZ
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
     * @hash   1558475306
     * @vftbl  95
     * @symbol ?breaksFallingBlocks@PowderSnowBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
     */
    virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /**
     * @hash   1060505911
     * @vftbl  101
     * @symbol ?getResourceCount@PowderSnowBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /**
     * @hash   546001887
     * @vftbl  102
     * @symbol ?getResourceItem@PowderSnowBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @hash   727450052
     * @vftbl  103
     * @symbol ?asItemInstance@PowderSnowBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @hash   511192827
     * @vftbl  114
     * @symbol ?entityInside@PowderSnowBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
     */
    virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
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
     * @hash   264123919
     * @vftbl  172
     * @symbol ?onFallOn@PowderSnowBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@M@Z
     */
    virtual void onFallOn(class BlockSource &, class BlockPos const &, class Actor &, float) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_POWDERSNOWBLOCK
    /**
     * @hash   1011297300
     * @symbol ?canBeDestroyedByWaterSpread@PowderSnowBlock@@UEBA_NXZ
     */
    MCVAPI bool canBeDestroyedByWaterSpread() const;
    /**
     * @hash   -403454307
     * @symbol ?canBeSilkTouched@PowderSnowBlock@@UEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @hash   -23654343
     * @symbol ?causesFreezeEffect@PowderSnowBlock@@UEBA_NXZ
     */
    MCVAPI bool causesFreezeEffect() const;
#endif
    /**
     * @hash   442745128
     * @symbol ??0PowderSnowBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
     */
    MCAPI PowderSnowBlock(std::string const &, int, class Material const &);
    /**
     * @hash   -454877907
     * @symbol ?canWalkOnTop@PowderSnowBlock@@SA_NAEBUIActorMovementProxy@@@Z
     */
    MCAPI static bool canWalkOnTop(struct IActorMovementProxy const &);
    /**
     * @hash   -1717569643
     * @symbol ?canWalkOnTop@PowderSnowBlock@@SA_NAEBVGetCollisionShapeInterface@@@Z
     */
    MCAPI static bool canWalkOnTop(class GetCollisionShapeInterface const &);
    /**
     * @hash   1286861036
     * @symbol ?clearFire@PowderSnowBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    MCAPI static void clearFire(class BlockSource &, class BlockPos const &, class Block const &);

};