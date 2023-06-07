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
    LIAPI static std::shared_ptr<BlockActor> create(CompoundTag* nbt);
    LIAPI static std::shared_ptr<BlockActor> create(CompoundTag* nbt, class BlockPos const& pos);
    LIAPI static unsigned int getBlockEntityType(Block* block);

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKACTOR
public:
    class BlockActor& operator=(class BlockActor const &) = delete;
    BlockActor(class BlockActor const &) = delete;
    BlockActor() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?load\@BlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 2
     * @symbol ?save\@BlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl 3
     * @symbol ?saveItemInstanceData\@BlockActor\@\@UEAA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool saveItemInstanceData(class CompoundTag &);
    /**
     * @vftbl 4
     * @symbol ?saveBlockData\@BlockActor\@\@UEBAXAEAVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void saveBlockData(class CompoundTag &, class BlockSource &) const;
    /**
     * @vftbl 5
     * @symbol ?loadBlockData\@BlockActor\@\@UEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void loadBlockData(class CompoundTag const &, class BlockSource &, class DataLoadHelper &);
    /**
     * @vftbl 6
     * @symbol ?onCustomTagLoadDone\@BlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onCustomTagLoadDone(class BlockSource &);
    /**
     * @vftbl 7
     * @symbol ?tick\@BlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl 8
     * @symbol ?onChanged\@BlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @vftbl 9
     * @symbol ?isMovable\@BlockActor\@\@UEAA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool isMovable(class BlockSource &);
    /**
     * @vftbl 10
     * @symbol ?isCustomNameSaved\@BlockActor\@\@UEAA_NXZ
     */
    virtual bool isCustomNameSaved();
    /**
     * @vftbl 11
     * @symbol ?onPlace\@BlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onPlace(class BlockSource &);
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 13
     * @symbol ?onRemoved\@BlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onRemoved(class BlockSource &);
    /**
     * @vftbl 14
     * @symbol ?isPreserved\@BlockActor\@\@UEBA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool isPreserved(class BlockSource &) const;
    /**
     * @vftbl 15
     * @symbol ?shouldPreserve\@BlockActor\@\@UEAA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool shouldPreserve(class BlockSource &);
    /**
     * @vftbl 16
     * @symbol ?triggerEvent\@BlockActor\@\@UEAAXHH\@Z
     */
    virtual void triggerEvent(int, int);
    /**
     * @vftbl 17
     * @symbol ?clearCache\@BlockActor\@\@UEAAXXZ
     */
    virtual void clearCache();
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl 19
     * @symbol ?getShadowRadius\@BlockActor\@\@UEBAMAEAVBlockSource\@\@\@Z
     */
    virtual float getShadowRadius(class BlockSource &) const;
    /**
     * @vftbl 20
     * @symbol ?hasAlphaLayer\@BlockActor\@\@UEBA_NXZ
     */
    virtual bool hasAlphaLayer() const;
    /**
     * @vftbl 21
     * @symbol ?getCrackEntity\@BlockActor\@\@UEAAPEAV1\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class BlockActor * getCrackEntity(class BlockSource &, class BlockPos const &);
    /**
     * @vftbl 22
     * @symbol ?getCollisionShape\@BlockActor\@\@UEBA?AVAABB\@\@AEBVIConstBlockSource\@\@\@Z
     */
    virtual class AABB getCollisionShape(class IConstBlockSource const &) const;
    /**
     * @vftbl 23
     * @symbol ?getDebugText\@BlockActor\@\@UEAAXAEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void getDebugText(std::vector<std::string> &, class BlockPos const &);
    /**
     * @vftbl 24
     * @symbol ?getCustomName\@BlockActor\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getCustomName() const;
    /**
     * @vftbl 25
     * @symbol ?getFilteredCustomName\@BlockActor\@\@UEAAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVUIProfanityContext\@\@\@Z
     */
    virtual std::string const & getFilteredCustomName(class UIProfanityContext const &);
    /**
     * @vftbl 26
     * @symbol ?getName\@BlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 27
     * @symbol ?setCustomName\@BlockActor\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void setCustomName(std::string const &);
    /**
     * @vftbl 28
     * @symbol ?getImmersiveReaderText\@BlockActor\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::string getImmersiveReaderText(class BlockSource &);
    /**
     * @vftbl 29
     * @symbol ?getRepairCost\@BlockActor\@\@UEBAHXZ
     */
    virtual int getRepairCost() const;
    /**
     * @vftbl 30
     * @symbol ?getOwningPiston\@BlockActor\@\@UEAAPEAVPistonBlockActor\@\@AEAVBlockSource\@\@\@Z
     */
    virtual class PistonBlockActor * getOwningPiston(class BlockSource &);
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 36
     * @symbol ?getUgcStrings\@BlockActor\@\@UEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    virtual std::vector<std::string> getUgcStrings(class CompoundTag const &) const;
    /**
     * @vftbl 37
     * @symbol ?setUgcStrings\@BlockActor\@\@UEBAXAEAVCompoundTag\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual void setUgcStrings(class CompoundTag &, std::vector<std::string> const &) const;
    /**
     * @vftbl 38
     * @symbol __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl 39
     * @symbol ?_getUpdatePacket\@BlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vftbl 40
     * @symbol ?_onUpdatePacket\@BlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @vftbl 41
     * @symbol ?_playerCanUpdate\@BlockActor\@\@MEBA_NAEBVPlayer\@\@\@Z
     */
    virtual bool _playerCanUpdate(class Player const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKACTOR
    /**
     * @symbol ?eraseLootTable\@BlockActor\@\@UEAAXXZ
     */
    MCVAPI void eraseLootTable();
    /**
     * @symbol ?fixupOnLoad\@BlockActor\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void fixupOnLoad(class LevelChunk &);
    /**
     * @symbol ?getContainer\@BlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @symbol ?getContainer\@BlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @symbol ?onChunkLoaded\@BlockActor\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkLoaded(class LevelChunk &);
    /**
     * @symbol ?onChunkUnloaded\@BlockActor\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkUnloaded(class LevelChunk &);
    /**
     * @symbol ?onMove\@BlockActor\@\@UEAAXXZ
     */
    MCVAPI void onMove();
    /**
     * @symbol ?onNeighborChanged\@BlockActor\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI void onNeighborChanged(class BlockSource &, class BlockPos const &);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockActor();
#endif
    /**
     * @symbol ??0BlockActor\@\@QEAA\@W4BlockActorType\@\@AEBVBlockPos\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI BlockActor(enum class BlockActorType, class BlockPos const &, std::string const &);
    /**
     * @symbol ?assignBlockIfNotAssigned\@BlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void assignBlockIfNotAssigned(class BlockSource &);
    /**
     * @symbol ?getAABB\@BlockActor\@\@QEBAAEBVAABB\@\@XZ
     */
    MCAPI class AABB const & getAABB() const;
    /**
     * @symbol ?getBlock\@BlockActor\@\@QEBAPEBVBlock\@\@XZ
     */
    MCAPI class Block const * getBlock() const;
    /**
     * @symbol ?getPosition\@BlockActor\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getPosition() const;
    /**
     * @symbol ?getServerUpdatePacket\@BlockActor\@\@QEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI std::unique_ptr<class BlockActorDataPacket> getServerUpdatePacket(class BlockSource &);
    /**
     * @symbol ?getType\@BlockActor\@\@QEBAAEBW4BlockActorType\@\@XZ
     */
    MCAPI enum class BlockActorType const & getType() const;
    /**
     * @symbol ?isChanged\@BlockActor\@\@QEBA_NXZ
     */
    MCAPI bool isChanged() const;
    /**
     * @symbol ?isType\@BlockActor\@\@QEBA_NW4BlockActorType\@\@\@Z
     */
    MCAPI bool isType(enum class BlockActorType) const;
    /**
     * @symbol ?moveTo\@BlockActor\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void moveTo(class BlockPos const &);
    /**
     * @symbol ?onUpdatePacket\@BlockActor\@\@QEAA_NAEBVCompoundTag\@\@AEAVBlockSource\@\@PEBVPlayer\@\@\@Z
     */
    MCAPI bool onUpdatePacket(class CompoundTag const &, class BlockSource &, class Player const *);
    /**
     * @symbol ?setChanged\@BlockActor\@\@QEAAXXZ
     */
    MCAPI void setChanged();
    /**
     * @symbol ?setCustomNameSaved\@BlockActor\@\@QEAAX_N\@Z
     */
    MCAPI void setCustomNameSaved(bool);
    /**
     * @symbol ?setMovable\@BlockActor\@\@QEAAX_N\@Z
     */
    MCAPI void setMovable(bool);
    /**
     * @symbol ?isType\@BlockActor\@\@SA_NAEAV1\@W4BlockActorType\@\@\@Z
     */
    MCAPI static bool isType(class BlockActor &, enum class BlockActorType);
    /**
     * @symbol ?loadStatic\@BlockActor\@\@SA?AV?$shared_ptr\@VBlockActor\@\@\@std\@\@AEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI static class std::shared_ptr<class BlockActor> loadStatic(class Level &, class CompoundTag const &, class DataLoadHelper &);

//protected:
    /**
     * @symbol ?_resetAABB\@BlockActor\@\@IEAAXXZ
     */
    MCAPI void _resetAABB();

//private:
    /**
     * @symbol ?_createIdClassMap\@BlockActor\@\@CA?AV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockActorType\@\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockActorType\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI static class std::map<std::string, enum class BlockActorType, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, enum class BlockActorType>>> _createIdClassMap();

protected:

private:
    /**
     * @symbol ?mClassIdMap\@BlockActor\@\@0V?$map\@W4BlockActorType\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$less\@W4BlockActorType\@\@\@3\@V?$allocator\@U?$pair\@$$CBW4BlockActorType\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@B
     */
    MCAPI static class std::map<enum class BlockActorType, std::string, struct std::less<enum class BlockActorType>, class std::allocator<struct std::pair<enum class BlockActorType const, std::string>>> const mClassIdMap;
    /**
     * @symbol ?mIdClassMap\@BlockActor\@\@0V?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockActorType\@\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockActorType\@\@\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI static class std::map<std::string, enum class BlockActorType, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, enum class BlockActorType>>> const mIdClassMap;

};
