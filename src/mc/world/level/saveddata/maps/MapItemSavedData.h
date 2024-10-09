#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/buffer_span.h"
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
        ChunkBounds& operator=(ChunkBounds const&);
        ChunkBounds(ChunkBounds const&);
        ChunkBounds();
    };

public:
    // prevent constructor by default
    MapItemSavedData& operator=(MapItemSavedData const&);
    MapItemSavedData(MapItemSavedData const&);
    MapItemSavedData();

public:
    // NOLINTBEGIN
    MCAPI MapItemSavedData(struct ActorUniqueID mapId, bool isDLCworld);

    MCAPI std::shared_ptr<class MapItemTrackedActor>
          addTrackedMapEntity(class Actor& entity, ::MapDecoration::Type decorationType);

    MCAPI std::shared_ptr<class MapItemTrackedActor> addTrackedMapEntity(
        class BlockPos const& position,
        class BlockSource&    region,
        ::MapDecoration::Type decorationType
    );

    MCAPI bool areClientPixelsDirty() const;

    MCAPI void checkNeedsResampling();

    MCAPI void copyMapData(class MapItemSavedData const& map);

    MCAPI void deserialize(class CompoundTag const& tag);

    MCAPI void enableUnlimitedTracking();

    MCAPI std::vector<struct ClientTerrainPixel>& getClientPixels();

    MCAPI class SpinLock* getClientSamplingLock();

    MCAPI std::unique_ptr<class Packet> getFullDataPacket() const;

    MCAPI struct ActorUniqueID getMapId() const;

    MCAPI struct ActorUniqueID getParentMapId() const;

    MCAPI class buffer_span<uint> getPixels() const;

    MCAPI std::shared_ptr<class MapItemTrackedActor> getTrackedMapEntity(class Actor& entity);

    MCAPI std::unique_ptr<class Packet> getUpdatePacket(class Level&, class BlockPos const& pos) const;

    MCAPI std::unique_ptr<class Packet>
          getUpdatePacket(class ItemStack const&, class Level&, class Actor& entity) const;

    MCAPI bool hasParentMap() const;

    MCAPI bool isAdjacent(class MapItemSavedData const& other, int dir) const;

    MCAPI bool isChunkAllEmpty(struct MapItemSavedData::ChunkBounds bb) const;

    MCAPI bool isFullyExplored() const;

    MCAPI bool isLocked() const;

    MCAPI bool needsResampling() const;

    MCAPI void removeTrackedMapEntity(class BlockPos const& position);

    MCAPI void save(class LevelStorage& storage);

    MCAPI void serialize(class CompoundTag& tag) const;

    MCAPI void setClientPixelsDirty(bool isDirty);

    MCAPI void setDirtyForSaveAndPixelData();

    MCAPI void setLocked();

    MCAPI void setMapSection(class buffer_span<uint> src, struct MapItemSavedData::ChunkBounds bb);

    MCAPI void setOrigin(
        class Vec3            origin,
        int                   mapScale,
        DimensionType         dimension,
        bool                  isLegacyLevel,
        bool                  isCentered,
        class BlockPos const& worldCenter
    );

    MCAPI bool setPixel(uint color, uint x, uint y);

    MCAPI void setPixelDirty(uint x, uint y);

    MCAPI void setScale(int mapScale);

    MCAPI void setScaleAndParentMapId(int mapScale, struct ActorUniqueID parentMapId);

    MCAPI void tickByBlock(class BlockPos const& pos, class BlockSource& region);

    MCAPI void tickCarriedBy(class Actor& player, class CompoundTag const* item);

    MCAPI void trySave(class LevelStorage& storage);

    MCAPI ~MapItemSavedData();

    MCAPI static std::string getSerializationKey(struct ActorUniqueID id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addDecoration(
        ::MapDecoration::Type type,
        class Level&,
        struct MapItemTrackedActor::UniqueId const& key,
        class Vec3 const&                           position,
        std::string const&                          label,
        class mce::Color const&                     color
    );

    MCAPI std::shared_ptr<class MapItemTrackedActor> _addTrackedMapEntity(
        struct MapItemTrackedActor::UniqueId const& key,
        class BlockSource&                          region,
        ::MapDecoration::Type                       decorationType
    );

    MCAPI void _deserializeData(class CompoundTag const& tag);

    MCAPI void _removeDecoration(struct MapItemTrackedActor::UniqueId const& id);

    MCAPI void _removeTrackedMapEntity(struct MapItemTrackedActor::UniqueId const& key);

    MCAPI bool
    _updateTrackedEntityDecoration(class BlockSource& region, std::shared_ptr<class MapItemTrackedActor> trackedActor);

    MCAPI void _updateTrackedEntityDecorations(class BlockSource& region);

    MCAPI void _updateTrackedPlayerDecorations(
        class BlockSource&     region,
        class Player&          player,
        class Vec3&            decorationPos,
        std::string&           decorationLabel,
        class mce::Color&      decorationColor,
        DimensionType          dimensionID,
        ::MapDecoration::Type& type
    );

    // NOLINTEND
};
