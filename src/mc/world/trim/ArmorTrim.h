#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ArmorTrim {

public:
    // prevent constructor by default
    ArmorTrim& operator=(ArmorTrim const&) = delete;
    ArmorTrim(ArmorTrim const&)            = delete;
    ArmorTrim()                            = delete;

public:
    /**
     * @symbol ??0ArmorTrim\@\@QEAA\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI ArmorTrim(class CompoundTag const&); // NOLINT
    /**
     * @symbol ??0ArmorTrim\@\@QEAA\@VHashedString\@\@0\@Z
     */
    MCAPI ArmorTrim(class HashedString, class HashedString); // NOLINT
    /**
     * @symbol ?getMaterialId\@ArmorTrim\@\@QEBA?AVHashedString\@\@XZ
     */
    MCAPI class HashedString getMaterialId() const; // NOLINT
    /**
     * @symbol ?getPatternId\@ArmorTrim\@\@QEBA?AVHashedString\@\@XZ
     */
    MCAPI class HashedString getPatternId() const; // NOLINT
    /**
     * @symbol ??1ArmorTrim\@\@QEAA\@XZ
     */
    MCAPI ~ArmorTrim(); // NOLINT
    /**
     * @symbol
     * ?appendUpgradeHoverText\@ArmorTrim\@\@SAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static void appendUpgradeHoverText(class ItemStackBase const&, class Level&, std::string&); // NOLINT
    /**
     * @symbol ?getTrim\@ArmorTrim\@\@SA?AV?$optional\@VArmorTrim\@\@\@std\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI static class std::optional<class ArmorTrim> getTrim(class ItemStackBase const&); // NOLINT
    /**
     * @symbol ?setTrim\@ArmorTrim\@\@SAXAEAVItemStackBase\@\@V1\@\@Z
     */
    MCAPI static void setTrim(class ItemStackBase&, class ArmorTrim); // NOLINT
    /**
     * @symbol ?TAG_TRIM\@ArmorTrim\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_TRIM; // NOLINT
    /**
     * @symbol
     * ?TAG_TRIM_MATERIAL\@ArmorTrim\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_TRIM_MATERIAL; // NOLINT
    /**
     * @symbol
     * ?TAG_TRIM_PATTERN\@ArmorTrim\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_TRIM_PATTERN; // NOLINT
    /**
     * @symbol
     * ?UPGRADE_DESCRIPTION\@ArmorTrim\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const UPGRADE_DESCRIPTION; // NOLINT
    /**
     * @symbol
     * ?UPGRADE_DESCRIPTION_FORMAT\@ArmorTrim\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const UPGRADE_DESCRIPTION_FORMAT; // NOLINT
    /**
     * @symbol
     * ?WRONG_VERSION_OR_ITEM_ERROR\@ArmorTrim\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const WRONG_VERSION_OR_ITEM_ERROR; // NOLINT
};
