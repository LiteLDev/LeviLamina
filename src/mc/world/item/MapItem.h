#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/ComplexItem.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"
#include "mc/world/level/saveddata/maps/MapItemSavedData.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class MapItem : public ::ComplexItem {
public:
    // prevent constructor by default
    MapItem& operator=(MapItem const&);
    MapItem(MapItem const&);
    MapItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MapItem() = default;

    // vIndex: 48
    virtual void
    appendFormattedHovertext(class ItemStackBase const& stack, class Level& level, std::string& hovertext, bool) const;

    // vIndex: 83
    virtual std::string
    buildDescriptionId(class ItemDescriptor const& itemDescriptor, class CompoundTag const* userData) const;

    // vIndex: 88
    virtual bool inventoryTick(class ItemStack& item, class Level& level, class Actor& owner, int, bool selected) const;

    // vIndex: 89
    virtual void refreshedInContainer(class ItemStackBase const& stack, class Level& level) const;

    // vIndex: 93
    virtual void fixupCommon(class ItemStackBase& stack, class Level& level) const;

    // vIndex: 101
    virtual bool hasSameRelevantUserData(class ItemStackBase const& stack, class ItemStackBase const& other) const;

    // vIndex: 103
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 104
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool) const;

    // vIndex: 119
    virtual std::unique_ptr<class Packet>
    getUpdatePacket(class ItemStack const& item, class Level& level, class Actor& player) const;

    MCAPI MapItem(std::string const& itemName, short itemId);

    MCAPI void blockTick(class ItemStack& item, class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void update(class Level& level, class Actor& player, class MapItemSavedData& map) const;

    MCAPI static bool doesDisplayPlayerMarkers(class ItemStack const& item);

    MCAPI static struct ActorUniqueID getMapId(class CompoundTag const* tag);

    MCAPI static void markForRegeneration(class ItemStackBase& item);

    MCAPI static void renderBiomePreviewMap(class Dimension& dimension, class MapItemSavedData& data);

    MCAPI static bool sampleMapData(
        class BlockSource&                      region,
        int                                     blocksPerTexel,
        class BlockPos const&                   worldOrigin,
        class BlockPos const&                   updateOrigin,
        int                                     imageWidth,
        int                                     imageHeight,
        std::vector<struct MapSample>*          output,
        class MapItemSavedData*                 mapData,
        std::vector<struct ClientTerrainPixel>* clientPixels
    );

    MCAPI static void serializeMapData(std::vector<struct MapSample> const& mapSamples, std::string& output);

    MCAPI static void setItemInstanceInfo(class ItemStackBase& item, class MapItemSavedData& savedData);

    MCAPI static void setMapNameIndex(class ItemStack& item, int mapNameIndex);

    MCAPI static std::string const TAG_MAP_INIT;

    MCAPI static std::string const TAG_MAP_NAME_INDEX;

    MCAPI static std::string const TAG_MAP_PLAYER_DISPLAY;

    MCAPI static std::string const TAG_MAP_REGENERATE;

    MCAPI static std::string const TAG_MAP_SCALE;

    MCAPI static std::string const TAG_MAP_SCALING;

    MCAPI static std::string const TAG_MAP_UUID;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _scheduleMapChunkRendering(
        class Dimension&                     dimension,
        class MapItemSavedData const&        original,
        struct MapItemSavedData::ChunkBounds bb,
        std::shared_ptr<bool>                chunksRefCount
    );

    // NOLINTEND
};
