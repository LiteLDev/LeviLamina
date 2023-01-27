/**
 * @file  BlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~BlockActor();
    /**
     * @hash   522966207
     * @vftbl  1
     * @symbol  ?load\@BlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1981400466
     * @vftbl  2
     * @symbol  ?save\@BlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   -1828483411
     * @vftbl  3
     * @symbol  ?saveItemInstanceData\@BlockActor\@\@UEAA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool saveItemInstanceData(class CompoundTag &);
    /**
     * @hash   -2093346689
     * @vftbl  4
     * @symbol  ?saveBlockData\@BlockActor\@\@UEBAXAEAVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void saveBlockData(class CompoundTag &, class BlockSource &) const;
    /**
     * @hash   -405171748
     * @vftbl  5
     * @symbol  ?loadBlockData\@BlockActor\@\@UEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void loadBlockData(class CompoundTag const &, class BlockSource &, class DataLoadHelper &);
    /**
     * @hash   443074547
     * @vftbl  6
     * @symbol  ?onCustomTagLoadDone\@BlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onCustomTagLoadDone(class BlockSource &);
    /**
     * @hash   305237352
     * @vftbl  7
     * @symbol  ?tick\@BlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @hash   -1008706416
     * @vftbl  8
     * @symbol  ?onChanged\@BlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @hash   1353132911
     * @vftbl  9
     * @symbol  ?isMovable\@BlockActor\@\@UEAA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool isMovable(class BlockSource &);
    /**
     * @hash   -1627651582
     * @vftbl  10
     * @symbol  ?isCustomNameSaved\@BlockActor\@\@UEAA_NXZ
     */
    virtual bool isCustomNameSaved();
    /**
     * @hash   -1137649795
     * @vftbl  11
     * @symbol  ?onPlace\@BlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onPlace(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @hash   490147044
     * @vftbl  13
     * @symbol  ?onRemoved\@BlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onRemoved(class BlockSource &);
    /**
     * @hash   -1148914620
     * @vftbl  14
     * @symbol  ?isPreserved\@BlockActor\@\@UEBA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool isPreserved(class BlockSource &) const;
    /**
     * @hash   1995571380
     * @vftbl  15
     * @symbol  ?shouldPreserve\@BlockActor\@\@UEAA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool shouldPreserve(class BlockSource &);
    /**
     * @hash   1694100481
     * @vftbl  16
     * @symbol  ?triggerEvent\@BlockActor\@\@UEAAXHH\@Z
     */
    virtual void triggerEvent(int, int);
    /**
     * @hash   -1792079004
     * @vftbl  17
     * @symbol  ?clearCache\@BlockActor\@\@UEAAXXZ
     */
    virtual void clearCache();
    /**
     * @vftbl  18
     * @symbol  __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @hash   -634950684
     * @vftbl  19
     * @symbol  ?getShadowRadius\@BlockActor\@\@UEBAMAEAVBlockSource\@\@\@Z
     */
    virtual float getShadowRadius(class BlockSource &) const;
    /**
     * @hash   -1272302499
     * @vftbl  20
     * @symbol  ?hasAlphaLayer\@BlockActor\@\@UEBA_NXZ
     */
    virtual bool hasAlphaLayer() const;
    /**
     * @hash   -703916870
     * @vftbl  21
     * @symbol  ?getCrackEntity\@BlockActor\@\@UEAAPEAV1\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class BlockActor * getCrackEntity(class BlockSource &, class BlockPos const &);
    /**
     * @hash   -1376905219
     * @vftbl  22
     * @symbol  ?getCollisionShape\@BlockActor\@\@UEBA?AVAABB\@\@AEBVIConstBlockSource\@\@\@Z
     */
    virtual class AABB getCollisionShape(class IConstBlockSource const &) const;
    /**
     * @hash   957543673
     * @vftbl  23
     * @symbol  ?getDebugText\@BlockActor\@\@UEAAXAEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void getDebugText(std::vector<std::string> &, class BlockPos const &);
    /**
     * @hash   -1801451854
     * @vftbl  24
     * @symbol  ?getCustomName\@BlockActor\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getCustomName() const;
    /**
     * @hash   1444546620
     * @vftbl  25
     * @symbol  ?getFilteredCustomName\@BlockActor\@\@UEAAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVUIProfanityContext\@\@\@Z
     */
    virtual std::string const & getFilteredCustomName(class UIProfanityContext const &);
    /**
     * @hash   1596092963
     * @vftbl  26
     * @symbol  ?getName\@BlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1372166337
     * @vftbl  27
     * @symbol  ?setCustomName\@BlockActor\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void setCustomName(std::string const &);
    /**
     * @hash   -1639617236
     * @vftbl  28
     * @symbol  ?getImmersiveReaderText\@BlockActor\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::string getImmersiveReaderText(class BlockSource &);
    /**
     * @hash   1448558979
     * @vftbl  29
     * @symbol  ?getRepairCost\@BlockActor\@\@UEBAHXZ
     */
    virtual int getRepairCost() const;
    /**
     * @hash   1276146549
     * @vftbl  30
     * @symbol  ?getOwningPiston\@BlockActor\@\@UEAAPEAVPistonBlockActor\@\@AEAVBlockSource\@\@\@Z
     */
    virtual class PistonBlockActor * getOwningPiston(class BlockSource &);
    /**
     * @vftbl  31
     * @symbol  __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl  32
     * @symbol  __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol  __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol  __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @symbol  __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl  36
     * @symbol  __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @hash   -1153595743
     * @vftbl  37
     * @symbol  ?_getUpdatePacket\@BlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   1777942273
     * @vftbl  38
     * @symbol  ?_onUpdatePacket\@BlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   1298678492
     * @vftbl  39
     * @symbol  ?_playerCanUpdate\@BlockActor\@\@MEBA_NAEBVPlayer\@\@\@Z
     */
    virtual bool _playerCanUpdate(class Player const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKACTOR
    /**
     * @hash   -226001313
     * @symbol  ?eraseLootTable\@BlockActor\@\@UEAAXXZ
     */
    MCVAPI void eraseLootTable();
    /**
     * @hash   1917187031
     * @symbol  ?fixupOnLoad\@BlockActor\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void fixupOnLoad(class LevelChunk &);
    /**
     * @hash   1765127575
     * @symbol  ?getContainer\@BlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @hash   1337405715
     * @symbol  ?getContainer\@BlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @hash   -1893598759
     * @symbol  ?onChunkLoaded\@BlockActor\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkLoaded(class LevelChunk &);
    /**
     * @hash   317483072
     * @symbol  ?onChunkUnloaded\@BlockActor\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkUnloaded(class LevelChunk &);
    /**
     * @hash   -108076881
     * @symbol  ?onMove\@BlockActor\@\@UEAAXXZ
     */
    MCVAPI void onMove();
    /**
     * @hash   -1785553928
     * @symbol  ?onNeighborChanged\@BlockActor\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI void onNeighborChanged(class BlockSource &, class BlockPos const &);
#endif
    /**
     * @hash   595313059
     * @symbol  ??0BlockActor\@\@QEAA\@W4BlockActorType\@\@AEBVBlockPos\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI BlockActor(enum class BlockActorType, class BlockPos const &, std::string const &);
    /**
     * @hash   1396127556
     * @symbol  ?assignBlockIfNotAssigned\@BlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void assignBlockIfNotAssigned(class BlockSource &);
    /**
     * @hash   1145547080
     * @symbol  ?getAABB\@BlockActor\@\@QEBAAEBVAABB\@\@XZ
     */
    MCAPI class AABB const & getAABB() const;
    /**
     * @hash   -291649723
     * @symbol  ?getBlock\@BlockActor\@\@QEBAPEBVBlock\@\@XZ
     */
    MCAPI class Block const * getBlock() const;
    /**
     * @hash   176068556
     * @symbol  ?getPosition\@BlockActor\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getPosition() const;
    /**
     * @hash   -1489418267
     * @symbol  ?getServerUpdatePacket\@BlockActor\@\@QEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI std::unique_ptr<class BlockActorDataPacket> getServerUpdatePacket(class BlockSource &);
    /**
     * @hash   -963307710
     * @symbol  ?getType\@BlockActor\@\@QEBAAEBW4BlockActorType\@\@XZ
     */
    MCAPI enum class BlockActorType const & getType() const;
    /**
     * @hash   -418357452
     * @symbol  ?ignoreLighting\@BlockActor\@\@QEBA?B_NXZ
     */
    MCAPI bool const ignoreLighting() const;
    /**
     * @hash   -6111703
     * @symbol  ?isType\@BlockActor\@\@QEBA_NW4BlockActorType\@\@\@Z
     */
    MCAPI bool isType(enum class BlockActorType) const;
    /**
     * @hash   583499524
     * @symbol  ?moveTo\@BlockActor\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void moveTo(class BlockPos const &);
    /**
     * @hash   -2129063930
     * @symbol  ?onUpdatePacket\@BlockActor\@\@QEAA_NAEBVCompoundTag\@\@AEAVBlockSource\@\@PEBVPlayer\@\@\@Z
     */
    MCAPI bool onUpdatePacket(class CompoundTag const &, class BlockSource &, class Player const *);
    /**
     * @hash   -1010151266
     * @symbol  ?setBB\@BlockActor\@\@QEAAXVAABB\@\@\@Z
     */
    MCAPI void setBB(class AABB);
    /**
     * @hash   344120101
     * @symbol  ?setChanged\@BlockActor\@\@QEAAXXZ
     */
    MCAPI void setChanged();
    /**
     * @hash   -1557875252
     * @symbol  ?setCustomNameSaved\@BlockActor\@\@QEAAX_N\@Z
     */
    MCAPI void setCustomNameSaved(bool);
    /**
     * @hash   -944036852
     * @symbol  ?setIgnoreLighting\@BlockActor\@\@QEAAX_N\@Z
     */
    MCAPI void setIgnoreLighting(bool);
    /**
     * @hash   1743499558
     * @symbol  ?setMovable\@BlockActor\@\@QEAAX_N\@Z
     */
    MCAPI void setMovable(bool);
    /**
     * @hash   -600235337
     * @symbol  ?isType\@BlockActor\@\@SA_NAEAV1\@W4BlockActorType\@\@\@Z
     */
    MCAPI static bool isType(class BlockActor &, enum class BlockActorType);
    /**
     * @hash   1578014798
     * @symbol  ?loadStatic\@BlockActor\@\@SA?AV?$shared_ptr\@VBlockActor\@\@\@std\@\@AEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI static class std::shared_ptr<class BlockActor> loadStatic(class Level &, class CompoundTag const &, class DataLoadHelper &);

//protected:
    /**
     * @hash   1274510747
     * @symbol  ?_resetAABB\@BlockActor\@\@IEAAXXZ
     */
    MCAPI void _resetAABB();

//private:
    /**
     * @hash   78664473
     * @symbol  ?_createIdClassMap\@BlockActor\@\@CA?AV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockActorType\@\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockActorType\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI static class std::map<std::string, enum class BlockActorType, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, enum class BlockActorType>>> _createIdClassMap();

protected:

private:
    /**
     * @hash   -689658466
     * @symbol  ?mClassIdMap\@BlockActor\@\@0V?$map\@W4BlockActorType\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$less\@W4BlockActorType\@\@\@3\@V?$allocator\@U?$pair\@$$CBW4BlockActorType\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@B
     */
    MCAPI static class std::map<enum class BlockActorType, std::string, struct std::less<enum class BlockActorType>, class std::allocator<struct std::pair<enum class BlockActorType const, std::string>>> const mClassIdMap;
    /**
     * @hash   -1153504478
     * @symbol  ?mIdClassMap\@BlockActor\@\@0V?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockActorType\@\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockActorType\@\@\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI static class std::map<std::string, enum class BlockActorType, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, enum class BlockActorType>>> const mIdClassMap;

};