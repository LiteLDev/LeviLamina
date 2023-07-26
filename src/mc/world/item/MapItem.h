#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"
#include "mc/world/level/saveddata/maps/MapItemSavedData.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class MapItem : public ::Item {

public:
    // prevent constructor by default
    MapItem& operator=(MapItem const&) = delete;
    MapItem(MapItem const&)            = delete;
    MapItem()                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11(); // NOLINT
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14(); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 21
     * @symbol __unk_vfn_21
     */
    virtual void __unk_vfn_21(); // NOLINT
    /**
     * @vftbl 51
     * @symbol __unk_vfn_51
     */
    virtual void __unk_vfn_51(); // NOLINT
    /**
     * @vftbl 53
     * @symbol __unk_vfn_53
     */
    virtual void __unk_vfn_53(); // NOLINT
    /**
     * @vftbl 60
     * @symbol
     * ?appendFormattedHovertext\@MapItem\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const; // NOLINT
    /**
     * @vftbl 66
     * @symbol __unk_vfn_66
     */
    virtual void __unk_vfn_66(); // NOLINT
    /**
     * @vftbl 70
     * @symbol __unk_vfn_70
     */
    virtual void __unk_vfn_70(); // NOLINT
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71(); // NOLINT
    /**
     * @vftbl 72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72(); // NOLINT
    /**
     * @vftbl 75
     * @symbol __unk_vfn_75
     */
    virtual void __unk_vfn_75(); // NOLINT
    /**
     * @vftbl 79
     * @symbol __unk_vfn_79
     */
    virtual void __unk_vfn_79(); // NOLINT
    /**
     * @vftbl 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80(); // NOLINT
    /**
     * @vftbl 95
     * @symbol
     * ?buildDescriptionId\@MapItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemDescriptor\@\@PEBVCompoundTag\@\@\@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const; // NOLINT
    /**
     * @vftbl 101
     * @symbol ?inventoryTick\@MapItem\@\@UEBA_NAEAVItemStack\@\@AEAVLevel\@\@AEAVActor\@\@H_N\@Z
     */
    virtual bool inventoryTick(class ItemStack&, class Level&, class Actor&, int, bool) const; // NOLINT
    /**
     * @vftbl 102
     * @symbol ?refreshedInContainer\@MapItem\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@\@Z
     */
    virtual void refreshedInContainer(class ItemStackBase const&, class Level&) const; // NOLINT
    /**
     * @vftbl 106
     * @symbol ?fixupCommon\@MapItem\@\@UEBAXAEAVItemStackBase\@\@AEAVLevel\@\@\@Z
     */
    virtual void fixupCommon(class ItemStackBase&, class Level&) const; // NOLINT
    /**
     * @vftbl 115
     * @symbol __unk_vfn_115
     */
    virtual void __unk_vfn_115(); // NOLINT
    /**
     * @vftbl 116
     * @symbol __unk_vfn_116
     */
    virtual void __unk_vfn_116(); // NOLINT
    /**
     * @vftbl 117
     * @symbol ?hasSameRelevantUserData\@MapItem\@\@UEBA_NAEBVItemStackBase\@\@0\@Z
     */
    virtual bool hasSameRelevantUserData(class ItemStackBase const&, class ItemStackBase const&) const; // NOLINT
    /**
     * @vftbl 119
     * @symbol
     * ?setIconInfo\@MapItem\@\@UEAAAEAVItem\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual class Item& setIconInfo(std::string const&, int); // NOLINT
    /**
     * @vftbl 120
     * @symbol ?getIconInfo\@MapItem\@\@UEBA?AUResolvedItemIconInfo\@\@AEBVItemStackBase\@\@H_N\@Z
     */
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const; // NOLINT
    /**
     * @vftbl 136
     * @symbol
     * ?getUpdatePacket\@MapItem\@\@UEBA?AV?$unique_ptr\@VPacket\@\@U?$default_delete\@VPacket\@\@\@std\@\@\@std\@\@AEBVItemStack\@\@AEAVLevel\@\@AEAVActor\@\@\@Z
     */
    virtual std::unique_ptr<class Packet>
    getUpdatePacket(class ItemStack const&, class Level&, class Actor&) const; // NOLINT
    /**
     * @symbol ??0MapItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@F\@Z
     */
    MCAPI MapItem(std::string const&, short); // NOLINT
    /**
     * @symbol ?blockTick\@MapItem\@\@QEBAXAEAVItemStack\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void blockTick(class ItemStack&, class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?update\@MapItem\@\@QEBAXAEAVLevel\@\@AEAVActor\@\@AEAVMapItemSavedData\@\@\@Z
     */
    MCAPI void update(class Level&, class Actor&, class MapItemSavedData&) const; // NOLINT
    /**
     * @symbol ?doesDisplayPlayerMarkers\@MapItem\@\@SA_NAEBVItemStack\@\@\@Z
     */
    MCAPI static bool doesDisplayPlayerMarkers(class ItemStack const&); // NOLINT
    /**
     * @symbol ?getMapId\@MapItem\@\@SA?AUActorUniqueID\@\@PEBVCompoundTag\@\@\@Z
     */
    MCAPI static struct ActorUniqueID getMapId(class CompoundTag const*); // NOLINT
    /**
     * @symbol ?markForRegeneration\@MapItem\@\@SAXAEAVItemInstance\@\@\@Z
     */
    MCAPI static void markForRegeneration(class ItemInstance&); // NOLINT
    /**
     * @symbol ?renderBiomePreviewMap\@MapItem\@\@SAXAEAVDimension\@\@AEAVMapItemSavedData\@\@\@Z
     */
    MCAPI static void renderBiomePreviewMap(class Dimension&, class MapItemSavedData&); // NOLINT
    /**
     * @symbol
     * ?sampleMapData\@MapItem\@\@SA_NAEAVBlockSource\@\@HAEBVBlockPos\@\@1HHPEAV?$vector\@UMapSample\@\@V?$allocator\@UMapSample\@\@\@std\@\@\@std\@\@PEAVMapItemSavedData\@\@PEAV?$vector\@UClientTerrainPixel\@\@V?$allocator\@UClientTerrainPixel\@\@\@std\@\@\@5\@\@Z
     */
    MCAPI static bool
    sampleMapData(class BlockSource&, int, class BlockPos const&, class BlockPos const&, int, int, std::vector<struct MapSample>*, class MapItemSavedData*, std::vector<struct ClientTerrainPixel>*); // NOLINT
    /**
     * @symbol
     * ?serializeMapData\@MapItem\@\@SAXAEBV?$vector\@UMapSample\@\@V?$allocator\@UMapSample\@\@\@std\@\@\@std\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI static void serializeMapData(std::vector<struct MapSample> const&, std::string&); // NOLINT
    /**
     * @symbol ?setItemInstanceInfo\@MapItem\@\@SAXAEAVItemInstance\@\@AEAVMapItemSavedData\@\@\@Z
     */
    MCAPI static void setItemInstanceInfo(class ItemInstance&, class MapItemSavedData&); // NOLINT
    /**
     * @symbol ?setItemInstanceInfo\@MapItem\@\@SAXAEAVItemStack\@\@AEAVMapItemSavedData\@\@\@Z
     */
    MCAPI static void setItemInstanceInfo(class ItemStack&, class MapItemSavedData&); // NOLINT
    /**
     * @symbol ?setMapNameIndex\@MapItem\@\@SAXAEAVItemStack\@\@H\@Z
     */
    MCAPI static void setMapNameIndex(class ItemStack&, int); // NOLINT
    /**
     * @symbol ?TAG_MAP_INIT\@MapItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_MAP_INIT; // NOLINT
    /**
     * @symbol
     * ?TAG_MAP_NAME_INDEX\@MapItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_MAP_NAME_INDEX; // NOLINT
    /**
     * @symbol
     * ?TAG_MAP_PLAYER_DISPLAY\@MapItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_MAP_PLAYER_DISPLAY; // NOLINT
    /**
     * @symbol
     * ?TAG_MAP_REGENERATE\@MapItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_MAP_REGENERATE; // NOLINT
    /**
     * @symbol ?TAG_MAP_SCALE\@MapItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_MAP_SCALE; // NOLINT
    /**
     * @symbol ?TAG_MAP_SCALING\@MapItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_MAP_SCALING; // NOLINT
    /**
     * @symbol ?TAG_MAP_UUID\@MapItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_MAP_UUID; // NOLINT

    // private:
    /**
     * @symbol
     * ?_makeNewExplorationMap\@MapItem\@\@AEBAXAEAVItemStack\@\@AEAVLevel\@\@PEAVActor\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _makeNewExplorationMap(class ItemStack&, class Level&, class Actor*, std::string&) const; // NOLINT
    /**
     * @symbol
     * ?_scheduleMapChunkRendering\@MapItem\@\@CAXAEAVDimension\@\@AEBVMapItemSavedData\@\@UChunkBounds\@3\@V?$shared_ptr\@_N\@std\@\@\@Z
     */
    MCAPI static void
    _scheduleMapChunkRendering(class Dimension&, class MapItemSavedData const&, struct MapItemSavedData::ChunkBounds, class std::shared_ptr<bool>); // NOLINT

private:
};
