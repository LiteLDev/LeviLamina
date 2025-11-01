#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ComplexItem.h"
#include "mc/world/level/saveddata/maps/MapItemSavedData.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class CompoundTag;
class Dimension;
class ILevel;
class Item;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class MapItemSavedData;
class Packet;
struct ActorUniqueID;
struct ClientTerrainPixel;
struct MapSample;
struct ResolvedItemIconInfo;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class MapItem : public ::ComplexItem {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 95
    virtual bool inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int slot, bool selected) const
        /*override*/;

    // vIndex: 96
    virtual void refreshedInContainer(::ItemStackBase const& stack, ::Level& level) const /*override*/;

    // vIndex: 124
    virtual ::std::unique_ptr<::Packet> getUpdatePacket(::ItemStack const& item, ::Level& level, ::Actor& player) const
        /*override*/;

    // vIndex: 90
    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;

    // vIndex: 53
    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;

    // vIndex: 108
    virtual bool hasSameRelevantUserData(::ItemStackBase const& stack, ::ItemStackBase const& other) const /*override*/;

    // vIndex: 111
    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const& item, int, bool) const /*override*/;

    // vIndex: 110
    virtual ::Item& setIconInfo(::std::string const& name, int id) /*override*/;

    // vIndex: 99
    virtual void fixupCommon(::ItemStackBase& stack, ::ILevel& level) const /*override*/;

    // vIndex: 0
    virtual ~MapItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void updateMap(::Level& level, ::Actor& player, ::MapItemSavedData& map) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _scheduleMapChunkRendering(
        ::Dimension&                    dimension,
        ::MapItemSavedData const&       original,
        ::MapItemSavedData::ChunkBounds bb,
        ::std::shared_ptr<bool>         chunksRefCount
    );

    MCAPI static bool doesDisplayPlayerMarkers(::ItemStackBase const& item);

    MCAPI static ::ActorUniqueID getMapId(::CompoundTag const* tag);

    MCAPI static void markForRegeneration(::ItemStackBase& item);

    MCAPI static void renderBiomePreviewMap(::Dimension& dimension, ::MapItemSavedData& data);

    MCAPI static bool sampleMapData(
        ::BlockSource&                       region,
        int                                  blocksPerTexel,
        ::BlockPos const&                    worldOrigin,
        ::BlockPos const&                    updateOrigin,
        int                                  imageWidth,
        int                                  imageHeight,
        ::std::vector<::MapSample>*          output,
        ::MapItemSavedData*                  mapData,
        ::std::vector<::ClientTerrainPixel>* clientPixels
    );

    MCAPI static void serializeMapData(::std::vector<::MapSample> const& mapSamples, ::std::string& output);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& TAG_MAP_INIT();

    MCAPI static ::std::string const& TAG_MAP_NAME_INDEX();

    MCAPI static ::std::string const& TAG_MAP_PLAYER_DISPLAY();

    MCAPI static ::std::string const& TAG_MAP_REGENERATE();

    MCAPI static ::std::string const& TAG_MAP_SCALE();

    MCAPI static ::std::string const& TAG_MAP_SCALING();

    MCAPI static ::std::string const& TAG_MAP_UUID();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int slot, bool selected) const;

    MCAPI void $refreshedInContainer(::ItemStackBase const& stack, ::Level& level) const;

    MCAPI ::std::unique_ptr<::Packet> $getUpdatePacket(::ItemStack const& item, ::Level& level, ::Actor& player) const;

    MCAPI ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;

    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;

    MCAPI bool $hasSameRelevantUserData(::ItemStackBase const& stack, ::ItemStackBase const& other) const;

    MCFOLD ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const& item, int, bool) const;

    MCFOLD ::Item& $setIconInfo(::std::string const& name, int id);

    MCAPI void $fixupCommon(::ItemStackBase& stack, ::ILevel& level) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
