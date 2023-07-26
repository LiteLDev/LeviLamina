#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/saveddata/maps/MapDecoration.h"
#include "mc/world/level/saveddata/maps/MapItemTrackedActor.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class MapItemSavedData {
public:
    // MapItemSavedData inner types declare
    // clang-format off
    struct ChunkBounds;
    // clang-format on

    // MapItemSavedData inner types define
    struct ChunkBounds {

    public:
        // prevent constructor by default
        ChunkBounds& operator=(ChunkBounds const&) = delete;
        ChunkBounds(ChunkBounds const&)            = delete;
        ChunkBounds()                              = delete;
    };

public:
    // prevent constructor by default
    MapItemSavedData& operator=(MapItemSavedData const&) = delete;
    MapItemSavedData(MapItemSavedData const&)            = delete;
    MapItemSavedData()                                   = delete;

public:
    /**
     * @symbol ??0MapItemSavedData\@\@QEAA\@UActorUniqueID\@\@_N\@Z
     */
    MCAPI MapItemSavedData(struct ActorUniqueID, bool); // NOLINT
    /**
     * @symbol
     * ?addTrackedMapEntity\@MapItemSavedData\@\@QEAA?AV?$shared_ptr\@VMapItemTrackedActor\@\@\@std\@\@AEBVBlockPos\@\@AEAVBlockSource\@\@W4Type\@MapDecoration\@\@\@Z
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor>
    addTrackedMapEntity(class BlockPos const&, class BlockSource&, enum class MapDecoration::Type); // NOLINT
    /**
     * @symbol
     * ?addTrackedMapEntity\@MapItemSavedData\@\@QEAA?AV?$shared_ptr\@VMapItemTrackedActor\@\@\@std\@\@AEAVActor\@\@W4Type\@MapDecoration\@\@\@Z
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor>
    addTrackedMapEntity(class Actor&, enum class MapDecoration::Type); // NOLINT
    /**
     * @symbol ?areClientPixelsDirty\@MapItemSavedData\@\@QEBA_NXZ
     */
    MCAPI bool areClientPixelsDirty() const; // NOLINT
    /**
     * @symbol ?checkNeedsResampling\@MapItemSavedData\@\@QEAAXXZ
     */
    MCAPI void checkNeedsResampling(); // NOLINT
    /**
     * @symbol ?copyMapData\@MapItemSavedData\@\@QEAAXAEBV1\@\@Z
     */
    MCAPI void copyMapData(class MapItemSavedData const&); // NOLINT
    /**
     * @symbol ?deserialize\@MapItemSavedData\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void deserialize(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?enableUnlimitedTracking\@MapItemSavedData\@\@QEAAXXZ
     */
    MCAPI void enableUnlimitedTracking(); // NOLINT
    /**
     * @symbol
     * ?getClientPixels\@MapItemSavedData\@\@QEAAAEAV?$vector\@UClientTerrainPixel\@\@V?$allocator\@UClientTerrainPixel\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ClientTerrainPixel>& getClientPixels(); // NOLINT
    /**
     * @symbol ?getClientSamplingLock\@MapItemSavedData\@\@QEAAPEAVSpinLock\@\@XZ
     */
    MCAPI class SpinLock* getClientSamplingLock(); // NOLINT
    /**
     * @symbol
     * ?getFullDataPacket\@MapItemSavedData\@\@QEBA?AV?$unique_ptr\@VPacket\@\@U?$default_delete\@VPacket\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class Packet> getFullDataPacket() const; // NOLINT
    /**
     * @symbol ?getMapId\@MapItemSavedData\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getMapId() const; // NOLINT
    /**
     * @symbol ?getParentMapId\@MapItemSavedData\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getParentMapId() const; // NOLINT
    /**
     * @symbol ?getPixels\@MapItemSavedData\@\@QEBA?AV?$buffer_span\@I\@\@XZ
     */
    MCAPI class buffer_span<unsigned int> getPixels() const; // NOLINT
    /**
     * @symbol
     * ?getTrackedMapEntity\@MapItemSavedData\@\@QEAA?AV?$shared_ptr\@VMapItemTrackedActor\@\@\@std\@\@AEAVActor\@\@\@Z
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor> getTrackedMapEntity(class Actor&); // NOLINT
    /**
     * @symbol
     * ?getUpdatePacket\@MapItemSavedData\@\@QEBA?AV?$unique_ptr\@VPacket\@\@U?$default_delete\@VPacket\@\@\@std\@\@\@std\@\@AEBVItemStack\@\@AEAVLevel\@\@AEAVActor\@\@\@Z
     */
    MCAPI std::unique_ptr<class Packet>
          getUpdatePacket(class ItemStack const&, class Level&, class Actor&) const; // NOLINT
    /**
     * @symbol
     * ?getUpdatePacket\@MapItemSavedData\@\@QEBA?AV?$unique_ptr\@VPacket\@\@U?$default_delete\@VPacket\@\@\@std\@\@\@std\@\@AEAVLevel\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI std::unique_ptr<class Packet> getUpdatePacket(class Level&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?hasParentMap\@MapItemSavedData\@\@QEBA_NXZ
     */
    MCAPI bool hasParentMap() const; // NOLINT
    /**
     * @symbol ?isAdjacent\@MapItemSavedData\@\@QEBA_NAEBV1\@H\@Z
     */
    MCAPI bool isAdjacent(class MapItemSavedData const&, int) const; // NOLINT
    /**
     * @symbol ?isChunkAllEmpty\@MapItemSavedData\@\@QEBA_NUChunkBounds\@1\@\@Z
     */
    MCAPI bool isChunkAllEmpty(struct MapItemSavedData::ChunkBounds) const; // NOLINT
    /**
     * @symbol ?isFullyExplored\@MapItemSavedData\@\@QEBA_NXZ
     */
    MCAPI bool isFullyExplored() const; // NOLINT
    /**
     * @symbol ?isLocked\@MapItemSavedData\@\@QEBA_NXZ
     */
    MCAPI bool isLocked() const; // NOLINT
    /**
     * @symbol ?needsResampling\@MapItemSavedData\@\@QEBA_NXZ
     */
    MCAPI bool needsResampling() const; // NOLINT
    /**
     * @symbol ?removeTrackedMapEntity\@MapItemSavedData\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void removeTrackedMapEntity(class BlockPos const&); // NOLINT
    /**
     * @symbol ?save\@MapItemSavedData\@\@QEAAXAEAVLevelStorage\@\@\@Z
     */
    MCAPI void save(class LevelStorage&); // NOLINT
    /**
     * @symbol ?serialize\@MapItemSavedData\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void serialize(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?setClientPixelsDirty\@MapItemSavedData\@\@QEAAX_N\@Z
     */
    MCAPI void setClientPixelsDirty(bool); // NOLINT
    /**
     * @symbol ?setDirtyForSaveAndPixelData\@MapItemSavedData\@\@QEAAXXZ
     */
    MCAPI void setDirtyForSaveAndPixelData(); // NOLINT
    /**
     * @symbol ?setLocked\@MapItemSavedData\@\@QEAAXXZ
     */
    MCAPI void setLocked(); // NOLINT
    /**
     * @symbol ?setMapSection\@MapItemSavedData\@\@QEAAXV?$buffer_span\@I\@\@UChunkBounds\@1\@\@Z
     */
    MCAPI void setMapSection(class buffer_span<unsigned int>, struct MapItemSavedData::ChunkBounds); // NOLINT
    /**
     * @symbol ?setOrigin\@MapItemSavedData\@\@QEAAXVVec3\@\@HV?$AutomaticID\@VDimension\@\@H\@\@_N2AEBVBlockPos\@\@\@Z
     */
    MCAPI void
    setOrigin(class Vec3, int, class AutomaticID<class Dimension, int>, bool, bool, class BlockPos const&); // NOLINT
    /**
     * @symbol ?setPixel\@MapItemSavedData\@\@QEAA_NIII\@Z
     */
    MCAPI bool setPixel(unsigned int, unsigned int, unsigned int); // NOLINT
    /**
     * @symbol ?setPixelDirty\@MapItemSavedData\@\@QEAAXII\@Z
     */
    MCAPI void setPixelDirty(unsigned int, unsigned int); // NOLINT
    /**
     * @symbol ?setScale\@MapItemSavedData\@\@QEAAXH\@Z
     */
    MCAPI void setScale(int); // NOLINT
    /**
     * @symbol ?setScaleAndParentMapId\@MapItemSavedData\@\@QEAAXHUActorUniqueID\@\@\@Z
     */
    MCAPI void setScaleAndParentMapId(int, struct ActorUniqueID); // NOLINT
    /**
     * @symbol ?tickByBlock\@MapItemSavedData\@\@QEAAXAEBVBlockPos\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void tickByBlock(class BlockPos const&, class BlockSource&); // NOLINT
    /**
     * @symbol ?tickCarriedBy\@MapItemSavedData\@\@QEAAXAEAVActor\@\@PEBVCompoundTag\@\@\@Z
     */
    MCAPI void tickCarriedBy(class Actor&, class CompoundTag const*); // NOLINT
    /**
     * @symbol ?trySave\@MapItemSavedData\@\@QEAAXAEAVLevelStorage\@\@\@Z
     */
    MCAPI void trySave(class LevelStorage&); // NOLINT
    /**
     * @symbol ??1MapItemSavedData\@\@QEAA\@XZ
     */
    MCAPI ~MapItemSavedData(); // NOLINT
    /**
     * @symbol
     * ?getSerializationKey\@MapItemSavedData\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorUniqueID\@\@\@Z
     */
    MCAPI static std::string getSerializationKey(struct ActorUniqueID); // NOLINT

    // private:
    /**
     * @symbol
     * ?_addDecoration\@MapItemSavedData\@\@AEAAXW4Type\@MapDecoration\@\@AEAVLevel\@\@AEBUUniqueId\@MapItemTrackedActor\@\@AEBVVec3\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI void
    _addDecoration(enum class MapDecoration::Type, class Level&, struct MapItemTrackedActor::UniqueId const&, class Vec3 const&, std::string const&, class mce::Color const&); // NOLINT
    /**
     * @symbol
     * ?_addTrackedMapEntity\@MapItemSavedData\@\@AEAA?AV?$shared_ptr\@VMapItemTrackedActor\@\@\@std\@\@AEBUUniqueId\@MapItemTrackedActor\@\@AEAVBlockSource\@\@W4Type\@MapDecoration\@\@\@Z
     */
    MCAPI class std::shared_ptr<class MapItemTrackedActor> _addTrackedMapEntity(
        struct MapItemTrackedActor::UniqueId const&,
        class BlockSource&,
        enum class MapDecoration::Type
    ); // NOLINT
    /**
     * @symbol ?_deserializeData\@MapItemSavedData\@\@AEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void _deserializeData(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?_removeDecoration\@MapItemSavedData\@\@AEAAXAEBUUniqueId\@MapItemTrackedActor\@\@\@Z
     */
    MCAPI void _removeDecoration(struct MapItemTrackedActor::UniqueId const&); // NOLINT
    /**
     * @symbol ?_removeTrackedMapEntity\@MapItemSavedData\@\@AEAAXAEBUUniqueId\@MapItemTrackedActor\@\@\@Z
     */
    MCAPI void _removeTrackedMapEntity(struct MapItemTrackedActor::UniqueId const&); // NOLINT
    /**
     * @symbol
     * ?_updateTrackedEntityDecoration\@MapItemSavedData\@\@AEAA_NAEAVBlockSource\@\@V?$shared_ptr\@VMapItemTrackedActor\@\@\@std\@\@\@Z
     */
    MCAPI bool
    _updateTrackedEntityDecoration(class BlockSource&, class std::shared_ptr<class MapItemTrackedActor>); // NOLINT
    /**
     * @symbol ?_updateTrackedEntityDecorations\@MapItemSavedData\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _updateTrackedEntityDecorations(class BlockSource&); // NOLINT
    /**
     * @symbol
     * ?_updateTrackedPlayerDecorations\@MapItemSavedData\@\@AEAAXAEAVBlockSource\@\@AEAVPlayer\@\@AEAVVec3\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVColor\@mce\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEAW4Type\@MapDecoration\@\@\@Z
     */
    MCAPI void
    _updateTrackedPlayerDecorations(class BlockSource&, class Player&, class Vec3&, std::string&, class mce::Color&, class AutomaticID<class Dimension, int>, enum class MapDecoration::Type&); // NOLINT

private:
};
