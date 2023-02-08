/**
 * @file  I18n.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
class Localization;

#undef BEFORE_EXTRA

/**
 * @brief MC class I18n.
 *
 */
class I18n {

#define AFTER_EXTRA
// Add Member There
public:
    LIAPI static Localization const* getLanguage(std::string const& languageCode);
    inline static std::string get(std::string const& key)
    {
        return get(key, mCurrentLanguage);
    }
    inline static std::string get(std::string const& key, std::vector<std::string> args)
    {
        return get(key, args, mCurrentLanguage);
    }
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_I18N
public:
    class I18n& operator=(class I18n const &) = delete;
    I18n(class I18n const &) = delete;
    I18n() = delete;
#endif

public:
    /**
     * @hash   -1740886367
     * @symbol  ?NeutralLangCode\@I18n\@\@2QBDB
     */
    MCAPI static char const NeutralLangCode[];
    /**
     * @hash   152404158
     * @symbol  ?addI18nObserver\@I18n\@\@SAXAEAVI18nObserver\@\@\@Z
     */
    MCAPI static void addI18nObserver(class I18nObserver &);
    /**
     * @hash   -1235796411
     * @symbol  ?appendLanguageStringsFromPack\@I18n\@\@SAXAEBVPackManifest\@\@AEBV?$multimap\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@2\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI static void appendLanguageStringsFromPack(class PackManifest const &, class std::multimap<std::string, struct std::pair<std::string, std::string>, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, struct std::pair<std::string, std::string>>>> const &);
    /**
     * @hash   -1651642126
     * @symbol  ?chooseLanguage\@I18n\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static void chooseLanguage(std::string const &);
    /**
     * @hash   -298969552
     * @symbol  ?chooseLanguage\@I18n\@\@SAXAEBVLocalization\@\@\@Z
     */
    MCAPI static void chooseLanguage(class Localization const &);
    /**
     * @hash   -1199603911
     * @symbol  ?findAvailableLanguageNames\@I18n\@\@SA?AV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@AEAVResourcePackManager\@\@\@Z
     */
    MCAPI static class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> findAvailableLanguageNames(class ResourcePackManager &);
    /**
     * @hash   -2052649672
     * @symbol  ?findAvailableLanguages\@I18n\@\@SA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEAVResourcePackManager\@\@\@Z
     */
    MCAPI static std::vector<std::string> findAvailableLanguages(class ResourcePackManager &);
    /**
     * @hash   1732807161
     * @symbol  ?get\@I18n\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@PEBVLocalization\@\@\@Z
     */
    MCAPI static std::string get(std::string const &, std::vector<std::string> const &, class Localization const *);
    /**
     * @hash   1375843127
     * @symbol  ?get\@I18n\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@PEBVLocalization\@\@\@Z
     */
    MCAPI static std::string get(std::string const &, class Localization const *);
    /**
     * @hash   767870837
     * @symbol  ?getCurrentLanguage\@I18n\@\@SA?AV?$optional_ref\@$$CBVLocalization\@\@\@\@XZ
     */
    MCAPI static class optional_ref<class Localization const> getCurrentLanguage();
    /**
     * @hash   -89211598
     * @symbol  ?getLanguageCodesFromPack\@I18n\@\@SA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVPackAccessStrategy\@\@\@Z
     */
    MCAPI static std::vector<std::string> getLanguageCodesFromPack(class PackAccessStrategy const &);
    /**
     * @hash   -2068790355
     * @symbol  ?getLocaleFor\@I18n\@\@SAAEBVLocalization\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class Localization const & getLocaleFor(std::string const &);
    /**
     * @hash   711723604
     * @symbol  ?getPackKeywordValue\@I18n\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPackManifest\@\@AEBV23\@\@Z
     */
    MCAPI static std::string getPackKeywordValue(class PackManifest const &, std::string const &);
    /**
     * @hash   -1818591196
     * @symbol  ?getPackKeywordValueForTelemetry\@I18n\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPackManifest\@\@AEBV23\@\@Z
     */
    MCAPI static std::string getPackKeywordValueForTelemetry(class PackManifest const &, std::string const &);
    /**
     * @hash   838688955
     * @symbol  ?isPackKeyword\@I18n\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool isPackKeyword(std::string const &);
    /**
     * @hash   2038838094
     * @symbol  ?loadAllLanguages\@I18n\@\@SAXAEAVResourcePackManager\@\@\@Z
     */
    MCAPI static void loadAllLanguages(class ResourcePackManager &);
    /**
     * @hash   168456651
     * @symbol  ?loadLanguageKeywordsFromPack\@I18n\@\@SAXAEBVPackManifest\@\@AEBVPackAccessStrategy\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI static void loadLanguageKeywordsFromPack(class PackManifest const &, class PackAccessStrategy const &, std::vector<std::string> const &);

//private:
    /**
     * @hash   2137655924
     * @symbol  ?_findAvailableLanguageNames\@I18n\@\@CAXAEBVValue\@Json\@\@AEAV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI static void _findAvailableLanguageNames(class Json::Value const &, class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> &);
    /**
     * @hash   -1157921962
     * @symbol  ?_findAvailableLanguages\@I18n\@\@CAXAEBVValue\@Json\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI static void _findAvailableLanguages(class Json::Value const &, std::vector<std::string> &);
    /**
     * @hash   -567918254
     * @symbol  ?_findLocaleFor\@I18n\@\@CAPEAVLocalization\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class Localization * _findLocaleFor(std::string const &);
    /**
     * @hash   1181412627
     * @symbol  ?_generatePackKeyPrefix\@I18n\@\@CA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPackManifest\@\@\@Z
     */
    MCAPI static std::string _generatePackKeyPrefix(class PackManifest const &);
    /**
     * @hash   756125243
     * @symbol  ?_getAdditionalTranslationsBackupLocale\@I18n\@\@CAPEAVLocalization\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI static class Localization * _getAdditionalTranslationsBackupLocale(std::string const &, bool);
    /**
     * @hash   1222452190
     * @symbol  ?_getLocaleCodeFor\@I18n\@\@CAAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI static std::string & _getLocaleCodeFor(std::string const &);
    /**
     * @hash   -718420830
     * @symbol  ?_getPackKeywordLocale\@I18n\@\@CAAEAVLocalization\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class Localization & _getPackKeywordLocale(std::string const &);

private:
    /**
     * @hash   164225959
     * @symbol  ?mAdditionalTranslationsBackup\@I18n\@\@0V?$vector\@V?$unique_ptr\@VLocalization\@\@U?$default_delete\@VLocalization\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VLocalization\@\@U?$default_delete\@VLocalization\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::vector<std::unique_ptr<class Localization>> mAdditionalTranslationsBackup;
    /**
     * @hash   1365701952
     * @symbol  ?mAdditionalTranslationsBackupMutex\@I18n\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mAdditionalTranslationsBackupMutex;
    /**
     * @hash   -445624858
     * @symbol  ?mCurrentLanguage\@I18n\@\@0PEBVLocalization\@\@EB
     */
    MCAPI static class Localization const * mCurrentLanguage;
    /**
     * @hash   1225677452
     * @symbol  ?mCurrentPackMetaLanguage\@I18n\@\@0PEBVLocalization\@\@EB
     */
    MCAPI static class Localization const * mCurrentPackMetaLanguage;
    /**
     * @hash   60736565
     * @symbol  ?mEmptyLanguage\@I18n\@\@0VLocalization\@\@B
     */
    MCAPI static class Localization const mEmptyLanguage;
    /**
     * @hash   1149397816
     * @symbol  ?mFormatDictionary\@I18n\@\@0V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@2\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<std::string, std::vector<std::string>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::vector<std::string>>>> mFormatDictionary;
    /**
     * @hash   1590746772
     * @symbol  ?mLanguageCodes\@I18n\@\@0V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::vector<std::string> mLanguageCodes;
    /**
     * @hash   -804317901
     * @symbol  ?mLanguageNames\@I18n\@\@0V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> mLanguageNames;
    /**
     * @hash   -259151937
     * @symbol  ?mLanguageSupportsHypenSplitting\@I18n\@\@0_NA
     */
    MCAPI static bool mLanguageSupportsHypenSplitting;
    /**
     * @hash   2030950397
     * @symbol  ?mLanguages\@I18n\@\@0V?$vector\@V?$unique_ptr\@VLocalization\@\@U?$default_delete\@VLocalization\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VLocalization\@\@U?$default_delete\@VLocalization\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::vector<std::unique_ptr<class Localization>> mLanguages;
    /**
     * @hash   -1126975305
     * @symbol  ?mPackKeywordLanguages\@I18n\@\@0V?$vector\@V?$unique_ptr\@VLocalization\@\@U?$default_delete\@VLocalization\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VLocalization\@\@U?$default_delete\@VLocalization\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::vector<std::unique_ptr<class Localization>> mPackKeywordLanguages;
    /**
     * @hash   352056722
     * @symbol  ?mPackReservedKeys\@I18n\@\@0V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI static std::vector<std::string> const mPackReservedKeys;
    /**
     * @hash   1002461165
     * @symbol  ?mResourcePackManager\@I18n\@\@0PEAVResourcePackManager\@\@EA
     */
    MCAPI static class ResourcePackManager * mResourcePackManager;
    /**
     * @symbol  ?mSubject\@I18n\@\@0V?$Subject\@VI18nObserver\@\@Vmutex\@std\@\@\@Core\@\@A
     */
    MCAPI static class Core::Subject<class I18nObserver, class std::mutex> mSubject;

};