#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

class Localization {

public:
    // prevent constructor by default
    Localization& operator=(Localization const&) = delete;
    Localization(Localization const&)            = delete;
    Localization()                               = delete;

public:
    /**
     * @symbol
     * ??0Localization\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAV0\@\@Z
     */
    MCAPI Localization(std::string const&, class Localization*); // NOLINT
    /**
     * @symbol ??0Localization\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI Localization(std::string const&); // NOLINT
    /**
     * @symbol
     * ?appendTranslations\@Localization\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@10\@Z
     */
    MCAPI void
    appendTranslations(std::string const&, std::vector<std::string> const&, std::vector<std::string> const&, std::string const&); // NOLINT
    /**
     * @symbol ?appendTranslations\@Localization\@\@QEAAXAEBV1\@\@Z
     */
    MCAPI void appendTranslations(class Localization const&); // NOLINT
    /**
     * @symbol
     * ?get\@Localization\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV23\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI bool get(std::string const&, std::string&, std::vector<std::string> const&) const; // NOLINT
    /**
     * @symbol
     * ?getFullLanguageCode\@Localization\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getFullLanguageCode() const; // NOLINT
    /**
     * @symbol
     * ?loadFromPack\@Localization\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPackAccessStrategy\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI void
    loadFromPack(std::string const&, class PackAccessStrategy const&, std::vector<std::string> const&); // NOLINT
    /**
     * @symbol
     * ?loadFromResourcePackManager\@Localization\@\@QEAAXAEAVResourcePackManager\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void loadFromResourcePackManager(class ResourcePackManager&, std::vector<std::string> const&); // NOLINT
    /**
     * @symbol ??1Localization\@\@QEAA\@XZ
     */
    MCAPI ~Localization(); // NOLINT
    /**
     * @symbol
     * ?getLangFilePath\@Localization\@\@SA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class Core::PathBuffer<std::string> getLangFilePath(std::string const&); // NOLINT
    /**
     * @symbol
     * ?getLanguageCode\@Localization\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI static std::string getLanguageCode(std::string const&); // NOLINT

    // protected:
    /**
     * @symbol
     * ?_get\@Localization\@\@IEBA?AUOptionalString\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z
     */
    MCAPI struct OptionalString _get(std::string const&, std::vector<std::string> const&) const; // NOLINT
    /**
     * @symbol
     * ?_getSimple\@Localization\@\@IEBA?AUOptionalString\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct OptionalString _getSimple(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?_parseFormattedString\@Localization\@\@IEBA?AUOptionalString\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct OptionalString _parseFormattedString(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?_replaceTokens\@Localization\@\@IEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI void _replaceTokens(std::string&, std::vector<std::string> const&) const; // NOLINT
    /**
     * @symbol
     * ?_isCommaSeperatedLanguage\@Localization\@\@KA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool _isCommaSeperatedLanguage(std::string const&); // NOLINT

protected:
};
