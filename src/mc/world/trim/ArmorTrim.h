#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ArmorTrim {
public:
    // prevent constructor by default
    ArmorTrim& operator=(ArmorTrim const&);
    ArmorTrim(ArmorTrim const&);
    ArmorTrim();

public:
    // NOLINTBEGIN
    // symbol: ??0ArmorTrim@@QEAA@AEBVCompoundTag@@@Z
    MCAPI explicit ArmorTrim(class CompoundTag const& tag);

    // symbol: ?getMaterialId@ArmorTrim@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const& getMaterialId() const;

    // symbol: ??1ArmorTrim@@QEAA@XZ
    MCAPI ~ArmorTrim();

    // symbol:
    // ?appendUpgradeHoverText@ArmorTrim@@SAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static void
    appendUpgradeHoverText(class ItemStackBase const& stack, class Level& level, std::string& hovertext);

    // symbol: ?getTrim@ArmorTrim@@SA?AV?$optional@VArmorTrim@@@std@@AEBVItemStackBase@@@Z
    MCAPI static std::optional<class ArmorTrim> getTrim(class ItemStackBase const& instance);

    // symbol: ?setTrim@ArmorTrim@@SAXAEAVItemStackBase@@V1@@Z
    MCAPI static void setTrim(class ItemStackBase& instance, class ArmorTrim);

    // symbol: ?TAG_TRIM@ArmorTrim@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_TRIM;

    // symbol: ?TAG_TRIM_MATERIAL@ArmorTrim@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_TRIM_MATERIAL;

    // symbol: ?TAG_TRIM_PATTERN@ArmorTrim@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_TRIM_PATTERN;

    // symbol: ?UPGRADE_DESCRIPTION@ArmorTrim@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const UPGRADE_DESCRIPTION;

    // symbol: ?UPGRADE_DESCRIPTION_FORMAT@ArmorTrim@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const UPGRADE_DESCRIPTION_FORMAT;

    // symbol: ?WRONG_VERSION_OR_ITEM_ERROR@ArmorTrim@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const WRONG_VERSION_OR_ITEM_ERROR;

    // NOLINTEND
};
