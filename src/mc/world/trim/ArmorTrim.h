#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ArmorTrim {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARMORTRIM
public:
    ArmorTrim& operator=(ArmorTrim const&) = delete;
    ArmorTrim(ArmorTrim const&)            = delete;
    ArmorTrim()                            = delete;
#endif

public:
    /**
     * @symbol ??0ArmorTrim\@\@QEAA\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI ArmorTrim(class CompoundTag const&);
    /**
     * @symbol ??0ArmorTrim\@\@QEAA\@VHashedString\@\@0\@Z
     */
    MCAPI ArmorTrim(class HashedString, class HashedString);
    /**
     * @symbol ?getMaterialId\@ArmorTrim\@\@QEBA?AVHashedString\@\@XZ
     */
    MCAPI class HashedString getMaterialId() const;
    /**
     * @symbol ?getPatternId\@ArmorTrim\@\@QEBA?AVHashedString\@\@XZ
     */
    MCAPI class HashedString getPatternId() const;
    /**
     * @symbol ??1ArmorTrim\@\@QEAA\@XZ
     */
    MCAPI ~ArmorTrim();
    /**
     * @symbol ?TAG_TRIM\@ArmorTrim\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_TRIM;
    /**
     * @symbol
     * ?TAG_TRIM_MATERIAL\@ArmorTrim\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_TRIM_MATERIAL;
    /**
     * @symbol
     * ?TAG_TRIM_PATTERN\@ArmorTrim\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_TRIM_PATTERN;
    /**
     * @symbol
     * ?UPGRADE_DESCRIPTION\@ArmorTrim\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const UPGRADE_DESCRIPTION;
    /**
     * @symbol
     * ?UPGRADE_DESCRIPTION_FORMAT\@ArmorTrim\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const UPGRADE_DESCRIPTION_FORMAT;
    /**
     * @symbol
     * ?WRONG_VERSION_OR_ITEM_ERROR\@ArmorTrim\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const WRONG_VERSION_OR_ITEM_ERROR;
    /**
     * @symbol
     * ?appendUpgradeHoverText\@ArmorTrim\@\@SAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static void appendUpgradeHoverText(class ItemStackBase const&, class Level&, std::string&);
    /**
     * @symbol ?getTrim\@ArmorTrim\@\@SA?AV?$optional\@VArmorTrim\@\@\@std\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI static class std::optional<class ArmorTrim> getTrim(class ItemStackBase const&);
    /**
     * @symbol ?setTrim\@ArmorTrim\@\@SAXAEAVItemStackBase\@\@V1\@\@Z
     */
    MCAPI static void setTrim(class ItemStackBase&, class ArmorTrim);
};
