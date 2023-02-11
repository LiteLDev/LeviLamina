/**
 * @file  MapItemSavedData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @hash   776094810
     * @symbol  ??0MapItemSavedData\@\@QEAA\@UActorUniqueID\@\@_N\@Z
     */
    MCAPI MapItemSavedData(struct ActorUniqueID, bool);
    /**
     * @hash   -1640309917
     * @symbol  ?addTrackedMapEntity\@MapItemSavedData\@\@QEAA?AV?$shared_ptr\@VMapItemTrackedActor\@\@\@std\@\@AEAVActor\@\@W4Type\@MapDecoration\@\@\@Z
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor> addTrackedMapEntity(class Actor &, enum class MapDecoration::Type);
    /**
     * @hash   2054609496
     * @symbol  ?addTrackedMapEntity\@MapItemSavedData\@\@QEAA?AV?$shared_ptr\@VMapItemTrackedActor\@\@\@std\@\@AEBVBlockPos\@\@AEAVBlockSource\@\@W4Type\@MapDecoration\@\@\@Z
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor> addTrackedMapEntity(class BlockPos const &, class BlockSource &, enum class MapDecoration::Type);
    /**
     * @hash   696030502
     * @symbol  ?areClientPixelsDirty\@MapItemSavedData\@\@QEBA_NXZ
     */
    MCAPI bool areClientPixelsDirty() const;
    /**
     * @hash   1582632533
     * @symbol  ?checkNeedsResampling\@MapItemSavedData\@\@QEAAXXZ
     */
    MCAPI void checkNeedsResampling();
    /**
     * @hash   -147259159
     * @symbol  ?copyMapData\@MapItemSavedData\@\@QEAAXAEBV1\@\@Z
     */
    MCAPI void copyMapData(class MapItemSavedData const &);
    /**
     * @hash   125265956
     * @symbol  ?deserialize\@MapItemSavedData\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void deserialize(class CompoundTag const &);
    /**
     * @hash   -1592266109
     * @symbol  ?enableUnlimitedTracking\@MapItemSavedData\@\@QEAAXXZ
     */
    MCAPI void enableUnlimitedTracking();
    /**
     * @hash   -2119760650
     * @symbol  ?getClientPixels\@MapItemSavedData\@\@QEAAAEAV?$vector\@UClientTerrainPixel\@\@V?$allocator\@UClientTerrainPixel\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ClientTerrainPixel> & getClientPixels();
    /**
     * @hash   -122280863
     * @symbol  ?getClientSamplingLock\@MapItemSavedData\@\@QEAAPEAVSpinLock\@\@XZ
     */
    MCAPI class SpinLock * getClientSamplingLock();
    /**
     * @hash   628539194
     * @symbol  ?getFullDataPacket\@MapItemSavedData\@\@QEBA?AV?$unique_ptr\@VPacket\@\@U?$default_delete\@VPacket\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class Packet> getFullDataPacket() const;
    /**
     * @hash   -175692306
     * @symbol  ?getMapId\@MapItemSavedData\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getMapId() const;
    /**
     * @hash   -737785766
     * @symbol  ?getParentMapId\@MapItemSavedData\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getParentMapId() const;
    /**
     * @hash   -1421924352
     * @symbol  ?getPixels\@MapItemSavedData\@\@QEBA?AV?$buffer_span\@I\@\@XZ
     */
    MCAPI class buffer_span<unsigned int> getPixels() const;
    /**
     * @hash   -231516502
     * @symbol  ?getTrackedMapEntity\@MapItemSavedData\@\@QEAA?AV?$shared_ptr\@VMapItemTrackedActor\@\@\@std\@\@AEAVActor\@\@\@Z
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor> getTrackedMapEntity(class Actor &);
    /**
     * @hash   -1086351603
     * @symbol  ?getUpdatePacket\@MapItemSavedData\@\@QEBA?AV?$unique_ptr\@VPacket\@\@U?$default_delete\@VPacket\@\@\@std\@\@\@std\@\@AEBVItemStack\@\@AEAVLevel\@\@AEAVActor\@\@\@Z
     */
    MCAPI std::unique_ptr<class Packet> getUpdatePacket(class ItemStack const &, class Level &, class Actor &) const;
    /**
     * @hash   -1817670612
     * @symbol  ?getUpdatePacket\@MapItemSavedData\@\@QEBA?AV?$unique_ptr\@VPacket\@\@U?$default_delete\@VPacket\@\@\@std\@\@\@std\@\@AEAVLevel\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI std::unique_ptr<class Packet> getUpdatePacket(class Level &, class BlockPos const &) const;
    /**
     * @hash   47046090
     * @symbol  ?hasParentMap\@MapItemSavedData\@\@QEBA_NXZ
     */
    MCAPI bool hasParentMap() const;
    /**
     * @hash   -439977069
     * @symbol  ?isAdjacent\@MapItemSavedData\@\@QEBA_NAEBV1\@H\@Z
     */
    MCAPI bool isAdjacent(class MapItemSavedData const &, int) const;
    /**
     * @hash   8087916
     * @symbol  ?isChunkAllEmpty\@MapItemSavedData\@\@QEBA_NUChunkBounds\@1\@\@Z
     */
    MCAPI bool isChunkAllEmpty(struct MapItemSavedData::ChunkBounds) const;
    /**
     * @hash   781292526
     * @symbol  ?isFullyExplored\@MapItemSavedData\@\@QEBA_NXZ
     */
    MCAPI bool isFullyExplored() const;
    /**
     * @hash   1354477938
     * @symbol  ?isLocked\@MapItemSavedData\@\@QEBA_NXZ
     */
    MCAPI bool isLocked() const;
    /**
     * @hash   138148170
     * @symbol  ?needsResampling\@MapItemSavedData\@\@QEBA_NXZ
     */
    MCAPI bool needsResampling() const;
    /**
     * @hash   -1553676594
     * @symbol  ?removeTrackedMapEntity\@MapItemSavedData\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void removeTrackedMapEntity(class BlockPos const &);
    /**
     * @hash   1870292552
     * @symbol  ?save\@MapItemSavedData\@\@QEAAXAEAVLevelStorage\@\@\@Z
     */
    MCAPI void save(class LevelStorage &);
    /**
     * @hash   -636492760
     * @symbol  ?serialize\@MapItemSavedData\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void serialize(class CompoundTag &) const;
    /**
     * @hash   1977866962
     * @symbol  ?setClientPixelsDirty\@MapItemSavedData\@\@QEAAX_N\@Z
     */
    MCAPI void setClientPixelsDirty(bool);
    /**
     * @hash   -904044173
     * @symbol  ?setDirtyForSaveAndPixelData\@MapItemSavedData\@\@QEAAXXZ
     */
    MCAPI void setDirtyForSaveAndPixelData();
    /**
     * @hash   -193248605
     * @symbol  ?setLocked\@MapItemSavedData\@\@QEAAXXZ
     */
    MCAPI void setLocked();
    /**
     * @hash   -2081182634
     * @symbol  ?setMapSection\@MapItemSavedData\@\@QEAAXV?$buffer_span\@I\@\@UChunkBounds\@1\@\@Z
     */
    MCAPI void setMapSection(class buffer_span<unsigned int>, struct MapItemSavedData::ChunkBounds);
    /**
     * @hash   -31833910
     * @symbol  ?setOrigin\@MapItemSavedData\@\@QEAAXVVec3\@\@HV?$AutomaticID\@VDimension\@\@H\@\@_N2AEBVBlockPos\@\@\@Z
     */
    MCAPI void setOrigin(class Vec3, int, class AutomaticID<class Dimension, int>, bool, bool, class BlockPos const &);
    /**
     * @hash   -401539597
     * @symbol  ?setPixel\@MapItemSavedData\@\@QEAA_NIII\@Z
     */
    MCAPI bool setPixel(unsigned int, unsigned int, unsigned int);
    /**
     * @hash   1901447915
     * @symbol  ?setPixelDirty\@MapItemSavedData\@\@QEAAXII\@Z
     */
    MCAPI void setPixelDirty(unsigned int, unsigned int);
    /**
     * @hash   -1326634042
     * @symbol  ?setScale\@MapItemSavedData\@\@QEAAXH\@Z
     */
    MCAPI void setScale(int);
    /**
     * @hash   -296015363
     * @symbol  ?setScaleAndParentMapId\@MapItemSavedData\@\@QEAAXHUActorUniqueID\@\@\@Z
     */
    MCAPI void setScaleAndParentMapId(int, struct ActorUniqueID);
    /**
     * @hash   -617244619
     * @symbol  ?tickByBlock\@MapItemSavedData\@\@QEAAXAEBVBlockPos\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void tickByBlock(class BlockPos const &, class BlockSource &);
    /**
     * @hash   -1849501712
     * @symbol  ?tickCarriedBy\@MapItemSavedData\@\@QEAAXAEAVActor\@\@PEBVCompoundTag\@\@\@Z
     */
    MCAPI void tickCarriedBy(class Actor &, class CompoundTag const *);
    /**
     * @hash   -1828015328
     * @symbol  ?trySave\@MapItemSavedData\@\@QEAAXAEAVLevelStorage\@\@\@Z
     */
    MCAPI void trySave(class LevelStorage &);
    /**
     * @hash   625808476
     * @symbol  ??1MapItemSavedData\@\@QEAA\@XZ
     */
    MCAPI ~MapItemSavedData();
    /**
     * @hash   335849321
     * @symbol  ?getSerializationKey\@MapItemSavedData\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorUniqueID\@\@\@Z
     */
    MCAPI static std::string getSerializationKey(struct ActorUniqueID);

//private:
    /**
     * @hash   100349789
     * @symbol  ?_addDecoration\@MapItemSavedData\@\@AEAAXW4Type\@MapDecoration\@\@AEAVLevel\@\@AEBUUniqueId\@MapItemTrackedActor\@\@AEBVVec3\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI void _addDecoration(enum class MapDecoration::Type, class Level &, struct MapItemTrackedActor::UniqueId const &, class Vec3 const &, std::string const &, class mce::Color const &);
    /**
     * @hash   2054821629
     * @symbol  ?_addTrackedMapEntity\@MapItemSavedData\@\@AEAA?AV?$shared_ptr\@VMapItemTrackedActor\@\@\@std\@\@AEBUUniqueId\@MapItemTrackedActor\@\@AEAVBlockSource\@\@W4Type\@MapDecoration\@\@\@Z
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor> _addTrackedMapEntity(struct MapItemTrackedActor::UniqueId const &, class BlockSource &, enum class MapDecoration::Type);
    /**
     * @hash   993860838
     * @symbol  ?_deserializeData\@MapItemSavedData\@\@AEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void _deserializeData(class CompoundTag const &);
    /**
     * @hash   1298933545
     * @symbol  ?_removeDecoration\@MapItemSavedData\@\@AEAAXAEBUUniqueId\@MapItemTrackedActor\@\@\@Z
     */
    MCAPI void _removeDecoration(struct MapItemTrackedActor::UniqueId const &);
    /**
     * @hash   1069712196
     * @symbol  ?_removeTrackedMapEntity\@MapItemSavedData\@\@AEAAXAEBUUniqueId\@MapItemTrackedActor\@\@\@Z
     */
    MCAPI void _removeTrackedMapEntity(struct MapItemTrackedActor::UniqueId const &);
    /**
     * @hash   -1865223177
     * @symbol  ?_updateTrackedEntityDecoration\@MapItemSavedData\@\@AEAA_NAEAVBlockSource\@\@V?$shared_ptr\@VMapItemTrackedActor\@\@\@std\@\@\@Z
     */
    MCAPI bool _updateTrackedEntityDecoration(class BlockSource &, class std::shared_ptr<class MapItemTrackedActor>);
    /**
     * @hash   -1916260292
     * @symbol  ?_updateTrackedEntityDecorations\@MapItemSavedData\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _updateTrackedEntityDecorations(class BlockSource &);
    /**
     * @hash   1581256970
     * @symbol  ?_updateTrackedPlayerDecorations\@MapItemSavedData\@\@AEAAXAEAVBlockSource\@\@AEAVPlayer\@\@AEAVVec3\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVColor\@mce\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEAW4Type\@MapDecoration\@\@\@Z
     */
    MCAPI void _updateTrackedPlayerDecorations(class BlockSource &, class Player &, class Vec3 &, std::string &, class mce::Color &, class AutomaticID<class Dimension, int>, enum class MapDecoration::Type &);

private:

};