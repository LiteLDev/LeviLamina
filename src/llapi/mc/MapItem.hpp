/**
 * @file  MapItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "MapItemSavedData.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MapItem.
 *
 */
class MapItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPITEM
public:
    class MapItem& operator=(class MapItem const &) = delete;
    MapItem(class MapItem const &) = delete;
    MapItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MapItem();
    /**
     * @vftbl  7
     * @symbol  __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @symbol  __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @symbol  __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @symbol  __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  51
     * @symbol  __unk_vfn_51
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @symbol  __unk_vfn_53
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl  60
     * @symbol  ?appendFormattedHovertext\@MapItem\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  66
     * @symbol  __unk_vfn_66
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  70
     * @symbol  __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @symbol  __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @symbol  __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  75
     * @symbol  __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @symbol  __unk_vfn_79
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @symbol  __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  95
     * @symbol  ?buildDescriptionId\@MapItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemDescriptor\@\@PEBVCompoundTag\@\@\@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @vftbl  101
     * @symbol  ?inventoryTick\@MapItem\@\@UEBA_NAEAVItemStack\@\@AEAVLevel\@\@AEAVActor\@\@H_N\@Z
     */
    virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /**
     * @vftbl  102
     * @symbol  ?refreshedInContainer\@MapItem\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@\@Z
     */
    virtual void refreshedInContainer(class ItemStackBase const &, class Level &) const;
    /**
     * @vftbl  106
     * @symbol  ?fixupCommon\@MapItem\@\@UEBAXAEAVItemStackBase\@\@AEAVLevel\@\@\@Z
     */
    virtual void fixupCommon(class ItemStackBase &, class Level &) const;
    /**
     * @vftbl  115
     * @symbol  ?isSameItem\@MapItem\@\@UEBA_NAEBVItemStackBase\@\@0\@Z
     */
    virtual bool isSameItem(class ItemStackBase const &, class ItemStackBase const &) const;
    /**
     * @vftbl  133
     * @symbol  ?getUpdatePacket\@MapItem\@\@UEBA?AV?$unique_ptr\@VPacket\@\@U?$default_delete\@VPacket\@\@\@std\@\@\@std\@\@AEBVItemStack\@\@AEAVLevel\@\@AEAVActor\@\@\@Z
     */
    virtual std::unique_ptr<class Packet> getUpdatePacket(class ItemStack const &, class Level &, class Actor &) const;
    /**
     * @symbol  ??0MapItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@F\@Z
     */
    MCAPI MapItem(std::string const &, short);
    /**
     * @symbol  ?blockTick\@MapItem\@\@QEBAXAEAVItemStack\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void blockTick(class ItemStack &, class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol  ?update\@MapItem\@\@QEBAXAEAVLevel\@\@AEAVActor\@\@AEAVMapItemSavedData\@\@\@Z
     */
    MCAPI void update(class Level &, class Actor &, class MapItemSavedData &) const;
    /**
     * @symbol  ?TAG_MAP_INIT\@MapItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_MAP_INIT;
    /**
     * @symbol  ?TAG_MAP_NAME_INDEX\@MapItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_MAP_NAME_INDEX;
    /**
     * @symbol  ?TAG_MAP_PLAYER_DISPLAY\@MapItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_MAP_PLAYER_DISPLAY;
    /**
     * @symbol  ?TAG_MAP_REGENERATE\@MapItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_MAP_REGENERATE;
    /**
     * @symbol  ?TAG_MAP_SCALE\@MapItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_MAP_SCALE;
    /**
     * @symbol  ?TAG_MAP_SCALING\@MapItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_MAP_SCALING;
    /**
     * @symbol  ?TAG_MAP_UUID\@MapItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_MAP_UUID;
    /**
     * @symbol  ?doesDisplayPlayerMarkers\@MapItem\@\@SA_NAEBVItemStack\@\@\@Z
     */
    MCAPI static bool doesDisplayPlayerMarkers(class ItemStack const &);
    /**
     * @symbol  ?getMapId\@MapItem\@\@SA?AUActorUniqueID\@\@PEBVCompoundTag\@\@\@Z
     */
    MCAPI static struct ActorUniqueID getMapId(class CompoundTag const *);
    /**
     * @symbol  ?markForRegeneration\@MapItem\@\@SAXAEAVItemInstance\@\@\@Z
     */
    MCAPI static void markForRegeneration(class ItemInstance &);
    /**
     * @symbol  ?renderBiomePreviewMap\@MapItem\@\@SAXAEAVDimension\@\@AEAVMapItemSavedData\@\@\@Z
     */
    MCAPI static void renderBiomePreviewMap(class Dimension &, class MapItemSavedData &);
    /**
     * @symbol  ?sampleMapData\@MapItem\@\@SA_NAEAVBlockSource\@\@HAEBVBlockPos\@\@1HHPEAV?$vector\@UMapSample\@\@V?$allocator\@UMapSample\@\@\@std\@\@\@std\@\@PEAVMapItemSavedData\@\@PEAV?$vector\@UClientTerrainPixel\@\@V?$allocator\@UClientTerrainPixel\@\@\@std\@\@\@5\@\@Z
     */
    MCAPI static bool sampleMapData(class BlockSource &, int, class BlockPos const &, class BlockPos const &, int, int, std::vector<struct MapSample> *, class MapItemSavedData *, std::vector<struct ClientTerrainPixel> *);
    /**
     * @symbol  ?serializeMapData\@MapItem\@\@SAXAEBV?$vector\@UMapSample\@\@V?$allocator\@UMapSample\@\@\@std\@\@\@std\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI static void serializeMapData(std::vector<struct MapSample> const &, std::string &);
    /**
     * @symbol  ?setItemInstanceInfo\@MapItem\@\@SAXAEAVItemInstance\@\@AEAVMapItemSavedData\@\@\@Z
     */
    MCAPI static void setItemInstanceInfo(class ItemInstance &, class MapItemSavedData &);
    /**
     * @symbol  ?setItemInstanceInfo\@MapItem\@\@SAXAEAVItemStack\@\@AEAVMapItemSavedData\@\@\@Z
     */
    MCAPI static void setItemInstanceInfo(class ItemStack &, class MapItemSavedData &);
    /**
     * @symbol  ?setMapNameIndex\@MapItem\@\@SAXAEAVItemStack\@\@H\@Z
     */
    MCAPI static void setMapNameIndex(class ItemStack &, int);

//private:
    /**
     * @symbol  ?_makeNewExplorationMap\@MapItem\@\@AEBAXAEAVItemStack\@\@AEAVLevel\@\@PEAVActor\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _makeNewExplorationMap(class ItemStack &, class Level &, class Actor *, std::string &) const;
    /**
     * @symbol  ?_scheduleMapChunkRendering\@MapItem\@\@CAXAEAVDimension\@\@AEBVMapItemSavedData\@\@UChunkBounds\@3\@V?$shared_ptr\@_N\@std\@\@\@Z
     */
    MCAPI static void _scheduleMapChunkRendering(class Dimension &, class MapItemSavedData const &, struct MapItemSavedData::ChunkBounds, class std::shared_ptr<bool>);

private:

};