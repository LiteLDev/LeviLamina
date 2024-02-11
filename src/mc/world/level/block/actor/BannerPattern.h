#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class BannerPattern : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    BannerPattern& operator=(BannerPattern const&);
    BannerPattern(BannerPattern const&);
    BannerPattern();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BannerPattern@@UEAA@XZ
    virtual ~BannerPattern();

    // symbol: ?getIgnoreAux@BannerPattern@@QEBA_NXZ
    MCAPI bool getIgnoreAux() const;

    // symbol: ?getIngredientItem@BannerPattern@@QEBA?AVItemStack@@XZ
    MCAPI class ItemStack getIngredientItem() const;

    // symbol: ?getName@BannerPattern@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getName() const;

    // symbol: ?getNameID@BannerPattern@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getNameID() const;

    // symbol:
    // ?getPattern@BannerPattern@@QEBAAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> const& getPattern() const;

    // symbol: ?hasPattern@BannerPattern@@QEBA_NXZ
    MCAPI bool hasPattern() const;

    // symbol: ?matchesPatternItem@BannerPattern@@QEBA_NAEBVItemStackBase@@@Z
    MCAPI bool matchesPatternItem(class ItemStackBase const& item) const;

    // symbol: ?requiresIngredientItem@BannerPattern@@QEBA_NXZ
    MCAPI bool requiresIngredientItem() const;

    // symbol: ?requiresPatternItem@BannerPattern@@QEBA_NXZ
    MCAPI bool requiresPatternItem() const;

    // symbol:
    // ?findPatternIndexByNameID@BannerPattern@@SA?AV?$optional@E@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI static std::optional<uchar> findPatternIndexByNameID(std::string const& nameID);

    // symbol:
    // ?getPatternIndexFromName@BannerPattern@@SA?AV?$optional@E@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI static std::optional<uchar> getPatternIndexFromName(std::string const& name);

    // symbol:
    // ?getPatternIndexFromNameID@BannerPattern@@SAEAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static uchar getPatternIndexFromNameID(std::string const& nameID);

    // symbol: ?tryGetPatternDataFromTag@BannerPattern@@SAPEBVCompoundTag@@PEBVTag@@@Z
    MCAPI static class CompoundTag const* tryGetPatternDataFromTag(class Tag const* tag);

    // symbol: ?BASE_NAME@BannerPattern@@2QEBDEB
    MCAPI static char const* const BASE_NAME;

    // symbol: ?CREEPER_NAME_ID@BannerPattern@@2QEBDEB
    MCAPI static char const* const CREEPER_NAME_ID;

    // symbol: ?CURLY_BORDER_NAME_ID@BannerPattern@@2QEBDEB
    MCAPI static char const* const CURLY_BORDER_NAME_ID;

    // symbol: ?SQUARE_TOP_LEFT_NAME_ID@BannerPattern@@2QEBDEB
    MCAPI static char const* const SQUARE_TOP_LEFT_NAME_ID;

    // symbol: ?mPatterns@BannerPattern@@2V?$vector@VBannerPattern@@V?$allocator@VBannerPattern@@@std@@@std@@B
    MCAPI static std::vector<class BannerPattern> const mPatterns;

    // NOLINTEND
};
