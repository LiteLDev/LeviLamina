#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BlockActorType.h"

class CompoundTag;
class BlockSource;
class BlockPos;

class BlockActor {
public:
    LLAPI void refresh(optional_ref<class BlockSource> blockSource = std::nullopt);

    LLNDAPI std::unique_ptr<class CompoundTag> saveToNbt() const;

    LLAPI void loadFromNbt(class CompoundTag const& nbt, optional_ref<class BlockSource> blockSource = std::nullopt);

    LLNDAPI static std::shared_ptr<BlockActor> create(class CompoundTag const& nbt);

    LLNDAPI static std::shared_ptr<BlockActor> create(class CompoundTag const& nbt, class BlockPos const& pos);

    // prevent constructor by default
    BlockActor& operator=(BlockActor const&);
    BlockActor(BlockActor const&);
    BlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BlockActor@@UEAA@XZ
    virtual ~BlockActor();

    // vIndex: 1, symbol: ?load@BlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 2, symbol: ?save@BlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag&) const;

    // vIndex: 3, symbol: ?saveItemInstanceData@BlockActor@@UEAA_NAEAVCompoundTag@@@Z
    virtual bool saveItemInstanceData(class CompoundTag&);

    // vIndex: 4, symbol: ?saveBlockData@BlockActor@@UEBAXAEAVCompoundTag@@AEAVBlockSource@@@Z
    virtual void saveBlockData(class CompoundTag&, class BlockSource&) const;

    // vIndex: 5, symbol: ?loadBlockData@BlockActor@@UEAAXAEBVCompoundTag@@AEAVBlockSource@@AEAVDataLoadHelper@@@Z
    virtual void loadBlockData(class CompoundTag const&, class BlockSource&, class DataLoadHelper&);

    // vIndex: 6, symbol: ?onCustomTagLoadDone@BlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onCustomTagLoadDone(class BlockSource&);

    // vIndex: 7, symbol: ?tick@BlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource&);

    // vIndex: 8, symbol: ?onChanged@BlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onChanged(class BlockSource&);

    // vIndex: 9, symbol: ?isMovable@BlockActor@@UEAA_NAEAVBlockSource@@@Z
    virtual bool isMovable(class BlockSource&);

    // vIndex: 10, symbol: ?isCustomNameSaved@BlockActor@@UEAA_NXZ
    virtual bool isCustomNameSaved();

    // vIndex: 11, symbol: ?onPlace@BlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onPlace(class BlockSource&);

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: ?onRemoved@BlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onRemoved(class BlockSource&);

    // vIndex: 14, symbol: ?isPreserved@BlockActor@@UEBA_NAEAVBlockSource@@@Z
    virtual bool isPreserved(class BlockSource&) const;

    // vIndex: 15, symbol: ?shouldPreserve@BlockActor@@UEAA_NAEAVBlockSource@@@Z
    virtual bool shouldPreserve(class BlockSource&);

    // vIndex: 16, symbol: ?triggerEvent@BlockActor@@UEAAXHH@Z
    virtual void triggerEvent(int, int);

    // vIndex: 17, symbol: ?clearCache@BlockActor@@UEAAXXZ
    virtual void clearCache();

    // vIndex: 18, symbol: __unk_vfn_18
    virtual void __unk_vfn_18();

    // vIndex: 19, symbol: ?getShadowRadius@BlockActor@@UEBAMAEAVBlockSource@@@Z
    virtual float getShadowRadius(class BlockSource&) const;

    // vIndex: 20, symbol: ?hasAlphaLayer@BlockActor@@UEBA_NXZ
    virtual bool hasAlphaLayer() const;

    // vIndex: 21, symbol: ?getCrackEntity@BlockActor@@UEAAPEAV1@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual class BlockActor* getCrackEntity(class BlockSource&, class BlockPos const&);

    // vIndex: 22, symbol: ?getCollisionShape@BlockActor@@UEBA?AVAABB@@AEBVIConstBlockSource@@@Z
    virtual class AABB getCollisionShape(class IConstBlockSource const&) const;

    // vIndex: 23, symbol:
    // ?getDebugText@BlockActor@@UEAAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVBlockPos@@@Z
    virtual void getDebugText(std::vector<std::string>&, class BlockPos const&);

    // vIndex: 24, symbol:
    // ?getCustomName@BlockActor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getCustomName() const;

    // vIndex: 25, symbol:
    // ?getFilteredCustomName@BlockActor@@UEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVUIProfanityContext@@@Z
    virtual std::string const& getFilteredCustomName(class UIProfanityContext const&);

    // vIndex: 26, symbol: ?getName@BlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 27, symbol:
    // ?setCustomName@BlockActor@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void setCustomName(std::string const&);

    // vIndex: 28, symbol:
    // ?getImmersiveReaderText@BlockActor@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVBlockSource@@@Z
    virtual std::string getImmersiveReaderText(class BlockSource&);

    // vIndex: 29, symbol: ?getRepairCost@BlockActor@@UEBAHXZ
    virtual int getRepairCost() const;

    // vIndex: 30, symbol: __unk_vfn_30
    virtual void __unk_vfn_30();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 32, symbol: __unk_vfn_32
    virtual void __unk_vfn_32();

    // vIndex: 33, symbol: __unk_vfn_33
    virtual void __unk_vfn_33();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 37, symbol:
    // ?getUgcStrings@BlockActor@@UEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVCompoundTag@@@Z
    virtual std::vector<std::string> getUgcStrings(class CompoundTag const&) const;

    // vIndex: 38, symbol:
    // ?setUgcStrings@BlockActor@@UEBAXAEAVCompoundTag@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    virtual void setUgcStrings(class CompoundTag&, std::vector<std::string> const&) const;

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@BlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41, symbol: ?_onUpdatePacket@BlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);

    // vIndex: 42, symbol: ?_playerCanUpdate@BlockActor@@MEBA_NAEBVPlayer@@@Z
    virtual bool _playerCanUpdate(class Player const&) const;

    // symbol: ?eraseLootTable@BlockActor@@UEAAXXZ
    MCVAPI void eraseLootTable();

    // symbol: ?fixupOnLoad@BlockActor@@UEAAXAEAVLevelChunk@@@Z
    MCVAPI void fixupOnLoad(class LevelChunk&);

    // symbol: ?getContainer@BlockActor@@UEAAPEAVContainer@@XZ
    MCVAPI class Container* getContainer();

    // symbol: ?getContainer@BlockActor@@UEBAPEBVContainer@@XZ
    MCVAPI class Container const* getContainer() const;

    // symbol: ?getOwningPiston@BlockActor@@UEAAPEAVPistonBlockActor@@AEAVBlockSource@@@Z
    MCVAPI class PistonBlockActor* getOwningPiston(class BlockSource&);

    // symbol: ?getOwningPiston@BlockActor@@UEBAPEBVPistonBlockActor@@AEAVBlockSource@@@Z
    MCVAPI class PistonBlockActor const* getOwningPiston(class BlockSource&) const;

    // symbol: ?onChunkLoaded@BlockActor@@UEAAXAEAVLevelChunk@@@Z
    MCVAPI void onChunkLoaded(class LevelChunk&);

    // symbol: ?onChunkUnloaded@BlockActor@@UEAAXAEAVLevelChunk@@@Z
    MCVAPI void onChunkUnloaded(class LevelChunk&);

    // symbol: ?onMove@BlockActor@@UEAAXXZ
    MCVAPI void onMove();

    // symbol: ?onNeighborChanged@BlockActor@@UEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCVAPI void onNeighborChanged(class BlockSource&, class BlockPos const&);

    // symbol:
    // ??0BlockActor@@QEAA@W4BlockActorType@@AEBVBlockPos@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI BlockActor(::BlockActorType, class BlockPos const&, std::string const&);

    // symbol: ?assignBlockIfNotAssigned@BlockActor@@QEAAXAEAVBlockSource@@@Z
    MCAPI void assignBlockIfNotAssigned(class BlockSource&);

    // symbol: ?getAABB@BlockActor@@QEBAAEBVAABB@@XZ
    MCAPI class AABB const& getAABB() const;

    // symbol: ?getBlock@BlockActor@@QEBAPEBVBlock@@XZ
    MCAPI class Block const* getBlock() const;

    // symbol: ?getPosition@BlockActor@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getPosition() const;

    // symbol:
    // ?getServerUpdatePacket@BlockActor@@QEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    MCAPI std::unique_ptr<class BlockActorDataPacket> getServerUpdatePacket(class BlockSource&);

    // symbol: ?getType@BlockActor@@QEBAAEBW4BlockActorType@@XZ
    MCAPI ::BlockActorType const& getType() const;

    // symbol: ?isChanged@BlockActor@@QEBA_NXZ
    MCAPI bool isChanged() const;

    // symbol: ?isType@BlockActor@@QEBA_NW4BlockActorType@@@Z
    MCAPI bool isType(::BlockActorType) const;

    // symbol: ?moveTo@BlockActor@@QEAAXAEBVBlockPos@@@Z
    MCAPI void moveTo(class BlockPos const&);

    // symbol: ?onUpdatePacket@BlockActor@@QEAA_NAEBVCompoundTag@@AEAVBlockSource@@PEBVPlayer@@@Z
    MCAPI bool onUpdatePacket(class CompoundTag const&, class BlockSource&, class Player const*);

    // symbol: ?setChanged@BlockActor@@QEAAXXZ
    MCAPI void setChanged();

    // symbol: ?setCustomNameSaved@BlockActor@@QEAAX_N@Z
    MCAPI void setCustomNameSaved(bool);

    // symbol: ?setMovable@BlockActor@@QEAAX_N@Z
    MCAPI void setMovable(bool);

    // symbol: ?isType@BlockActor@@SA_NAEAV1@W4BlockActorType@@@Z
    MCAPI static bool isType(class BlockActor&, ::BlockActorType);

    // symbol:
    // ?loadStatic@BlockActor@@SA?AV?$shared_ptr@VBlockActor@@@std@@AEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI static std::shared_ptr<class BlockActor>
    loadStatic(class Level&, class CompoundTag const&, class DataLoadHelper&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_resetAABB@BlockActor@@IEAAXXZ
    MCAPI void _resetAABB();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_createIdClassMap@BlockActor@@CA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockActorType@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockActorType@@@std@@@2@@std@@XZ
    MCAPI static std::map<std::string, ::BlockActorType> _createIdClassMap();

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?mClassIdMap@BlockActor@@0V?$map@W4BlockActorType@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@W4BlockActorType@@@3@V?$allocator@U?$pair@$$CBW4BlockActorType@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@B
    MCAPI static std::map<::BlockActorType, std::string> const mClassIdMap;

    // symbol:
    // ?mIdClassMap@BlockActor@@0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockActorType@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockActorType@@@std@@@2@@std@@B
    MCAPI static std::map<std::string, ::BlockActorType> const mIdClassMap;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $mClassIdMap() { return mClassIdMap; }

    static auto& $mIdClassMap() { return mIdClassMap; }

    // NOLINTEND
};
