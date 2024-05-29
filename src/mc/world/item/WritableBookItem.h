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

    // vIndex: 47, symbol: ?requiresInteract@WritableBookItem@@UEBA_NXZ
    virtual bool requiresInteract() const;

    // vIndex: 72, symbol: ?use@WritableBookItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& instance, class Player& player) const;

    // vIndex: 105, symbol:
    // ?getInteractText@WritableBookItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@@Z
    virtual std::string getInteractText(class Player const&) const;

    // symbol: ??0WritableBookItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI WritableBookItem(std::string const& name, int id);

    // symbol: ?addPageAt@WritableBookItem@@SAXAEAVItemStack@@HAEBUPageContent@@@Z
    MCAPI static void addPageAt(class ItemStack& book, int index, struct PageContent const& page);

    // symbol: ?deletePage@WritableBookItem@@SA?AUPageContent@@AEAVItemStack@@H@Z
    MCAPI static struct PageContent deletePage(class ItemStack& book, int index);

    // symbol: ?replacePage@WritableBookItem@@SAXAEAVItemStack@@HAEBUPageContent@@@Z
    MCAPI static void replacePage(class ItemStack& book, int index, struct PageContent const& page);

    // symbol:
    // ?signBook@WritableBookItem@@SAXAEAVItemStack@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@11@Z
    MCAPI static void signBook(class ItemStack& book, std::string title, std::string author, std::string xuid);

    // symbol: ?swapPages@WritableBookItem@@SAXAEAVItemStack@@HH@Z
    MCAPI static void swapPages(class ItemStack& book, int page1, int page2);

    // NOLINTEND
};
