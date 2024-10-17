#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

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
    // vIndex: 0
    virtual ~WritableBookItem() = default;

    // vIndex: 47
    virtual bool requiresInteract() const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& instance, class Player& player) const;

    // vIndex: 105
    virtual std::string getInteractText(class Player const& player) const;

    MCAPI static void addPageAt(class ItemStack& book, int index, struct PageContent const& page);

    MCAPI static struct PageContent deletePage(class ItemStack& book, int index);

    MCAPI static void replacePage(class ItemStack& book, int index, struct PageContent const& page);

    MCAPI static void signBook(class ItemStack& book, std::string title, std::string author, std::string xuid);

    MCAPI static void swapPages(class ItemStack& book, int page1, int page2);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI std::string getInteractText$(class Player const& player) const;

    MCAPI bool requiresInteract$() const;

    MCAPI class ItemStack& use$(class ItemStack& instance, class Player& player) const;

    // NOLINTEND
};
