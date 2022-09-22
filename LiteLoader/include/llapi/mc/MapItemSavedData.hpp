/**
 * @file  MapItemSavedData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MapDecoration.hpp"
#include "MapItemTrackedActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MapItemSavedData.
 *
 */
class MapItemSavedData {

#define AFTER_EXTRA
// Add Member There
public:
struct ChunkBounds {
    ChunkBounds() = delete;
    ChunkBounds(ChunkBounds const&) = delete;
    ChunkBounds(ChunkBounds const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPITEMSAVEDDATA
public:
    class MapItemSavedData& operator=(class MapItemSavedData const &) = delete;
    MapItemSavedData(class MapItemSavedData const &) = delete;
    MapItemSavedData() = delete;
#endif

public:
    /**
     * @hash   631815099
     * @symbol ??0MapItemSavedData@@QEAA@UActorUniqueID@@@Z
     */
    MCAPI MapItemSavedData(struct ActorUniqueID);
    /**
     * @hash   1805087251
     * @symbol ?addTrackedMapEntity@MapItemSavedData@@QEAA?AV?$shared_ptr@VMapItemTrackedActor@@@std@@AEAVActor@@W4Type@MapDecoration@@@Z
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor> addTrackedMapEntity(class Actor &, enum MapDecoration::Type);
    /**
     * @hash   1205039368
     * @symbol ?addTrackedMapEntity@MapItemSavedData@@QEAA?AV?$shared_ptr@VMapItemTrackedActor@@@std@@AEBVBlockPos@@AEAVBlockSource@@W4Type@MapDecoration@@@Z
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor> addTrackedMapEntity(class BlockPos const &, class BlockSource &, enum MapDecoration::Type);
    /**
     * @hash   1647482006
     * @symbol ?areClientPixelsDirty@MapItemSavedData@@QEBA_NXZ
     */
    MCAPI bool areClientPixelsDirty() const;
    /**
     * @hash   -997152183
     * @symbol ?copyMapData@MapItemSavedData@@QEAAXAEBV1@@Z
     */
    MCAPI void copyMapData(class MapItemSavedData const &);
    /**
     * @hash   -724627068
     * @symbol ?deserialize@MapItemSavedData@@QEAAXAEBVCompoundTag@@@Z
     */
    MCAPI void deserialize(class CompoundTag const &);
    /**
     * @hash   1852808163
     * @symbol ?enableUnlimitedTracking@MapItemSavedData@@QEAAXXZ
     */
    MCAPI void enableUnlimitedTracking();
    /**
     * @hash   -1267638106
     * @symbol ?getClientPixels@MapItemSavedData@@QEAAAEAV?$vector@UClientTerrainPixel@@V?$allocator@UClientTerrainPixel@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct ClientTerrainPixel> & getClientPixels();
    /**
     * @hash   -972173887
     * @symbol ?getClientSamplingLock@MapItemSavedData@@QEAAPEAVSpinLock@@XZ
     */
    MCAPI class SpinLock * getClientSamplingLock();
    /**
     * @hash   -221353830
     * @symbol ?getFullDataPacket@MapItemSavedData@@QEBA?AV?$unique_ptr@VPacket@@U?$default_delete@VPacket@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class Packet> getFullDataPacket() const;
    /**
     * @hash   -308648578
     * @symbol ?getMapId@MapItemSavedData@@QEBA?AUActorUniqueID@@XZ
     */
    MCAPI struct ActorUniqueID getMapId() const;
    /**
     * @hash   112876058
     * @symbol ?getParentMapId@MapItemSavedData@@QEBA?AUActorUniqueID@@XZ
     */
    MCAPI struct ActorUniqueID getParentMapId() const;
    /**
     * @hash   2023149920
     * @symbol ?getPixels@MapItemSavedData@@QEBA?AV?$buffer_span@I@@XZ
     */
    MCAPI class buffer_span<unsigned int> getPixels() const;
    /**
     * @hash   -1081409526
     * @symbol ?getTrackedMapEntity@MapItemSavedData@@QEAA?AV?$shared_ptr@VMapItemTrackedActor@@@std@@AEAVActor@@@Z
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor> getTrackedMapEntity(class Actor &);
    /**
     * @hash   -1661412233
     * @symbol ?getTrackedMapEntity@MapItemSavedData@@QEAA?AV?$shared_ptr@VMapItemTrackedActor@@@std@@AEBVBlockPos@@AEAVBlockSource@@@Z
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor> getTrackedMapEntity(class BlockPos const &, class BlockSource &);
    /**
     * @hash   -1936244627
     * @symbol ?getUpdatePacket@MapItemSavedData@@QEBA?AV?$unique_ptr@VPacket@@U?$default_delete@VPacket@@@std@@@std@@AEBVItemStack@@AEAVLevel@@AEAVActor@@@Z
     */
    MCAPI std::unique_ptr<class Packet> getUpdatePacket(class ItemStack const &, class Level &, class Actor &) const;
    /**
     * @hash   1627419036
     * @symbol ?getUpdatePacket@MapItemSavedData@@QEBA?AV?$unique_ptr@VPacket@@U?$default_delete@VPacket@@@std@@@std@@AEAVLevel@@AEBVBlockPos@@@Z
     */
    MCAPI std::unique_ptr<class Packet> getUpdatePacket(class Level &, class BlockPos const &) const;
    /**
     * @hash   -802862310
     * @symbol ?hasParentMap@MapItemSavedData@@QEBA_NXZ
     */
    MCAPI bool hasParentMap() const;
    /**
     * @hash   -1289885469
     * @symbol ?isAdjacent@MapItemSavedData@@QEBA_NAEBV1@H@Z
     */
    MCAPI bool isAdjacent(class MapItemSavedData const &, int) const;
    /**
     * @hash   -685538820
     * @symbol ?isChunkAllEmpty@MapItemSavedData@@QEBA_NUChunkBounds@1@@Z
     */
    MCAPI bool isChunkAllEmpty(struct MapItemSavedData::ChunkBounds) const;
    /**
     * @hash   -68615874
     * @symbol ?isFullyExplored@MapItemSavedData@@QEBA_NXZ
     */
    MCAPI bool isFullyExplored() const;
    /**
     * @hash   556048386
     * @symbol ?isLocked@MapItemSavedData@@QEBA_NXZ
     */
    MCAPI bool isLocked() const;
    /**
     * @hash   1891351550
     * @symbol ?removeTrackedMapEntity@MapItemSavedData@@QEAAXAEBVBlockPos@@@Z
     */
    MCAPI void removeTrackedMapEntity(class BlockPos const &);
    /**
     * @hash   1020353400
     * @symbol ?save@MapItemSavedData@@QEAAXAEAVLevelStorage@@@Z
     */
    MCAPI void save(class LevelStorage &);
    /**
     * @hash   -1486416536
     * @symbol ?serialize@MapItemSavedData@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void serialize(class CompoundTag &) const;
    /**
     * @hash   1091840338
     * @symbol ?setClientPixelsDirty@MapItemSavedData@@QEAAX_N@Z
     */
    MCAPI void setClientPixelsDirty(bool);
    /**
     * @hash   -1753906445
     * @symbol ?setDirtyForSaveAndPixelData@MapItemSavedData@@QEAAXXZ
     */
    MCAPI void setDirtyForSaveAndPixelData();
    /**
     * @hash   -1043110877
     * @symbol ?setLocked@MapItemSavedData@@QEAAXXZ
     */
    MCAPI void setLocked();
    /**
     * @hash   1520173302
     * @symbol ?setMapSection@MapItemSavedData@@QEAAXV?$buffer_span@I@@UChunkBounds@1@@Z
     */
    MCAPI void setMapSection(class buffer_span<unsigned int>, struct MapItemSavedData::ChunkBounds);
    /**
     * @hash   -881696182
     * @symbol ?setOrigin@MapItemSavedData@@QEAAXVVec3@@HV?$AutomaticID@VDimension@@H@@_N2AEBVBlockPos@@@Z
     */
    MCAPI void setOrigin(class Vec3, int, class AutomaticID<class Dimension, int>, bool, bool, class BlockPos const &);
    /**
     * @hash   -1251401869
     * @symbol ?setPixel@MapItemSavedData@@QEAA_NIII@Z
     */
    MCAPI bool setPixel(unsigned int, unsigned int, unsigned int);
    /**
     * @hash   1051585643
     * @symbol ?setPixelDirty@MapItemSavedData@@QEAAXII@Z
     */
    MCAPI void setPixelDirty(unsigned int, unsigned int);
    /**
     * @hash   2118470982
     * @symbol ?setScale@MapItemSavedData@@QEAAXH@Z
     */
    MCAPI void setScale(int);
    /**
     * @hash   -1145877635
     * @symbol ?setScaleAndParentMapId@MapItemSavedData@@QEAAXHUActorUniqueID@@@Z
     */
    MCAPI void setScaleAndParentMapId(int, struct ActorUniqueID);
    /**
     * @hash   -1467106891
     * @symbol ?tickByBlock@MapItemSavedData@@QEAAXAEBVBlockPos@@AEAVBlockSource@@@Z
     */
    MCAPI void tickByBlock(class BlockPos const &, class BlockSource &);
    /**
     * @hash   1595557184
     * @symbol ?tickCarriedBy@MapItemSavedData@@QEAAXAEAVActor@@PEBVCompoundTag@@@Z
     */
    MCAPI void tickCarriedBy(class Actor &, class CompoundTag const *);
    /**
     * @hash   1617043568
     * @symbol ?trySave@MapItemSavedData@@QEAAXAEAVLevelStorage@@@Z
     */
    MCAPI void trySave(class LevelStorage &);
    /**
     * @hash   -159120948
     * @symbol ??1MapItemSavedData@@QEAA@XZ
     */
    MCAPI ~MapItemSavedData();
    /**
     * @hash   -514043703
     * @symbol ?getSerializationKey@MapItemSavedData@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@@Z
     */
    MCAPI static std::string getSerializationKey(struct ActorUniqueID);

//private:
    /**
     * @hash   -748820563
     * @symbol ?_addDecoration@MapItemSavedData@@AEAAXW4Type@MapDecoration@@AEAVLevel@@AEBUUniqueId@MapItemTrackedActor@@AEBVVec3@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVColor@mce@@@Z
     */
    MCAPI void _addDecoration(enum MapDecoration::Type, class Level &, struct MapItemTrackedActor::UniqueId const &, class Vec3 const &, std::string const &, class mce::Color const &);
    /**
     * @hash   1205605149
     * @symbol ?_addTrackedMapEntity@MapItemSavedData@@AEAA?AV?$shared_ptr@VMapItemTrackedActor@@@std@@AEBUUniqueId@MapItemTrackedActor@@AEAVBlockSource@@W4Type@MapDecoration@@@Z
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor> _addTrackedMapEntity(struct MapItemTrackedActor::UniqueId const &, class BlockSource &, enum MapDecoration::Type);
    /**
     * @hash   144598230
     * @symbol ?_deserializeData@MapItemSavedData@@AEAAXAEBVCompoundTag@@@Z
     */
    MCAPI void _deserializeData(class CompoundTag const &);
    /**
     * @hash   1652492674
     * @symbol ?_findTrackedMapEntity@MapItemSavedData@@AEBA?AV?$shared_ptr@VMapItemTrackedActor@@@std@@AEBVBlockPos@@@Z
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor> _findTrackedMapEntity(class BlockPos const &) const;
    /**
     * @hash   449394169
     * @symbol ?_removeDecoration@MapItemSavedData@@AEAAXAEBUUniqueId@MapItemTrackedActor@@@Z
     */
    MCAPI void _removeDecoration(struct MapItemTrackedActor::UniqueId const &);
    /**
     * @hash   220142068
     * @symbol ?_removeTrackedMapEntity@MapItemSavedData@@AEAAXAEBUUniqueId@MapItemTrackedActor@@@Z
     */
    MCAPI void _removeTrackedMapEntity(struct MapItemTrackedActor::UniqueId const &);
    /**
     * @hash   1580143239
     * @symbol ?_updateTrackedEntityDecoration@MapItemSavedData@@AEAA_NAEAVBlockSource@@V?$shared_ptr@VMapItemTrackedActor@@@std@@@Z
     */
    MCAPI bool _updateTrackedEntityDecoration(class BlockSource &, class std::shared_ptr<class MapItemTrackedActor>);
    /**
     * @hash   1529198380
     * @symbol ?_updateTrackedEntityDecorations@MapItemSavedData@@AEAAXAEAVBlockSource@@@Z
     */
    MCAPI void _updateTrackedEntityDecorations(class BlockSource &);
    /**
     * @hash   731732970
     * @symbol ?_updateTrackedPlayerDecorations@MapItemSavedData@@AEAAXAEAVBlockSource@@AEAVPlayer@@AEAVVec3@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVColor@mce@@V?$AutomaticID@VDimension@@H@@AEAW4Type@MapDecoration@@@Z
     */
    MCAPI void _updateTrackedPlayerDecorations(class BlockSource &, class Player &, class Vec3 &, std::string &, class mce::Color &, class AutomaticID<class Dimension, int>, enum MapDecoration::Type &);

private:

};