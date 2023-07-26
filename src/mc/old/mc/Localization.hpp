/**
 * @file  Localization.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Localization.
 *
 */
class Localization {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOCALIZATION
public:
    class Localization& operator=(class Localization const &) = delete;
    Localization(class Localization const &) = delete;
    Localization() = delete;
#endif

public:
    /**
     * @symbol  ??0Localization\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAV0\@\@Z
     */
    MCAPI Localization(std::string const &, class Localization *);
    /**
     * @symbol  ??0Localization\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI Localization(std::string const &);
    /**
     * @symbol  ?appendTranslations\@Localization\@\@QEAAXAEBV1\@\@Z
     */
    MCAPI void appendTranslations(class Localization const &);
    /**
     * @symbol  ?appendTranslations\@Localization\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@10\@Z
     */
    MCAPI void appendTranslations(std::string const &, std::vector<std::string> const &, std::vector<std::string> const &, std::string const &);
    /**
     * @symbol  ?get\@Localization\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV23\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI bool get(std::string const &, std::string &, std::vector<std::string> const &) const;
    /**
     * @symbol  ?getFullLanguageCode\@Localization\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getFullLanguageCode() const;
    /**
     * @symbol  ?getStringIdExists\@Localization\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool getStringIdExists(std::string const &) const;
    /**
     * @symbol  ?loadFromPack\@Localization\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPackAccessStrategy\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI void loadFromPack(std::string const &, class PackAccessStrategy const &, std::vector<std::string> const &);
    /**
     * @symbol  ?loadFromResourcePackManager\@Localization\@\@QEAAXAEAVResourcePackManager\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void loadFromResourcePackManager(class ResourcePackManager &, std::vector<std::string> const &);
    /**
     * @symbol  ??1Localization\@\@QEAA\@XZ
     */
    MCAPI ~Localization();
    /**
     * @symbol  ?getLangFilePath\@Localization\@\@SA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class Core::PathBuffer<std::string> getLangFilePath(std::string const &);
    /**
     * @symbol  ?getLanguageCode\@Localization\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI static std::string getLanguageCode(std::string const &);

//protected:
    /**
     * @symbol  ?_get\@Localization\@\@IEBA?AUOptionalString\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z
     */
    MCAPI struct OptionalString _get(std::string const &, std::vector<std::string> const &) const;
    /**
     * @symbol  ?_getSimple\@Localization\@\@IEBA?AUOptionalString\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct OptionalString _getSimple(std::string const &) const;
    /**
     * @symbol  ?_parseFormattedString\@Localization\@\@IEBA?AUOptionalString\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct OptionalString _parseFormattedString(std::string const &) const;
    /**
     * @symbol  ?_replaceTokens\@Localization\@\@IEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI void _replaceTokens(std::string &, std::vector<std::string> const &) const;
    /**
     * @symbol  ?_isCommaSeperatedLanguage\@Localization\@\@KA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool _isCommaSeperatedLanguage(std::string const &);

protected:

};