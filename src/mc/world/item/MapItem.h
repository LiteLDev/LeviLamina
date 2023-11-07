#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/enums/UseAnimation.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/ComplexItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"
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
    // vIndex: 0, symbol: __gen_??1MapItem@@UEAA@XZ
    virtual ~MapItem() = default;

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21();

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 53, symbol: __unk_vfn_53
    virtual void __unk_vfn_53();

    // vIndex: 60, symbol:
    // ?appendFormattedHovertext@MapItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 72, symbol: __unk_vfn_72
    virtual void __unk_vfn_72();

    // vIndex: 75, symbol: __unk_vfn_75
    virtual void __unk_vfn_75();

    // vIndex: 79, symbol: __unk_vfn_79
    virtual void __unk_vfn_79();

    // vIndex: 80, symbol: __unk_vfn_80
    virtual void __unk_vfn_80();

    // vIndex: 95, symbol:
    // ?buildDescriptionId@MapItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 101, symbol: ?inventoryTick@MapItem@@UEBA_NAEAVItemStack@@AEAVLevel@@AEAVActor@@H_N@Z
    virtual bool inventoryTick(class ItemStack&, class Level&, class Actor&, int, bool) const;

    // vIndex: 102, symbol: ?refreshedInContainer@MapItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@@Z
    virtual void refreshedInContainer(class ItemStackBase const&, class Level&) const;

    // vIndex: 106, symbol: ?fixupCommon@MapItem@@UEBAXAEAVItemStackBase@@AEAVLevel@@@Z
    virtual void fixupCommon(class ItemStackBase&, class Level&) const;

    // vIndex: 115, symbol: __unk_vfn_115
    virtual void __unk_vfn_115();

    // vIndex: 116, symbol: __unk_vfn_116
    virtual void __unk_vfn_116();

    // vIndex: 117, symbol: ?hasSameRelevantUserData@MapItem@@UEBA_NAEBVItemStackBase@@0@Z
    virtual bool hasSameRelevantUserData(class ItemStackBase const&, class ItemStackBase const&) const;

    // vIndex: 119, symbol:
    // ?setIconInfo@MapItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const&, int);

    // vIndex: 120, symbol: ?getIconInfo@MapItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const;

    // vIndex: 128, symbol: __unk_vfn_128
    virtual void __unk_vfn_128();

    // vIndex: 136, symbol:
    // ?getUpdatePacket@MapItem@@UEBA?AV?$unique_ptr@VPacket@@U?$default_delete@VPacket@@@std@@@std@@AEBVItemStack@@AEAVLevel@@AEAVActor@@@Z
    virtual std::unique_ptr<class Packet> getUpdatePacket(class ItemStack const&, class Level&, class Actor&) const;

    // symbol: ??0MapItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
    MCAPI MapItem(std::string const&, short);

    // symbol: ?blockTick@MapItem@@QEBAXAEAVItemStack@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void blockTick(class ItemStack&, class BlockSource&, class BlockPos const&) const;

    // symbol: ?update@MapItem@@QEBAXAEAVLevel@@AEAVActor@@AEAVMapItemSavedData@@@Z
    MCAPI void update(class Level&, class Actor&, class MapItemSavedData&) const;

    // symbol: ?doesDisplayPlayerMarkers@MapItem@@SA_NAEBVItemStack@@@Z
    MCAPI static bool doesDisplayPlayerMarkers(class ItemStack const&);

    // symbol: ?getMapId@MapItem@@SA?AUActorUniqueID@@PEBVCompoundTag@@@Z
    MCAPI static struct ActorUniqueID getMapId(class CompoundTag const*);

    // symbol: ?markForRegeneration@MapItem@@SAXAEAVItemStackBase@@@Z
    MCAPI static void markForRegeneration(class ItemStackBase&);

    // symbol: ?renderBiomePreviewMap@MapItem@@SAXAEAVDimension@@AEAVMapItemSavedData@@@Z
    MCAPI static void renderBiomePreviewMap(class Dimension&, class MapItemSavedData&);

    // symbol:
    // ?sampleMapData@MapItem@@SA_NAEAVBlockSource@@HAEBVBlockPos@@1HHPEAV?$vector@UMapSample@@V?$allocator@UMapSample@@@std@@@std@@PEAVMapItemSavedData@@PEAV?$vector@UClientTerrainPixel@@V?$allocator@UClientTerrainPixel@@@std@@@5@@Z
    MCAPI static bool
    sampleMapData(class BlockSource&, int, class BlockPos const&, class BlockPos const&, int, int, std::vector<struct MapSample>*, class MapItemSavedData*, std::vector<struct ClientTerrainPixel>*);

    // symbol:
    // ?serializeMapData@MapItem@@SAXAEBV?$vector@UMapSample@@V?$allocator@UMapSample@@@std@@@std@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI static void serializeMapData(std::vector<struct MapSample> const&, std::string&);

    // symbol: ?setItemInstanceInfo@MapItem@@SAXAEAVItemStackBase@@AEAVMapItemSavedData@@@Z
    MCAPI static void setItemInstanceInfo(class ItemStackBase&, class MapItemSavedData&);

    // symbol: ?setMapNameIndex@MapItem@@SAXAEAVItemStack@@H@Z
    MCAPI static void setMapNameIndex(class ItemStack&, int);

    // symbol: ?TAG_MAP_INIT@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_MAP_INIT;

    // symbol: ?TAG_MAP_NAME_INDEX@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_MAP_NAME_INDEX;

    // symbol: ?TAG_MAP_PLAYER_DISPLAY@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_MAP_PLAYER_DISPLAY;

    // symbol: ?TAG_MAP_REGENERATE@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_MAP_REGENERATE;

    // symbol: ?TAG_MAP_SCALE@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_MAP_SCALE;

    // symbol: ?TAG_MAP_SCALING@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_MAP_SCALING;

    // symbol: ?TAG_MAP_UUID@MapItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_MAP_UUID;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_scheduleMapChunkRendering@MapItem@@CAXAEAVDimension@@AEBVMapItemSavedData@@UChunkBounds@3@V?$shared_ptr@_N@std@@@Z
    MCAPI static void
    _scheduleMapChunkRendering(class Dimension&, class MapItemSavedData const&, struct MapItemSavedData::ChunkBounds, std::shared_ptr<bool>);

    // NOLINTEND
};
