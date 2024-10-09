#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

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
    // vIndex: 0
    virtual ~BannerPattern();

    MCAPI bool getIgnoreAux() const;

    MCAPI class ItemStack getIngredientItem() const;

    MCAPI std::string const& getName() const;

    MCAPI std::string const& getNameID() const;

    MCAPI std::vector<std::string> const& getPattern() const;

    MCAPI bool hasPattern() const;

    MCAPI bool matchesPatternItem(class ItemStackBase const& item) const;

    MCAPI bool requiresIngredientItem() const;

    MCAPI bool requiresPatternItem() const;

    MCAPI static std::optional<uchar> findPatternIndexByNameID(std::string const& nameID);

    MCAPI static std::optional<uchar> getPatternIndexFromName(std::string const& name);

    MCAPI static uchar getPatternIndexFromNameID(std::string const& nameID);

    MCAPI static class CompoundTag const* tryGetPatternDataFromTag(class Tag const* tag);

    MCAPI static char const* const BASE_NAME;

    MCAPI static char const* const CREEPER_NAME_ID;

    MCAPI static char const* const CURLY_BORDER_NAME_ID;

    MCAPI static char const* const SQUARE_TOP_LEFT_NAME_ID;

    MCAPI static std::vector<class BannerPattern> const mPatterns;

    // NOLINTEND
};
