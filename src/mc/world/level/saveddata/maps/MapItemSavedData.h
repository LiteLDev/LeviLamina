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
    // symbol: ??0MapItemSavedData@@QEAA@UActorUniqueID@@_N@Z
    MCAPI MapItemSavedData(struct ActorUniqueID mapId, bool);

    // symbol:
    // ?addTrackedMapEntity@MapItemSavedData@@QEAA?AV?$shared_ptr@VMapItemTrackedActor@@@std@@AEAVActor@@W4Type@MapDecoration@@@Z
    MCAPI std::shared_ptr<class MapItemTrackedActor>
          addTrackedMapEntity(class Actor& entity, ::MapDecoration::Type decorationType);

    // symbol:
    // ?addTrackedMapEntity@MapItemSavedData@@QEAA?AV?$shared_ptr@VMapItemTrackedActor@@@std@@AEBVBlockPos@@AEAVBlockSource@@W4Type@MapDecoration@@@Z
    MCAPI std::shared_ptr<class MapItemTrackedActor> addTrackedMapEntity(
        class BlockPos const& position,
        class BlockSource&    region,
        ::MapDecoration::Type decorationType
    );

    // symbol: ?areClientPixelsDirty@MapItemSavedData@@QEBA_NXZ
    MCAPI bool areClientPixelsDirty() const;

    // symbol: ?checkNeedsResampling@MapItemSavedData@@QEAAXXZ
    MCAPI void checkNeedsResampling();

    // symbol: ?copyMapData@MapItemSavedData@@QEAAXAEBV1@@Z
    MCAPI void copyMapData(class MapItemSavedData const& map);

    // symbol: ?deserialize@MapItemSavedData@@QEAAXAEBVCompoundTag@@@Z
    MCAPI void deserialize(class CompoundTag const& tag);

    // symbol: ?enableUnlimitedTracking@MapItemSavedData@@QEAAXXZ
    MCAPI void enableUnlimitedTracking();

    // symbol:
    // ?getClientPixels@MapItemSavedData@@QEAAAEAV?$vector@UClientTerrainPixel@@V?$allocator@UClientTerrainPixel@@@std@@@std@@XZ
    MCAPI std::vector<struct ClientTerrainPixel>& getClientPixels();

    // symbol: ?getClientSamplingLock@MapItemSavedData@@QEAAPEAVSpinLock@@XZ
    MCAPI class SpinLock* getClientSamplingLock();

    // symbol:
    // ?getFullDataPacket@MapItemSavedData@@QEBA?AV?$unique_ptr@VPacket@@U?$default_delete@VPacket@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class Packet> getFullDataPacket() const;

    // symbol: ?getMapId@MapItemSavedData@@QEBA?AUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID getMapId() const;

    // symbol: ?getParentMapId@MapItemSavedData@@QEBA?AUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID getParentMapId() const;

    // symbol: ?getPixels@MapItemSavedData@@QEBA?AV?$buffer_span@I@@XZ
    MCAPI class buffer_span<uint> getPixels() const;

    // symbol: ?getTrackedMapEntity@MapItemSavedData@@QEAA?AV?$shared_ptr@VMapItemTrackedActor@@@std@@AEAVActor@@@Z
    MCAPI std::shared_ptr<class MapItemTrackedActor> getTrackedMapEntity(class Actor& entity);

    // symbol:
    // ?getUpdatePacket@MapItemSavedData@@QEBA?AV?$unique_ptr@VPacket@@U?$default_delete@VPacket@@@std@@@std@@AEAVLevel@@AEBVBlockPos@@@Z
    MCAPI std::unique_ptr<class Packet> getUpdatePacket(class Level& level, class BlockPos const& pos) const;

    // symbol:
    // ?getUpdatePacket@MapItemSavedData@@QEBA?AV?$unique_ptr@VPacket@@U?$default_delete@VPacket@@@std@@@std@@AEBVItemStack@@AEAVLevel@@AEAVActor@@@Z
    MCAPI std::unique_ptr<class Packet>
          getUpdatePacket(class ItemStack const& itemInstance, class Level& level, class Actor& entity) const;

    // symbol: ?hasParentMap@MapItemSavedData@@QEBA_NXZ
    MCAPI bool hasParentMap() const;

    // symbol: ?isAdjacent@MapItemSavedData@@QEBA_NAEBV1@H@Z
    MCAPI bool isAdjacent(class MapItemSavedData const& other, int dir) const;

    // symbol: ?isChunkAllEmpty@MapItemSavedData@@QEBA_NUChunkBounds@1@@Z
    MCAPI bool isChunkAllEmpty(struct MapItemSavedData::ChunkBounds bb) const;

    // symbol: ?isFullyExplored@MapItemSavedData@@QEBA_NXZ
    MCAPI bool isFullyExplored() const;

    // symbol: ?isLocked@MapItemSavedData@@QEBA_NXZ
    MCAPI bool isLocked() const;

    // symbol: ?needsResampling@MapItemSavedData@@QEBA_NXZ
    MCAPI bool needsResampling() const;

    // symbol: ?removeTrackedMapEntity@MapItemSavedData@@QEAAXAEBVBlockPos@@@Z
    MCAPI void removeTrackedMapEntity(class BlockPos const& position);

    // symbol: ?save@MapItemSavedData@@QEAAXAEAVLevelStorage@@@Z
    MCAPI void save(class LevelStorage& storage);

    // symbol: ?serialize@MapItemSavedData@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void serialize(class CompoundTag& tag) const;

    // symbol: ?setClientPixelsDirty@MapItemSavedData@@QEAAX_N@Z
    MCAPI void setClientPixelsDirty(bool isDirty);

    // symbol: ?setDirtyForSaveAndPixelData@MapItemSavedData@@QEAAXXZ
    MCAPI void setDirtyForSaveAndPixelData();

    // symbol: ?setLocked@MapItemSavedData@@QEAAXXZ
    MCAPI void setLocked();

    // symbol: ?setMapSection@MapItemSavedData@@QEAAXV?$buffer_span@I@@UChunkBounds@1@@Z
    MCAPI void setMapSection(class buffer_span<uint> src, struct MapItemSavedData::ChunkBounds bb);

    // symbol: ?setOrigin@MapItemSavedData@@QEAAXVVec3@@HV?$AutomaticID@VDimension@@H@@_N2AEBVBlockPos@@@Z
    MCAPI void setOrigin(
        class Vec3            origin,
        int                   mapScale,
        DimensionType         dimension,
        bool                  isLegacyLevel,
        bool                  isCentered,
        class BlockPos const& worldCenter
    );

    // symbol: ?setPixel@MapItemSavedData@@QEAA_NIII@Z
    MCAPI bool setPixel(uint color, uint x, uint y);

    // symbol: ?setPixelDirty@MapItemSavedData@@QEAAXII@Z
    MCAPI void setPixelDirty(uint x, uint y);

    // symbol: ?setScale@MapItemSavedData@@QEAAXH@Z
    MCAPI void setScale(int mapScale);

    // symbol: ?setScaleAndParentMapId@MapItemSavedData@@QEAAXHUActorUniqueID@@@Z
    MCAPI void setScaleAndParentMapId(int mapScale, struct ActorUniqueID);

    // symbol: ?tickByBlock@MapItemSavedData@@QEAAXAEBVBlockPos@@AEAVBlockSource@@@Z
    MCAPI void tickByBlock(class BlockPos const& pos, class BlockSource& region);

    // symbol: ?tickCarriedBy@MapItemSavedData@@QEAAXAEAVActor@@PEBVCompoundTag@@@Z
    MCAPI void tickCarriedBy(class Actor& player, class CompoundTag const* item);

    // symbol: ?trySave@MapItemSavedData@@QEAAXAEAVLevelStorage@@@Z
    MCAPI void trySave(class LevelStorage& storage);

    // symbol: ??1MapItemSavedData@@QEAA@XZ
    MCAPI ~MapItemSavedData();

    // symbol:
    // ?getSerializationKey@MapItemSavedData@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@@Z
    MCAPI static std::string getSerializationKey(struct ActorUniqueID);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_addDecoration@MapItemSavedData@@AEAAXW4Type@MapDecoration@@AEAVLevel@@AEBUUniqueId@MapItemTrackedActor@@AEBVVec3@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVColor@mce@@@Z
    MCAPI void _addDecoration(
        ::MapDecoration::Type                       type,
        class Level&                                level,
        struct MapItemTrackedActor::UniqueId const& key,
        class Vec3 const&                           position,
        std::string const&                          label,
        class mce::Color const&                     color
    );

    // symbol:
    // ?_addTrackedMapEntity@MapItemSavedData@@AEAA?AV?$shared_ptr@VMapItemTrackedActor@@@std@@AEBUUniqueId@MapItemTrackedActor@@AEAVBlockSource@@W4Type@MapDecoration@@@Z
    MCAPI std::shared_ptr<class MapItemTrackedActor> _addTrackedMapEntity(
        struct MapItemTrackedActor::UniqueId const& key,
        class BlockSource&                          region,
        ::MapDecoration::Type                       decorationType
    );

    // symbol: ?_deserializeData@MapItemSavedData@@AEAAXAEBVCompoundTag@@@Z
    MCAPI void _deserializeData(class CompoundTag const& tag);

    // symbol: ?_removeDecoration@MapItemSavedData@@AEAAXAEBUUniqueId@MapItemTrackedActor@@@Z
    MCAPI void _removeDecoration(struct MapItemTrackedActor::UniqueId const& id);

    // symbol: ?_removeTrackedMapEntity@MapItemSavedData@@AEAAXAEBUUniqueId@MapItemTrackedActor@@@Z
    MCAPI void _removeTrackedMapEntity(struct MapItemTrackedActor::UniqueId const& key);

    // symbol:
    // ?_updateTrackedEntityDecoration@MapItemSavedData@@AEAA_NAEAVBlockSource@@V?$shared_ptr@VMapItemTrackedActor@@@std@@@Z
    MCAPI bool _updateTrackedEntityDecoration(class BlockSource& region, std::shared_ptr<class MapItemTrackedActor>);

    // symbol: ?_updateTrackedEntityDecorations@MapItemSavedData@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _updateTrackedEntityDecorations(class BlockSource& region);

    // symbol:
    // ?_updateTrackedPlayerDecorations@MapItemSavedData@@AEAAXAEAVBlockSource@@AEAVPlayer@@AEAVVec3@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVColor@mce@@V?$AutomaticID@VDimension@@H@@AEAW4Type@MapDecoration@@@Z
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
