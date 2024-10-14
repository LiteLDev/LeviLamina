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
    MCAPI explicit ArmorTrim(class CompoundTag const& tag);

    MCAPI ArmorTrim(class HashedString patternId, class HashedString materialId);

    MCAPI class HashedString const& getMaterialId() const;

    MCAPI class HashedString const& getPatternId() const;

    MCAPI ~ArmorTrim();

    MCAPI static void
    appendUpgradeHoverText(class ItemStackBase const& stack, class Level& level, std::string& hovertext);

    MCAPI static std::optional<class ArmorTrim> getTrim(class ItemStackBase const& instance);

    MCAPI static void setTrim(class ItemStackBase& instance, class ArmorTrim trim);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI static std::string const& TAG_TRIM();

    MCAPI static std::string const& TAG_TRIM_MATERIAL();

    MCAPI static std::string const& TAG_TRIM_PATTERN();

    MCAPI static std::string const& UPGRADE_DESCRIPTION();

    MCAPI static std::string const& UPGRADE_DESCRIPTION_FORMAT();

    MCAPI static std::string const& WRONG_VERSION_OR_ITEM_ERROR();

    // NOLINTEND
};
