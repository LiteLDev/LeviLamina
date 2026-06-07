#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/SmithingTemplateItem.h"

namespace SmithingTemplateUtils {
// functions
// NOLINTBEGIN
MCNAPI ::std::string const getAppliesToText(::SmithingTemplateItem::UpgradeType upgradeType);

MCNAPI ::std::string const getIngredientsText(::SmithingTemplateItem::UpgradeType upgradeType);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::string const& APPLIES_TO_TITLE();

MCNAPI ::std::string const& ARMOR_TRIM_APPLIES_TO();

MCNAPI ::std::string const& ARMOR_TRIM_INGREDIENTS();

MCNAPI ::std::string const& DESCRIPTION_FORMAT();

MCNAPI ::std::string const& INGREDIENTS_TITLE();

MCNAPI ::std::string const& NETHERITE_UPGRADE_APPLIES_TO();

MCNAPI ::std::string const& NETHERITE_UPGRADE_INGREDIENTS();

MCNAPI ::std::string const& TITLE_FORMAT();

MCNAPI ::std::string const& UNKNOWN();
// NOLINTEND

} // namespace SmithingTemplateUtils
