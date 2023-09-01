#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/enums/UseAnimation.h"
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
    WritableBookItem& operator=(WritableBookItem const&) = delete;
    WritableBookItem(WritableBookItem const&)            = delete;
    WritableBookItem()                                   = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

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

    // vIndex: 59, symbol: ?requiresInteract@WritableBookItem@@UEBA_NXZ
    virtual bool requiresInteract() const;

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

    // vIndex: 84, symbol: ?use@WritableBookItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack&, class Player&) const;

    // vIndex: 115, symbol: __unk_vfn_115
    virtual void __unk_vfn_115();

    // vIndex: 116, symbol: __unk_vfn_116
    virtual void __unk_vfn_116();

    // vIndex: 121, symbol:
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
