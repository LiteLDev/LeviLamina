/**
 * @file  RespawnAnchorBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
 * @brief MC class RespawnAnchorBlock.
 *
 */
class RespawnAnchorBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESPAWNANCHORBLOCK
public:
    class RespawnAnchorBlock& operator=(class RespawnAnchorBlock const &) = delete;
    RespawnAnchorBlock(class RespawnAnchorBlock const &) = delete;
    RespawnAnchorBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1528419418
     */
    virtual ~RespawnAnchorBlock();
    /**
     * @vftbl  19
     * @hash   -327659668
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @hash   -299030517
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -278713055
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -276866013
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -275942492
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -275018971
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @hash   -273171929
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @hash   -272248408
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @hash   -271324887
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @hash   -270401366
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @hash   -250083904
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @hash   -249160383
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @hash   -248236862
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @hash   -246389820
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @hash   -245466299
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @hash   -244542778
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @hash   -243619257
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @hash   -242695736
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @hash   -241772215
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  59
     * @hash   -213143064
     */
    virtual void __unk_vfn_59();
    /**
     * @vftbl  60
     * @hash   -192825602
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  73
     * @hash   -161425888
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  80
     * @hash   -135567300
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  101
     * @symbol ?getResourceItem@RespawnAnchorBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     * @hash   -668692274
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  105
     * @hash   1332020102
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  124
     * @hash   1388354883
     */
    virtual void __unk_vfn_124();
    /**
     * @vftbl  126
     * @hash   1383467237
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  127
     * @hash   1391125446
     */
    virtual void __unk_vfn_127();
    /**
     * @vftbl  128
     * @symbol ?getComparatorSignal@RespawnAnchorBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
     * @hash   -1906009130
     */
    virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /**
     * @vftbl  130
     * @symbol ?canSpawnAt@RespawnAnchorBlock@@UEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1764114351
     */
    virtual bool canSpawnAt(class BlockSource const &, class BlockPos const &) const;
    /**
     * @vftbl  131
     * @symbol ?notifySpawnedAt@RespawnAnchorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1985603616
     */
    virtual void notifySpawnedAt(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  132
     * @hash   1415136992
     */
    virtual void __unk_vfn_132();
    /**
     * @vftbl  147
     * @symbol ?getVariant@RespawnAnchorBlock@@UEBAHAEBVBlock@@@Z
     * @hash   -194596336
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  148
     * @hash   1442572581
     */
    virtual void __unk_vfn_148();
    /**
     * @vftbl  152
     * @symbol ?animateTick@RespawnAnchorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1216258763
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  154
     * @symbol ?getLightEmission@RespawnAnchorBlock@@UEBA?AUBrightness@@AEBVBlock@@@Z
     * @hash   -540458504
     */
    virtual struct Brightness getLightEmission(class Block const &) const;
    /**
     * @vftbl  157
     * @hash   1470278211
     */
    virtual void __unk_vfn_157();
    /**
     * @vftbl  158
     * @symbol ?getSilkTouchItemInstance@RespawnAnchorBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
     * @hash   1484154103
     */
    virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /**
     * @vftbl  168
     * @hash   1457546883
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @hash   1458470404
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl  170
     * @hash   1478787866
     */
    virtual void __unk_vfn_170();
    /**
     * @vftbl  171
     * @symbol ?onPlace@RespawnAnchorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   85560756
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  173
     * @symbol ?playerDestroy@RespawnAnchorBlock@@UEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -1525297596
     */
    virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  177
     * @hash   1527536513
     */
    virtual void __unk_vfn_177();
    /**
     * @vftbl  179
     * @symbol ?use@RespawnAnchorBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     * @hash   -1211079499
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  188
     * @hash   1563823873
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESPAWNANCHORBLOCK
    /**
     * @symbol ?hasComparatorSignal@RespawnAnchorBlock@@UEBA_NXZ
     * @hash   -348667648
     */
    MCVAPI bool hasComparatorSignal() const;
    /**
     * @symbol ?isInteractiveBlock@RespawnAnchorBlock@@UEBA_NXZ
     * @hash   -723232419
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @symbol ??0RespawnAnchorBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -585989186
     */
    MCAPI RespawnAnchorBlock(std::string const &, int);
    /**
     * @symbol ?addItem@RespawnAnchorBlock@@SA_NAEAVContainer@@HAEAVItemStack@@AEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@@Z
     * @hash   1052823104
     */
    MCAPI static bool addItem(class Container &, int, class ItemStack &, class BlockSource &, class Block const &, class BlockPos const &);
    /**
     * @symbol ?getChargeLevel@RespawnAnchorBlock@@SAHAEBVBlock@@@Z
     * @hash   -1499021337
     */
    MCAPI static int getChargeLevel(class Block const &);

//private:
    /**
     * @symbol ?bumpCharge@RespawnAnchorBlock@@CA_NAEAVBlockSource@@AEBVBlockPos@@F@Z
     * @hash   -2046779804
     */
    MCAPI static bool bumpCharge(class BlockSource &, class BlockPos const &, short);
    /**
     * @symbol ?explode@RespawnAnchorBlock@@CAXAEAVPlayer@@AEBVBlockPos@@AEAVBlockSource@@AEAVLevel@@@Z
     * @hash   601741980
     */
    MCAPI static void explode(class Player &, class BlockPos const &, class BlockSource &, class Level &);
    /**
     * @symbol ?trySetSpawn@RespawnAnchorBlock@@CA_NAEAVPlayer@@AEBVBlockPos@@AEAVBlockSource@@AEAVLevel@@@Z
     * @hash   -2123052519
     */
    MCAPI static bool trySetSpawn(class Player &, class BlockPos const &, class BlockSource &, class Level &);

private:

};