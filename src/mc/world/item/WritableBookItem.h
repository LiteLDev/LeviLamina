#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class WritableBookItem : public ::Item {
public:
    // prevent constructor by default
    WritableBookItem& operator=(WritableBookItem const&);
    WritableBookItem(WritableBookItem const&);
    WritableBookItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WritableBookItem@@UEAA@XZ
    virtual ~WritableBookItem() = default;

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 45, symbol: ?requiresInteract@WritableBookItem@@UEBA_NXZ
    virtual bool requiresInteract() const;

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 56, symbol: __unk_vfn_56
    virtual void __unk_vfn_56();

    // vIndex: 57, symbol: __unk_vfn_57
    virtual void __unk_vfn_57();

    // vIndex: 58, symbol: __unk_vfn_58
    virtual void __unk_vfn_58();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 65, symbol: __unk_vfn_65
    virtual void __unk_vfn_65();

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 70, symbol: ?use@WritableBookItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack&, class Player&) const;

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 99, symbol: __unk_vfn_99
    virtual void __unk_vfn_99();

    // vIndex: 104, symbol:
    // ?getInteractText@WritableBookItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@@Z
    virtual std::string getInteractText(class Player const&) const;

    // symbol: ?addPageAt@WritableBookItem@@SAXAEAVItemStack@@HAEBUPageContent@@@Z
    MCAPI static void addPageAt(class ItemStack&, int, struct PageContent const&);

    // symbol: ?deletePage@WritableBookItem@@SA?AUPageContent@@AEAVItemStack@@H@Z
    MCAPI static struct PageContent deletePage(class ItemStack&, int);

    // symbol: ?replacePage@WritableBookItem@@SAXAEAVItemStack@@HAEBUPageContent@@@Z
    MCAPI static void replacePage(class ItemStack&, int, struct PageContent const&);

    // symbol:
    // ?signBook@WritableBookItem@@SAXAEAVItemStack@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@11@Z
    MCAPI static void signBook(class ItemStack&, std::string, std::string, std::string);

    // symbol: ?swapPages@WritableBookItem@@SAXAEAVItemStack@@HH@Z
    MCAPI static void swapPages(class ItemStack&, int, int);

    // NOLINTEND
};
