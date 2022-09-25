/**
 * @file  MapItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @symbol __unk_destructor_0
     */
    virtual ~MapItem();
    /**
     * @vftbl  7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  52
     * @symbol __unk_vfn_52
     */
    virtual void __unk_vfn_52();
    /**
     * @vftbl  54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @hash   -1955861936
     * @vftbl  61
     * @symbol ?appendFormattedHovertext@MapItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @vftbl  71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  73
     * @symbol __unk_vfn_73
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
    /**
     * @vftbl  80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   -1041623093
     * @vftbl  96
     * @symbol ?buildDescriptionId@MapItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @hash   1831704831
     * @vftbl  102
     * @symbol ?inventoryTick@MapItem@@UEBA_NAEAVItemStack@@AEAVLevel@@AEAVActor@@H_N@Z
     */
    virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /**
     * @hash   -10243138
     * @vftbl  103
     * @symbol ?refreshedInContainer@MapItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@@Z
     */
    virtual void refreshedInContainer(class ItemStackBase const &, class Level &) const;
    /**
     * @hash   1728715140
     * @vftbl  107
     * @symbol ?fixupCommon@MapItem@@UEBAXAEAVItemStackBase@@AEAVLevel@@@Z
     */
    virtual void fixupCommon(class ItemStackBase &, class Level &) const;
    /**
     * @hash   2030476556
     * @vftbl  116
     * @symbol ?isSameItem@MapItem@@UEBA_NAEBVItemStackBase@@0@Z
     */
    virtual bool isSameItem(class ItemStackBase const &, class ItemStackBase const &) const;
    /**
     * @hash   -1608047518
     * @vftbl  122
     * @symbol ?getIcon@MapItem@@UEBAAEBUTextureUVCoordinateSet@@AEBVItemStackBase@@H_N@Z
     */
    virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /**
     * @hash   726305965
     * @vftbl  124
     * @symbol ?setIcon@MapItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    virtual class Item & setIcon(std::string const &, int);
    /**
     * @hash   -126387872
     * @vftbl  136
     * @symbol ?getUpdatePacket@MapItem@@UEBA?AV?$unique_ptr@VPacket@@U?$default_delete@VPacket@@@std@@@std@@AEBVItemStack@@AEAVLevel@@AEAVActor@@@Z
     */
    virtual std::unique_ptr<class Packet> getUpdatePacket(class ItemStack const &, class Level &, class Actor &) const;
    /**
     * @hash   -695991342
     * @symbol ??0MapItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
     */
    MCAPI MapItem(std::string const &, short);
    /**
     * @hash   -623836792
     * @symbol ?blockTick@MapItem@@QEBAXAEAVItemStack@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void blockTick(class ItemStack &, class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   566722722
     * @symbol ?update@MapItem@@QEBAXAEAVLevel@@AEAVActor@@AEAVMapItemSavedData@@@Z
     */
    MCAPI void update(class Level &, class Actor &, class MapItemSavedData &) const;
    /**
     * @hash   1330409391
     * @symbol ?TAG_MAP_INIT@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_MAP_INIT;
    /**
     * @hash   -1077259505
     * @symbol ?TAG_MAP_NAME_INDEX@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_MAP_NAME_INDEX;
    /**
     * @hash   317054863
     * @symbol ?TAG_MAP_PLAYER_DISPLAY@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_MAP_PLAYER_DISPLAY;
    /**
     * @hash   192790543
     * @symbol ?TAG_MAP_REGENERATE@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_MAP_REGENERATE;
    /**
     * @hash   -2028467635
     * @symbol ?TAG_MAP_SCALE@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_MAP_SCALE;
    /**
     * @hash   -389404723
     * @symbol ?TAG_MAP_SCALING@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_MAP_SCALING;
    /**
     * @hash   -2101034737
     * @symbol ?TAG_MAP_UUID@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_MAP_UUID;
    /**
     * @hash   -1003598061
     * @symbol ?doesDisplayPlayerMarkers@MapItem@@SA_NAEBVItemStack@@@Z
     */
    MCAPI static bool doesDisplayPlayerMarkers(class ItemStack const &);
    /**
     * @hash   1792390058
     * @symbol ?getMapId@MapItem@@SA?AUActorUniqueID@@PEBVCompoundTag@@@Z
     */
    MCAPI static struct ActorUniqueID getMapId(class CompoundTag const *);
    /**
     * @hash   4118260
     * @symbol ?markForRegeneration@MapItem@@SAXAEAVItemInstance@@@Z
     */
    MCAPI static void markForRegeneration(class ItemInstance &);
    /**
     * @hash   1603917963
     * @symbol ?renderBiomePreviewMap@MapItem@@SAXAEAVDimension@@AEAVMapItemSavedData@@@Z
     */
    MCAPI static void renderBiomePreviewMap(class Dimension &, class MapItemSavedData &);
    /**
     * @hash   -1328759869
     * @symbol ?sampleMapData@MapItem@@SAXAEAVBlockSource@@HAEBVBlockPos@@1HHPEAV?$vector@UMapSample@@V?$allocator@UMapSample@@@std@@@std@@PEAVMapItemSavedData@@PEAVMapItemTrackedActor@@PEAV?$vector@UClientTerrainPixel@@V?$allocator@UClientTerrainPixel@@@std@@@5@@Z
     */
    MCAPI static void sampleMapData(class BlockSource &, int, class BlockPos const &, class BlockPos const &, int, int, std::vector<struct MapSample> *, class MapItemSavedData *, class MapItemTrackedActor *, std::vector<struct ClientTerrainPixel> *);
    /**
     * @hash   1494192917
     * @symbol ?serializeMapData@MapItem@@SAXAEBV?$vector@UMapSample@@V?$allocator@UMapSample@@@std@@@std@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCAPI static void serializeMapData(std::vector<struct MapSample> const &, std::string &);
    /**
     * @hash   -958839019
     * @symbol ?setItemInstanceInfo@MapItem@@SAXAEAVItemInstance@@AEAVMapItemSavedData@@@Z
     */
    MCAPI static void setItemInstanceInfo(class ItemInstance &, class MapItemSavedData &);
    /**
     * @hash   2096735099
     * @symbol ?setItemInstanceInfo@MapItem@@SAXAEAVItemStack@@AEAVMapItemSavedData@@@Z
     */
    MCAPI static void setItemInstanceInfo(class ItemStack &, class MapItemSavedData &);
    /**
     * @hash   1542209185
     * @symbol ?setMapNameIndex@MapItem@@SAXAEAVItemStack@@H@Z
     */
    MCAPI static void setMapNameIndex(class ItemStack &, int);

//private:
    /**
     * @hash   951751429
     * @symbol ?_makeNewExplorationMap@MapItem@@AEBAXAEAVItemStack@@AEAVLevel@@PEAVActor@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void _makeNewExplorationMap(class ItemStack &, class Level &, class Actor *, std::string &) const;
    /**
     * @hash   -235975099
     * @symbol ?_scheduleMapChunkRendering@MapItem@@CAXAEAVDimension@@AEBVMapItemSavedData@@UChunkBounds@3@V?$shared_ptr@_N@std@@@Z
     */
    MCAPI static void _scheduleMapChunkRendering(class Dimension &, class MapItemSavedData const &, struct MapItemSavedData::ChunkBounds, class std::shared_ptr<bool>);

private:

};