/**
 * @file  MapItemSavedData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
     * @symbol  ??0MapItemSavedData\@\@QEAA\@UActorUniqueID\@\@_N\@Z
     */
    MCAPI MapItemSavedData(struct ActorUniqueID, bool);
    /**
     * @symbol  ?addTrackedMapEntity\@MapItemSavedData\@\@QEAA?AV?$shared_ptr\@VMapItemTrackedActor\@\@\@std\@\@AEAVActor\@\@W4Type\@MapDecoration\@\@\@Z
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor> addTrackedMapEntity(class Actor &, enum class MapDecoration::Type);
    /**
     * @symbol  ?addTrackedMapEntity\@MapItemSavedData\@\@QEAA?AV?$shared_ptr\@VMapItemTrackedActor\@\@\@std\@\@AEBVBlockPos\@\@AEAVBlockSource\@\@W4Type\@MapDecoration\@\@\@Z
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor> addTrackedMapEntity(class BlockPos const &, class BlockSource &, enum class MapDecoration::Type);
    /**
     * @symbol  ?areClientPixelsDirty\@MapItemSavedData\@\@QEBA_NXZ
     */
    MCAPI bool areClientPixelsDirty() const;
    /**
     * @symbol  ?checkNeedsResampling\@MapItemSavedData\@\@QEAAXXZ
     */
    MCAPI void checkNeedsResampling();
    /**
     * @symbol  ?copyMapData\@MapItemSavedData\@\@QEAAXAEBV1\@\@Z
     */
    MCAPI void copyMapData(class MapItemSavedData const &);
    /**
     * @symbol  ?deserialize\@MapItemSavedData\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void deserialize(class CompoundTag const &);
    /**
     * @symbol  ?enableUnlimitedTracking\@MapItemSavedData\@\@QEAAXXZ
     */
    MCAPI void enableUnlimitedTracking();
    /**
     * @symbol  ?getClientPixels\@MapItemSavedData\@\@QEAAAEAV?$vector\@UClientTerrainPixel\@\@V?$allocator\@UClientTerrainPixel\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ClientTerrainPixel> & getClientPixels();
    /**
     * @symbol  ?getClientSamplingLock\@MapItemSavedData\@\@QEAAPEAVSpinLock\@\@XZ
     */
    MCAPI class SpinLock * getClientSamplingLock();
    /**
     * @symbol  ?getFullDataPacket\@MapItemSavedData\@\@QEBA?AV?$unique_ptr\@VPacket\@\@U?$default_delete\@VPacket\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class Packet> getFullDataPacket() const;
    /**
     * @symbol  ?getMapId\@MapItemSavedData\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getMapId() const;
    /**
     * @symbol  ?getParentMapId\@MapItemSavedData\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getParentMapId() const;
    /**
     * @symbol  ?getPixels\@MapItemSavedData\@\@QEBA?AV?$buffer_span\@I\@\@XZ
     */
    MCAPI class buffer_span<unsigned int> getPixels() const;
    /**
     * @symbol  ?getTrackedMapEntity\@MapItemSavedData\@\@QEAA?AV?$shared_ptr\@VMapItemTrackedActor\@\@\@std\@\@AEAVActor\@\@\@Z
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor> getTrackedMapEntity(class Actor &);
    /**
     * @symbol  ?getUpdatePacket\@MapItemSavedData\@\@QEBA?AV?$unique_ptr\@VPacket\@\@U?$default_delete\@VPacket\@\@\@std\@\@\@std\@\@AEBVItemStack\@\@AEAVLevel\@\@AEAVActor\@\@\@Z
     */
    MCAPI std::unique_ptr<class Packet> getUpdatePacket(class ItemStack const &, class Level &, class Actor &) const;
    /**
     * @symbol  ?getUpdatePacket\@MapItemSavedData\@\@QEBA?AV?$unique_ptr\@VPacket\@\@U?$default_delete\@VPacket\@\@\@std\@\@\@std\@\@AEAVLevel\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI std::unique_ptr<class Packet> getUpdatePacket(class Level &, class BlockPos const &) const;
    /**
     * @symbol  ?hasParentMap\@MapItemSavedData\@\@QEBA_NXZ
     */
    MCAPI bool hasParentMap() const;
    /**
     * @symbol  ?isAdjacent\@MapItemSavedData\@\@QEBA_NAEBV1\@H\@Z
     */
    MCAPI bool isAdjacent(class MapItemSavedData const &, int) const;
    /**
     * @symbol  ?isChunkAllEmpty\@MapItemSavedData\@\@QEBA_NUChunkBounds\@1\@\@Z
     */
    MCAPI bool isChunkAllEmpty(struct MapItemSavedData::ChunkBounds) const;
    /**
     * @symbol  ?isFullyExplored\@MapItemSavedData\@\@QEBA_NXZ
     */
    MCAPI bool isFullyExplored() const;
    /**
     * @symbol  ?isLocked\@MapItemSavedData\@\@QEBA_NXZ
     */
    MCAPI bool isLocked() const;
    /**
     * @symbol  ?needsResampling\@MapItemSavedData\@\@QEBA_NXZ
     */
    MCAPI bool needsResampling() const;
    /**
     * @symbol  ?removeTrackedMapEntity\@MapItemSavedData\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void removeTrackedMapEntity(class BlockPos const &);
    /**
     * @symbol  ?save\@MapItemSavedData\@\@QEAAXAEAVLevelStorage\@\@\@Z
     */
    MCAPI void save(class LevelStorage &);
    /**
     * @symbol  ?serialize\@MapItemSavedData\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void serialize(class CompoundTag &) const;
    /**
     * @symbol  ?setClientPixelsDirty\@MapItemSavedData\@\@QEAAX_N\@Z
     */
    MCAPI void setClientPixelsDirty(bool);
    /**
     * @symbol  ?setDirtyForSaveAndPixelData\@MapItemSavedData\@\@QEAAXXZ
     */
    MCAPI void setDirtyForSaveAndPixelData();
    /**
     * @symbol  ?setLocked\@MapItemSavedData\@\@QEAAXXZ
     */
    MCAPI void setLocked();
    /**
     * @symbol  ?setMapSection\@MapItemSavedData\@\@QEAAXV?$buffer_span\@I\@\@UChunkBounds\@1\@\@Z
     */
    MCAPI void setMapSection(class buffer_span<unsigned int>, struct MapItemSavedData::ChunkBounds);
    /**
     * @symbol  ?setOrigin\@MapItemSavedData\@\@QEAAXVVec3\@\@HV?$AutomaticID\@VDimension\@\@H\@\@_N2AEBVBlockPos\@\@\@Z
     */
    MCAPI void setOrigin(class Vec3, int, class AutomaticID<class Dimension, int>, bool, bool, class BlockPos const &);
    /**
     * @symbol  ?setPixel\@MapItemSavedData\@\@QEAA_NIII\@Z
     */
    MCAPI bool setPixel(unsigned int, unsigned int, unsigned int);
    /**
     * @symbol  ?setPixelDirty\@MapItemSavedData\@\@QEAAXII\@Z
     */
    MCAPI void setPixelDirty(unsigned int, unsigned int);
    /**
     * @symbol  ?setScale\@MapItemSavedData\@\@QEAAXH\@Z
     */
    MCAPI void setScale(int);
    /**
     * @symbol  ?setScaleAndParentMapId\@MapItemSavedData\@\@QEAAXHUActorUniqueID\@\@\@Z
     */
    MCAPI void setScaleAndParentMapId(int, struct ActorUniqueID);
    /**
     * @symbol  ?tickByBlock\@MapItemSavedData\@\@QEAAXAEBVBlockPos\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void tickByBlock(class BlockPos const &, class BlockSource &);
    /**
     * @symbol  ?tickCarriedBy\@MapItemSavedData\@\@QEAAXAEAVActor\@\@PEBVCompoundTag\@\@\@Z
     */
    MCAPI void tickCarriedBy(class Actor &, class CompoundTag const *);
    /**
     * @symbol  ?trySave\@MapItemSavedData\@\@QEAAXAEAVLevelStorage\@\@\@Z
     */
    MCAPI void trySave(class LevelStorage &);
    /**
     * @symbol  ??1MapItemSavedData\@\@QEAA\@XZ
     */
    MCAPI ~MapItemSavedData();
    /**
     * @symbol  ?getSerializationKey\@MapItemSavedData\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorUniqueID\@\@\@Z
     */
    MCAPI static std::string getSerializationKey(struct ActorUniqueID);

//private:
    /**
     * @symbol  ?_addDecoration\@MapItemSavedData\@\@AEAAXW4Type\@MapDecoration\@\@AEAVLevel\@\@AEBUUniqueId\@MapItemTrackedActor\@\@AEBVVec3\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI void _addDecoration(enum class MapDecoration::Type, class Level &, struct MapItemTrackedActor::UniqueId const &, class Vec3 const &, std::string const &, class mce::Color const &);
    /**
     * @symbol  ?_addTrackedMapEntity\@MapItemSavedData\@\@AEAA?AV?$shared_ptr\@VMapItemTrackedActor\@\@\@std\@\@AEBUUniqueId\@MapItemTrackedActor\@\@AEAVBlockSource\@\@W4Type\@MapDecoration\@\@\@Z
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor> _addTrackedMapEntity(struct MapItemTrackedActor::UniqueId const &, class BlockSource &, enum class MapDecoration::Type);
    /**
     * @symbol  ?_deserializeData\@MapItemSavedData\@\@AEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void _deserializeData(class CompoundTag const &);
    /**
     * @symbol  ?_removeDecoration\@MapItemSavedData\@\@AEAAXAEBUUniqueId\@MapItemTrackedActor\@\@\@Z
     */
    MCAPI void _removeDecoration(struct MapItemTrackedActor::UniqueId const &);
    /**
     * @symbol  ?_removeTrackedMapEntity\@MapItemSavedData\@\@AEAAXAEBUUniqueId\@MapItemTrackedActor\@\@\@Z
     */
    MCAPI void _removeTrackedMapEntity(struct MapItemTrackedActor::UniqueId const &);
    /**
     * @symbol  ?_updateTrackedEntityDecoration\@MapItemSavedData\@\@AEAA_NAEAVBlockSource\@\@V?$shared_ptr\@VMapItemTrackedActor\@\@\@std\@\@\@Z
     */
    MCAPI bool _updateTrackedEntityDecoration(class BlockSource &, class std::shared_ptr<class MapItemTrackedActor>);
    /**
     * @symbol  ?_updateTrackedEntityDecorations\@MapItemSavedData\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _updateTrackedEntityDecorations(class BlockSource &);
    /**
     * @symbol  ?_updateTrackedPlayerDecorations\@MapItemSavedData\@\@AEAAXAEAVBlockSource\@\@AEAVPlayer\@\@AEAVVec3\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVColor\@mce\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEAW4Type\@MapDecoration\@\@\@Z
     */
    MCAPI void _updateTrackedPlayerDecorations(class BlockSource &, class Player &, class Vec3 &, std::string &, class mce::Color &, class AutomaticID<class Dimension, int>, enum class MapDecoration::Type &);

private:

};