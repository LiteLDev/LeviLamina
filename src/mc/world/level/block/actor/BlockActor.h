#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockActor {

public:
    // prevent constructor by default
    BlockActor& operator=(BlockActor const&) = delete;
    BlockActor(BlockActor const&)            = delete;
    BlockActor()                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?load\@BlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?save\@BlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?saveItemInstanceData\@BlockActor\@\@UEAA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool saveItemInstanceData(class CompoundTag&); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?saveBlockData\@BlockActor\@\@UEBAXAEAVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void saveBlockData(class CompoundTag&, class BlockSource&) const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?loadBlockData\@BlockActor\@\@UEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void loadBlockData(class CompoundTag const&, class BlockSource&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?onCustomTagLoadDone\@BlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onCustomTagLoadDone(class BlockSource&); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?tick\@BlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource&); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?onChanged\@BlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onChanged(class BlockSource&); // NOLINT
    /**
     * @vftbl 9
     * @symbol ?isMovable\@BlockActor\@\@UEAA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool isMovable(class BlockSource&); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?isCustomNameSaved\@BlockActor\@\@UEAA_NXZ
     */
    virtual bool isCustomNameSaved(); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?onPlace\@BlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onPlace(class BlockSource&); // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 13
     * @symbol ?onRemoved\@BlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onRemoved(class BlockSource&); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?isPreserved\@BlockActor\@\@UEBA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool isPreserved(class BlockSource&) const; // NOLINT
    /**
     * @vftbl 15
     * @symbol ?shouldPreserve\@BlockActor\@\@UEAA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool shouldPreserve(class BlockSource&); // NOLINT
    /**
     * @vftbl 16
     * @symbol ?triggerEvent\@BlockActor\@\@UEAAXHH\@Z
     */
    virtual void triggerEvent(int, int); // NOLINT
    /**
     * @vftbl 17
     * @symbol ?clearCache\@BlockActor\@\@UEAAXXZ
     */
    virtual void clearCache(); // NOLINT
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18(); // NOLINT
    /**
     * @vftbl 19
     * @symbol ?getShadowRadius\@BlockActor\@\@UEBAMAEAVBlockSource\@\@\@Z
     */
    virtual float getShadowRadius(class BlockSource&) const; // NOLINT
    /**
     * @vftbl 20
     * @symbol ?hasAlphaLayer\@BlockActor\@\@UEBA_NXZ
     */
    virtual bool hasAlphaLayer() const; // NOLINT
    /**
     * @vftbl 21
     * @symbol ?getCrackEntity\@BlockActor\@\@UEAAPEAV1\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class BlockActor* getCrackEntity(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @vftbl 22
     * @symbol ?getCollisionShape\@BlockActor\@\@UEBA?AVAABB\@\@AEBVIConstBlockSource\@\@\@Z
     */
    virtual class AABB getCollisionShape(class IConstBlockSource const&) const; // NOLINT
    /**
     * @vftbl 23
     * @symbol
     * ?getDebugText\@BlockActor\@\@UEAAXAEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void getDebugText(std::vector<std::string>&, class BlockPos const&); // NOLINT
    /**
     * @vftbl 24
     * @symbol
     * ?getCustomName\@BlockActor\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getCustomName() const; // NOLINT
    /**
     * @vftbl 25
     * @symbol
     * ?getFilteredCustomName\@BlockActor\@\@UEAAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVUIProfanityContext\@\@\@Z
     */
    virtual std::string const& getFilteredCustomName(class UIProfanityContext const&); // NOLINT
    /**
     * @vftbl 26
     * @symbol ?getName\@BlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 27
     * @symbol
     * ?setCustomName\@BlockActor\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void setCustomName(std::string const&); // NOLINT
    /**
     * @vftbl 28
     * @symbol
     * ?getImmersiveReaderText\@BlockActor\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::string getImmersiveReaderText(class BlockSource&); // NOLINT
    /**
     * @vftbl 29
     * @symbol ?getRepairCost\@BlockActor\@\@UEBAHXZ
     */
    virtual int getRepairCost() const; // NOLINT
    /**
     * @vftbl 30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30(); // NOLINT
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31(); // NOLINT
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32(); // NOLINT
    /**
     * @vftbl 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33(); // NOLINT
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34(); // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36(); // NOLINT
    /**
     * @vftbl 37
     * @symbol
     * ?getUgcStrings\@BlockActor\@\@UEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    virtual std::vector<std::string> getUgcStrings(class CompoundTag const&) const; // NOLINT
    /**
     * @vftbl 38
     * @symbol
     * ?setUgcStrings\@BlockActor\@\@UEBAXAEAVCompoundTag\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual void setUgcStrings(class CompoundTag&, std::vector<std::string> const&) const; // NOLINT
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39(); // NOLINT
    /**
     * @vftbl 40
     * @symbol
     * ?_getUpdatePacket\@BlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&); // NOLINT
    /**
     * @vftbl 41
     * @symbol ?_onUpdatePacket\@BlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&); // NOLINT
    /**
     * @vftbl 42
     * @symbol ?_playerCanUpdate\@BlockActor\@\@MEBA_NAEBVPlayer\@\@\@Z
     */
    virtual bool _playerCanUpdate(class Player const&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKACTOR
    /**
     * @symbol ?eraseLootTable\@BlockActor\@\@UEAAXXZ
     */
    MCVAPI void eraseLootTable(); // NOLINT
    /**
     * @symbol ?fixupOnLoad\@BlockActor\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void fixupOnLoad(class LevelChunk&); // NOLINT
    /**
     * @symbol ?getContainer\@BlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container* getContainer(); // NOLINT
    /**
     * @symbol ?getContainer\@BlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const* getContainer() const; // NOLINT
    /**
     * @symbol ?getOwningPiston\@BlockActor\@\@UEAAPEAVPistonBlockActor\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI class PistonBlockActor* getOwningPiston(class BlockSource&); // NOLINT
    /**
     * @symbol ?getOwningPiston\@BlockActor\@\@UEBAPEBVPistonBlockActor\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI class PistonBlockActor const* getOwningPiston(class BlockSource&) const; // NOLINT
    /**
     * @symbol ?onChunkLoaded\@BlockActor\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkLoaded(class LevelChunk&); // NOLINT
    /**
     * @symbol ?onChunkUnloaded\@BlockActor\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkUnloaded(class LevelChunk&); // NOLINT
    /**
     * @symbol ?onMove\@BlockActor\@\@UEAAXXZ
     */
    MCVAPI void onMove(); // NOLINT
    /**
     * @symbol ?onNeighborChanged\@BlockActor\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCVAPI void onNeighborChanged(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockActor(); // NOLINT
#endif
    /**
     * @symbol
     * ??0BlockActor\@\@QEAA\@W4BlockActorType\@\@AEBVBlockPos\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI BlockActor(enum class BlockActorType, class BlockPos const&, std::string const&); // NOLINT
    /**
     * @symbol ?assignBlockIfNotAssigned\@BlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void assignBlockIfNotAssigned(class BlockSource&); // NOLINT
    /**
     * @symbol ?getAABB\@BlockActor\@\@QEBAAEBVAABB\@\@XZ
     */
    MCAPI class AABB const& getAABB() const; // NOLINT
    /**
     * @symbol ?getBlock\@BlockActor\@\@QEBAPEBVBlock\@\@XZ
     */
    MCAPI class Block const* getBlock() const; // NOLINT
    /**
     * @symbol ?getPosition\@BlockActor\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getPosition() const; // NOLINT
    /**
     * @symbol
     * ?getServerUpdatePacket\@BlockActor\@\@QEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI std::unique_ptr<class BlockActorDataPacket> getServerUpdatePacket(class BlockSource&); // NOLINT
    /**
     * @symbol ?getType\@BlockActor\@\@QEBAAEBW4BlockActorType\@\@XZ
     */
    MCAPI enum class BlockActorType const& getType() const; // NOLINT
    /**
     * @symbol ?isChanged\@BlockActor\@\@QEBA_NXZ
     */
    MCAPI bool isChanged() const; // NOLINT
    /**
     * @symbol ?isType\@BlockActor\@\@QEBA_NW4BlockActorType\@\@\@Z
     */
    MCAPI bool isType(enum class BlockActorType) const; // NOLINT
    /**
     * @symbol ?moveTo\@BlockActor\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void moveTo(class BlockPos const&); // NOLINT
    /**
     * @symbol ?onUpdatePacket\@BlockActor\@\@QEAA_NAEBVCompoundTag\@\@AEAVBlockSource\@\@PEBVPlayer\@\@\@Z
     */
    MCAPI bool onUpdatePacket(class CompoundTag const&, class BlockSource&, class Player const*); // NOLINT
    /**
     * @symbol ?setChanged\@BlockActor\@\@QEAAXXZ
     */
    MCAPI void setChanged(); // NOLINT
    /**
     * @symbol ?setCustomNameSaved\@BlockActor\@\@QEAAX_N\@Z
     */
    MCAPI void setCustomNameSaved(bool); // NOLINT
    /**
     * @symbol ?setMovable\@BlockActor\@\@QEAAX_N\@Z
     */
    MCAPI void setMovable(bool); // NOLINT
    /**
     * @symbol ?isType\@BlockActor\@\@SA_NAEAV1\@W4BlockActorType\@\@\@Z
     */
    MCAPI static bool isType(class BlockActor&, enum class BlockActorType); // NOLINT
    /**
     * @symbol
     * ?loadStatic\@BlockActor\@\@SA?AV?$shared_ptr\@VBlockActor\@\@\@std\@\@AEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI static class std::shared_ptr<class BlockActor>
    loadStatic(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT

    // protected:
    /**
     * @symbol ?_resetAABB\@BlockActor\@\@IEAAXXZ
     */
    MCAPI void _resetAABB(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_createIdClassMap\@BlockActor\@\@CA?AV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockActorType\@\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockActorType\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI static class std::map<
        std::string,
        enum class BlockActorType,
        struct std::less<std::string>,
        class std::allocator<struct std::pair<std::string const, enum class BlockActorType>>>
    _createIdClassMap(); // NOLINT

protected:
private:
    /**
     * @symbol
     * ?mClassIdMap\@BlockActor\@\@0V?$map\@W4BlockActorType\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$less\@W4BlockActorType\@\@\@3\@V?$allocator\@U?$pair\@$$CBW4BlockActorType\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@B
     */
    MCAPI static class std::map<
        enum class BlockActorType,
        std::string,
        struct std::less<enum class BlockActorType>,
        class std::allocator<struct std::pair<enum class BlockActorType const, std::string>>> const
        mClassIdMap; // NOLINT
    /**
     * @symbol
     * ?mIdClassMap\@BlockActor\@\@0V?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockActorType\@\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockActorType\@\@\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI static class std::map<
        std::string,
        enum class BlockActorType,
        struct std::less<std::string>,
        class std::allocator<struct std::pair<std::string const, enum class BlockActorType>>> const
        mIdClassMap; // NOLINT
};
