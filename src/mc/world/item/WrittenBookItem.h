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

class WrittenBookItem : public ::Item {
public:
    // prevent constructor by default
    WrittenBookItem& operator=(WrittenBookItem const&);
    WrittenBookItem(WrittenBookItem const&);
    WrittenBookItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WrittenBookItem() = default;

    // vIndex: 38
    virtual bool isGlint(class ItemStackBase const& stack) const;

    // vIndex: 47
    virtual bool requiresInteract() const;

    // vIndex: 48
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& instance, class Player& player) const;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 105
    virtual std::string getInteractText(class Player const&) const;

    MCAPI static bool canBeCopied(class CompoundTag const* tag);

    MCAPI static int getGeneration(class CompoundTag const* tag);

    MCAPI static int getPageCount(class ItemStack const& book);

    MCAPI static std::vector<struct PageContent> getPages(class ItemStack const& book);

    MCAPI static int const MAX_GENERATION;

    MCAPI static int const MAX_PAGES;

    MCAPI static int const MAX_PAGE_LENGTH;

    MCAPI static int const MAX_TITLE_LENGTH;

    MCAPI static std::string_view const TAG_AUTHOR;

    MCAPI static std::string_view const TAG_GENERATION;

    MCAPI static std::string_view const TAG_ID;

    MCAPI static std::string_view const TAG_PAGES;

    MCAPI static std::string_view const TAG_PAGE_PHOTO_NAME;

    MCAPI static std::string_view const TAG_PAGE_TEXT;

    MCAPI static std::string_view const TAG_RESOLVED;

    MCAPI static std::string_view const TAG_TITLE;

    MCAPI static std::string_view const TAG_XUID;

    // NOLINTEND
};
