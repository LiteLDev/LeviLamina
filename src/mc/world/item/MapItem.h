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
    virtual bool inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int slot, bool selected) const
        /*override*/;

    virtual void refreshedInContainer(::ItemStackBase const& stack, ::Level& level) const /*override*/;

    virtual ::std::unique_ptr<::Packet> getUpdatePacket(::ItemStack const& item, ::Level& level, ::Actor& player) const
        /*override*/;

    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;

    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const
    ) const /*override*/;

    virtual bool hasSameRelevantUserData(::ItemStackBase const& stack, ::ItemStackBase const& other) const /*override*/;

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const& item, int, bool) const /*override*/;

    virtual ::Item& setIconInfo(::std::string const& name, int id) /*override*/;

    virtual void fixupCommon(::ItemStackBase& stack, ::ILevel& level) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void blockTick(::ItemStackBase const& item, ::BlockSource& region, ::BlockPos const& pos) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _scheduleMapChunkRendering(
        ::Dimension&                    dimension,
        ::MapItemSavedData const&       original,
        ::MapItemSavedData::ChunkBounds bb,
        ::std::shared_ptr<bool>         chunksRefCount
    );

    MCAPI static bool doesDisplayPlayerMarkers(::ItemStackBase const& item);

    MCNAPI static ::ActorUniqueID getMapId(::CompoundTag const* tag);

    MCNAPI static void markForRegeneration(::ItemStackBase& item);

    MCAPI static void renderBiomePreviewMap(::Dimension& dimension, ::MapItemSavedData& data);

    MCNAPI static bool sampleMapData(
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

    MCNAPI static void serializeMapData(::std::vector<::MapSample> const& mapSamples, ::std::string& output);

    MCAPI static void setItemInstanceInfo(::ItemStackBase& item, ::MapItemSavedData& savedData);

    MCNAPI static void setMapNameIndex(::ItemStack& item, int mapNameIndex);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& TAG_MAP_INIT();

    MCNAPI static ::std::string const& TAG_MAP_NAME_INDEX();

    MCNAPI static ::std::string const& TAG_MAP_PLAYER_DISPLAY();

    MCNAPI static ::std::string const& TAG_MAP_REGENERATE();

    MCNAPI static ::std::string const& TAG_MAP_SCALE();

    MCNAPI static ::std::string const& TAG_MAP_SCALING();

    MCNAPI static ::std::string const& TAG_MAP_UUID();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $inventoryTick(::ItemStack& item, ::Level& level, ::Actor& owner, int slot, bool selected) const;

    MCNAPI void $refreshedInContainer(::ItemStackBase const& stack, ::Level& level) const;

    MCNAPI ::std::unique_ptr<::Packet> $getUpdatePacket(::ItemStack const& item, ::Level& level, ::Actor& player) const;

    MCNAPI ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;

    MCNAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const
    ) const;

    MCNAPI bool $hasSameRelevantUserData(::ItemStackBase const& stack, ::ItemStackBase const& other) const;

    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const& item, int, bool) const;

    MCNAPI ::Item& $setIconInfo(::std::string const& name, int id);

    MCNAPI void $fixupCommon(::ItemStackBase& stack, ::ILevel& level) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
