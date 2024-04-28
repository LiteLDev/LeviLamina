#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/components/ComponentItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
// clang-format on

class CoalItem : public ::ComponentItem {
public:
    // CoalItem inner types define
    enum class Type {};

public:
    // prevent constructor by default
    CoalItem& operator=(CoalItem const&);
    CoalItem(CoalItem const&);
    CoalItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CoalItem@@UEAA@XZ
    virtual ~CoalItem() = default;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@CoalItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 103, symbol:
    // ?setIconInfo@CoalItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const&, int);

    // vIndex: 104, symbol: ?getIconInfo@CoalItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const;

    // vIndex: 112, symbol: ?getFurnaceXPmultiplier@CoalItem@@UEBAMAEBVItemStackBase@@@Z
    virtual float getFurnaceXPmultiplier(class ItemStackBase const& instance) const;

    // symbol:
    // ??0CoalItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEAUReflectionCtx@cereal@@W4Type@0@@Z
    MCAPI CoalItem(std::string const&, int, struct cereal::ReflectionCtx&, ::CoalItem::Type);

    // NOLINTEND
};
