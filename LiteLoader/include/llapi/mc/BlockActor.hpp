/**
 * @file  BlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Add include headers & pre-declares
class Block;
class Container;
class CompoundTag;
class BlockSource;

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockActor.
 *
 */
class BlockActor {

#define AFTER_EXTRA
    // Add new members to class
public:
    LIAPI bool refreshData();
    LIAPI bool refreshData(BlockSource* bs);
    LIAPI std::unique_ptr<CompoundTag> getNbt();
    LIAPI bool setNbt(CompoundTag* nbt);
    LIAPI bool setNbt(CompoundTag* nbt, BlockSource* bs);
    static unsigned int getBlockEntityType(Block* block);

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKACTOR
public:
    class BlockActor& operator=(class BlockActor const &) = delete;
    BlockActor(class BlockActor const &) = delete;
    BlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockActor();
    /**
     * @hash   -273479841
     * @vftbl  1
     * @symbol ?load@BlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1517013150
     * @vftbl  2
     * @symbol ?save@BlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   1669960957
     * @vftbl  3
     * @symbol ?saveItemInstanceData@BlockActor@@UEAA_NAEAVCompoundTag@@@Z
     */
    virtual bool saveItemInstanceData(class CompoundTag &);
    /**
     * @hash   2109733631
     * @vftbl  4
     * @symbol ?saveBlockData@BlockActor@@UEBAXAEAVCompoundTag@@AEAVBlockSource@@@Z
     */
    virtual void saveBlockData(class CompoundTag &, class BlockSource &) const;
    /**
     * @hash   -497058724
     * @vftbl  5
     * @symbol ?loadBlockData@BlockActor@@UEAAXAEBVCompoundTag@@AEAVBlockSource@@AEAVDataLoadHelper@@@Z
     */
    virtual void loadBlockData(class CompoundTag const &, class BlockSource &, class DataLoadHelper &);
    /**
     * @hash   351187571
     * @vftbl  6
     * @symbol ?onCustomTagLoadDone@BlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onCustomTagLoadDone(class BlockSource &);
    /**
     * @hash   -491300952
     * @vftbl  7
     * @symbol ?tick@BlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @hash   -1100593392
     * @vftbl  8
     * @symbol ?onChanged@BlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @hash   556686863
     * @vftbl  9
     * @symbol ?isMovable@BlockActor@@UEAA_NAEAVBlockSource@@@Z
     */
    virtual bool isMovable(class BlockSource &);
    /**
     * @hash   1870869666
     * @vftbl  10
     * @symbol ?isCustomNameSaved@BlockActor@@UEAA_NXZ
     */
    virtual bool isCustomNameSaved();
    /**
     * @hash   -1229536771
     * @vftbl  11
     * @symbol ?onPlace@BlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onPlace(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @hash   398260068
     * @vftbl  13
     * @symbol ?onRemoved@BlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onRemoved(class BlockSource &);
    /**
     * @hash   1602213505
     * @vftbl  14
     * @symbol ?triggerEvent@BlockActor@@UEAAXHH@Z
     */
    virtual void triggerEvent(int, int);
    /**
     * @hash   1706611380
     * @vftbl  15
     * @symbol ?clearCache@BlockActor@@UEAAXXZ
     */
    virtual void clearCache();
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @hash   -932676172
     * @vftbl  17
     * @symbol ?getShadowRadius@BlockActor@@UEBAMAEAVBlockSource@@@Z
     */
    virtual float getShadowRadius(class BlockSource &) const;
    /**
     * @hash   -1372923043
     * @vftbl  18
     * @symbol ?hasAlphaLayer@BlockActor@@UEBA_NXZ
     */
    virtual bool hasAlphaLayer() const;
    /**
     * @hash   -800539654
     * @vftbl  19
     * @symbol ?getCrackEntity@BlockActor@@UEAAPEAV1@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual class BlockActor * getCrackEntity(class BlockSource &, class BlockPos const &);
    /**
     * @hash   161113001
     * @vftbl  20
     * @symbol ?getDebugText@BlockActor@@UEAAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVBlockPos@@@Z
     */
    virtual void getDebugText(std::vector<std::string> &, class BlockPos const &);
    /**
     * @hash   -1905239854
     * @vftbl  21
     * @symbol ?getCustomName@BlockActor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getCustomName() const;
    /**
     * @hash   648115948
     * @vftbl  22
     * @symbol ?getFilteredCustomName@BlockActor@@UEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVUIProfanityContext@@@Z
     */
    virtual std::string const & getFilteredCustomName(class UIProfanityContext const &);
    /**
     * @hash   1496102835
     * @vftbl  23
     * @symbol ?getName@BlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   2126262655
     * @vftbl  24
     * @symbol ?setCustomName@BlockActor@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void setCustomName(std::string const &);
    /**
     * @hash   -1551851028
     * @vftbl  25
     * @symbol ?getImmersiveReaderText@BlockActor@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVBlockSource@@@Z
     */
    virtual std::string getImmersiveReaderText(class BlockSource &);
    /**
     * @hash   1164625763
     * @vftbl  26
     * @symbol ?getRepairCost@BlockActor@@UEBAHXZ
     */
    virtual int getRepairCost() const;
    /**
     * @hash   1179523765
     * @vftbl  27
     * @symbol ?getOwningPiston@BlockActor@@UEAAPEAVPistonBlockActor@@AEAVBlockSource@@@Z
     */
    virtual class PistonBlockActor * getOwningPiston(class BlockSource &);
    /**
     * @vftbl  28
     * @symbol __unk_vfn_28
     */
    virtual void __unk_vfn_28();
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
     * @hash   -170358951
     * @vftbl  31
     * @symbol ?getDeletionDelayTimeSeconds@BlockActor@@UEBAMXZ
     */
    virtual float getDeletionDelayTimeSeconds() const;
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
     * @hash   -1361617647
     * @vftbl  35
     * @symbol ?_getUpdatePacket@BlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   1686055297
     * @vftbl  36
     * @symbol ?_onUpdatePacket@BlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   1198780620
     * @vftbl  37
     * @symbol ?_playerCanUpdate@BlockActor@@MEBA_NAEBVPlayer@@@Z
     */
    virtual bool _playerCanUpdate(class Player const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKACTOR
    /**
     * @hash   -317888289
     * @symbol ?eraseLootTable@BlockActor@@UEAAXXZ
     */
    MCVAPI void eraseLootTable();
    /**
     * @hash   1825300055
     * @symbol ?fixupOnLoad@BlockActor@@UEAAXAEAVLevelChunk@@@Z
     */
    MCVAPI void fixupOnLoad(class LevelChunk &);
    /**
     * @hash   1668504791
     * @symbol ?getContainer@BlockActor@@UEAAPEAVContainer@@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @hash   1240782931
     * @symbol ?getContainer@BlockActor@@UEBAPEBVContainer@@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @hash   -1985485735
     * @symbol ?onChunkLoaded@BlockActor@@UEAAXAEAVLevelChunk@@@Z
     */
    MCVAPI void onChunkLoaded(class LevelChunk &);
    /**
     * @hash   225596096
     * @symbol ?onChunkUnloaded@BlockActor@@UEAAXAEAVLevelChunk@@@Z
     */
    MCVAPI void onChunkUnloaded(class LevelChunk &);
    /**
     * @hash   -199963857
     * @symbol ?onMove@BlockActor@@UEAAXXZ
     */
    MCVAPI void onMove();
    /**
     * @hash   -1877440904
     * @symbol ?onNeighborChanged@BlockActor@@UEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCVAPI void onNeighborChanged(class BlockSource &, class BlockPos const &);
#endif
    /**
     * @hash   -200902349
     * @symbol ??0BlockActor@@QEAA@W4BlockActorType@@AEBVBlockPos@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI BlockActor(enum BlockActorType, class BlockPos const &, std::string const &);
    /**
     * @hash   599866020
     * @symbol ?assignBlockIfNotAssigned@BlockActor@@QEAAXAEAVBlockSource@@@Z
     */
    MCAPI void assignBlockIfNotAssigned(class BlockSource &);
    /**
     * @hash   1996116648
     * @symbol ?getAABB@BlockActor@@QEBAAEBVAABB@@XZ
     */
    MCAPI class AABB const & getAABB() const;
    /**
     * @hash   -395422347
     * @symbol ?getBlock@BlockActor@@QEBAPEBVBlock@@XZ
     */
    MCAPI class Block const * getBlock() const;
    /**
     * @hash   -620362116
     * @symbol ?getPosition@BlockActor@@QEBAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & getPosition() const;
    /**
     * @hash   2009118357
     * @symbol ?getServerUpdatePacket@BlockActor@@QEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    MCAPI std::unique_ptr<class BlockActorDataPacket> getServerUpdatePacket(class BlockSource &);
    /**
     * @hash   -47190254
     * @symbol ?getType@BlockActor@@QEBAAEBW4BlockActorType@@XZ
     */
    MCAPI enum BlockActorType const & getType() const;
    /**
     * @hash   -1214803500
     * @symbol ?ignoreLighting@BlockActor@@QEBA?B_NXZ
     */
    MCAPI bool const ignoreLighting() const;
    /**
     * @hash   -802557751
     * @symbol ?isType@BlockActor@@QEBA_NW4BlockActorType@@@Z
     */
    MCAPI bool isType(enum BlockActorType) const;
    /**
     * @hash   -212961900
     * @symbol ?moveTo@BlockActor@@QEAAXAEBVBlockPos@@@Z
     */
    MCAPI void moveTo(class BlockPos const &);
    /**
     * @hash   1369441942
     * @symbol ?onUpdatePacket@BlockActor@@QEAA_NAEBVCompoundTag@@AEAVBlockSource@@PEBVPlayer@@@Z
     */
    MCAPI bool onUpdatePacket(class CompoundTag const &, class BlockSource &, class Player const *);
    /**
     * @hash   -1806689570
     * @symbol ?setBB@BlockActor@@QEAAXVAABB@@@Z
     */
    MCAPI void setBB(class AABB);
    /**
     * @hash   -452418203
     * @symbol ?setChanged@BlockActor@@QEAAXXZ
     */
    MCAPI void setChanged();
    /**
     * @hash   1940553740
     * @symbol ?setCustomNameSaved@BlockActor@@QEAAX_N@Z
     */
    MCAPI void setCustomNameSaved(bool);
    /**
     * @hash   -1740575156
     * @symbol ?setIgnoreLighting@BlockActor@@QEAAX_N@Z
     */
    MCAPI void setIgnoreLighting(bool);
    /**
     * @hash   946961254
     * @symbol ?setMovable@BlockActor@@QEAAX_N@Z
     */
    MCAPI void setMovable(bool);
    /**
     * @hash   -1396681385
     * @symbol ?isType@BlockActor@@SA_NAEAV1@W4BlockActorType@@@Z
     */
    MCAPI static bool isType(class BlockActor &, enum BlockActorType);
    /**
     * @hash   781568750
     * @symbol ?loadStatic@BlockActor@@SA?AV?$shared_ptr@VBlockActor@@@std@@AEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI static class std::shared_ptr<class BlockActor> loadStatic(class Level &, class CompoundTag const &, class DataLoadHelper &);

//protected:
    /**
     * @hash   478249211
     * @symbol ?_resetAABB@BlockActor@@IEAAXXZ
     */
    MCAPI void _resetAABB();

//private:
    /**
     * @hash   -717597063
     * @symbol ?_createIdClassMap@BlockActor@@CA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockActorType@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockActorType@@@std@@@2@@std@@XZ
     */
    MCAPI static class std::map<std::string, enum BlockActorType, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, enum BlockActorType>>> _createIdClassMap();

protected:

private:
    /**
     * @hash   -1590200034
     * @symbol ?mClassIdMap@BlockActor@@0V?$map@W4BlockActorType@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@W4BlockActorType@@@3@V?$allocator@U?$pair@$$CBW4BlockActorType@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@B
     */
    MCAPI static class std::map<enum BlockActorType, std::string, struct std::less<enum BlockActorType>, class std::allocator<struct std::pair<enum BlockActorType const, std::string>>> const mClassIdMap;
    /**
     * @hash   -2054046046
     * @symbol ?mIdClassMap@BlockActor@@0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockActorType@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockActorType@@@std@@@2@@std@@B
     */
    MCAPI static class std::map<std::string, enum BlockActorType, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, enum BlockActorType>>> const mIdClassMap;

};