/**
 * @file  CampfireBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CampfireBlock.
 *
 */
class CampfireBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMPFIREBLOCK
public:
    class CampfireBlock& operator=(class CampfireBlock const &) = delete;
    CampfireBlock(class CampfireBlock const &) = delete;
    CampfireBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CampfireBlock();
    /**
     * @hash   -39587994
     * @vftbl  10
     * @symbol ?getAABB@CampfireBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @hash   1859494757
     * @vftbl  22
     * @symbol ?canProvideSupport@CampfireBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
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
     * @hash   716800452
     * @vftbl  35
     * @symbol ?isWaterBlocking@CampfireBlock@@UEBA_NXZ
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
     * @hash   456340002
     * @vftbl  62
     * @symbol ?canContainLiquid@CampfireBlock@@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @hash   51871914
     * @vftbl  68
     * @symbol ?checkIsPathable@CampfireBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
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
     * @hash   -2037559462
     * @vftbl  91
     * @symbol ?mayPlace@CampfireBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1133960840
     * @vftbl  99
     * @symbol ?neighborChanged@CampfireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   656363052
     * @vftbl  101
     * @symbol ?getResourceCount@CampfireBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /**
     * @hash   -1597007004
     * @vftbl  102
     * @symbol ?getResourceItem@CampfireBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @hash   -245589351
     * @vftbl  103
     * @symbol ?asItemInstance@CampfireBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @hash   484239173
     * @vftbl  107
     * @symbol ?getPlacementBlock@CampfireBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @hash   976202144
     * @vftbl  114
     * @symbol ?entityInside@CampfireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
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
     * @hash   1193978272
     * @vftbl  144
     * @symbol ?getVisualShape@CampfireBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  148
     * @symbol __unk_vfn_148
     */
    virtual void __unk_vfn_148();
    /**
     * @hash   -1411799173
     * @vftbl  152
     * @symbol ?animateTick@CampfireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @hash   -1718162434
     * @vftbl  154
     * @symbol ?getLightEmission@CampfireBlock@@UEBA?AUBrightness@@AEBVBlock@@@Z
     */
    virtual struct Brightness getLightEmission(class Block const &) const;
    /**
     * @vftbl  157
     * @symbol __unk_vfn_157
     */
    virtual void __unk_vfn_157();
    /**
     * @hash   -1610512531
     * @vftbl  158
     * @symbol ?getSilkTouchItemInstance@CampfireBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
     */
    virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /**
     * @hash   876343369
     * @vftbl  165
     * @symbol ?onRemove@CampfireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onRemove(class BlockSource &, class BlockPos const &) const;
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
     * @hash   -893560722
     * @vftbl  171
     * @symbol ?onPlace@CampfireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   909936155
     * @vftbl  179
     * @symbol ?use@CampfireBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CAMPFIREBLOCK
    /**
     * @hash   -2071539343
     * @symbol ?canBeSilkTouched@CampfireBlock@@MEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @hash   188269900
     * @symbol ?canSpawnOn@CampfireBlock@@UEBA_NXZ
     */
    MCVAPI bool canSpawnOn() const;
    /**
     * @hash   -2094265148
     * @symbol ?hasVariableLighting@CampfireBlock@@UEBA_NXZ
     */
    MCVAPI bool hasVariableLighting() const;
    /**
     * @hash   1471578697
     * @symbol ?waterSpreadCausesSpawn@CampfireBlock@@UEBA_NXZ
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @hash   -485019473
     * @symbol ??0CampfireBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
     */
    MCAPI CampfireBlock(std::string const &, int, bool);
    /**
     * @hash   -237542733
     * @symbol ?isLit@CampfireBlock@@SA_NAEBVBlock@@@Z
     */
    MCAPI static bool isLit(class Block const &);
    /**
     * @hash   1032248425
     * @symbol ?tryDouseFire@CampfireBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@_N@Z
     */
    MCAPI static bool tryDouseFire(class BlockSource &, class BlockPos const &, class Actor *, bool);
    /**
     * @hash   -1330997684
     * @symbol ?tryLightFire@CampfireBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
     */
    MCAPI static bool tryLightFire(class BlockSource &, class BlockPos const &, class Actor *);

};