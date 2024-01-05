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
    // vIndex: 0, symbol: __gen_??1WrittenBookItem@@UEAA@XZ
    virtual ~WrittenBookItem() = default;

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 36, symbol: ?isGlint@WrittenBookItem@@MEBA_NAEBVItemStackBase@@@Z
    virtual bool isGlint(class ItemStackBase const& stack) const;

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 45, symbol: ?requiresInteract@WrittenBookItem@@UEBA_NXZ
    virtual bool requiresInteract() const;

    // vIndex: 46, symbol:
    // ?appendFormattedHovertext@WrittenBookItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

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

    // vIndex: 70, symbol: ?use@WrittenBookItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& instance, class Player& player) const;

    // vIndex: 81, symbol:
    // ?buildDescriptionId@WrittenBookItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 99, symbol: __unk_vfn_99
    virtual void __unk_vfn_99();

    // vIndex: 104, symbol:
    // ?getInteractText@WrittenBookItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@@Z
    virtual std::string getInteractText(class Player const&) const;

    // symbol: ?canBeCopied@WrittenBookItem@@SA_NPEBVCompoundTag@@@Z
    MCAPI static bool canBeCopied(class CompoundTag const* tag);

    // symbol: ?getGeneration@WrittenBookItem@@SAHPEBVCompoundTag@@@Z
    MCAPI static int getGeneration(class CompoundTag const* tag);

    // symbol: ?getPageCount@WrittenBookItem@@SAHAEBVItemStack@@@Z
    MCAPI static int getPageCount(class ItemStack const& book);

    // symbol:
    // ?getPages@WrittenBookItem@@SA?AV?$vector@UPageContent@@V?$allocator@UPageContent@@@std@@@std@@AEBVItemStack@@@Z
    MCAPI static std::vector<struct PageContent> getPages(class ItemStack const& book);

    // symbol: ?MAX_GENERATION@WrittenBookItem@@2HB
    MCAPI static int const MAX_GENERATION;

    // symbol: ?MAX_PAGES@WrittenBookItem@@2HB
    MCAPI static int const MAX_PAGES;

    // symbol: ?MAX_PAGE_LENGTH@WrittenBookItem@@2HB
    MCAPI static int const MAX_PAGE_LENGTH;

    // symbol: ?MAX_TITLE_LENGTH@WrittenBookItem@@2HB
    MCAPI static int const MAX_TITLE_LENGTH;

    // symbol: ?TAG_AUTHOR@WrittenBookItem@@2V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const TAG_AUTHOR;

    // symbol: ?TAG_GENERATION@WrittenBookItem@@2V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const TAG_GENERATION;

    // symbol: ?TAG_ID@WrittenBookItem@@2V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const TAG_ID;

    // symbol: ?TAG_PAGES@WrittenBookItem@@2V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const TAG_PAGES;

    // symbol: ?TAG_PAGE_PHOTO_NAME@WrittenBookItem@@2V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const TAG_PAGE_PHOTO_NAME;

    // symbol: ?TAG_PAGE_TEXT@WrittenBookItem@@2V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const TAG_PAGE_TEXT;

    // symbol: ?TAG_RESOLVED@WrittenBookItem@@2V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const TAG_RESOLVED;

    // symbol: ?TAG_TITLE@WrittenBookItem@@2V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const TAG_TITLE;

    // symbol: ?TAG_XUID@WrittenBookItem@@2V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const TAG_XUID;

    // NOLINTEND
};
