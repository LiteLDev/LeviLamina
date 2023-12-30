#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/deps/core/Subject.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
namespace Json { class Value; }
// clang-format on

class I18n {
public:
    // prevent constructor by default
    I18n& operator=(I18n const&);
    I18n(I18n const&);
    I18n();

public:
    // NOLINTBEGIN
    // symbol: ?addI18nObserver@I18n@@SAXAEAVI18nObserver@@@Z
    MCAPI static void addI18nObserver(class I18nObserver&);

    // symbol:
    // ?appendLanguageStringsFromPack@I18n@@SAXAEBVPackManifest@@AEBV?$multimap@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@2@@std@@@2@@std@@@Z
    MCAPI static void appendLanguageStringsFromPack(
        class PackManifest const&                                              manifest,
        std::multimap<std::string, std::pair<std::string, std::string>> const& localizationMapping
    );

    // symbol: ?chooseLanguage@I18n@@SAXAEBVLocalization@@@Z
    MCAPI static void chooseLanguage(class Localization const& chosen);

    // symbol: ?chooseLanguage@I18n@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static void chooseLanguage(std::string const& code);

    // symbol:
    // ?findAvailableLanguageNames@I18n@@SA?AV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@AEAVResourcePackManager@@@Z
    MCAPI static std::unordered_map<std::string, std::string> findAvailableLanguageNames(class ResourcePackManager&);

    // symbol:
    // ?findAvailableLanguages@I18n@@SA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAVResourcePackManager@@@Z
    MCAPI static std::vector<std::string> findAvailableLanguages(class ResourcePackManager&);

    // symbol: ?get@I18n@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@PEBVLocalization@@@Z
    MCAPI static std::string get(std::string const&, class Localization const*);

    // symbol:
    // ?get@I18n@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@PEBVLocalization@@@Z
    MCAPI static std::string
    get(std::string const&              key,
        std::vector<std::string> const& args,
        class Localization const*       language = mCurrentLanguage);

    // symbol: ?getCurrentLanguage@I18n@@SA?AV?$optional_ref@$$CBVLocalization@@@@XZ
    MCAPI static class optional_ref<class Localization const> getCurrentLanguage();

    // symbol:
    // ?getLanguageCodesFromPack@I18n@@SA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVPackAccessStrategy@@@Z
    MCAPI static std::vector<std::string> getLanguageCodesFromPack(class PackAccessStrategy const&);

    // symbol: ?getLocaleCodeFor@I18n@@SAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
    MCAPI static std::string const& getLocaleCodeFor(std::string const& code);

    // symbol:
    // ?getLocaleFor@I18n@@SAAEBVLocalization@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class Localization const& getLocaleFor(std::string const& code);

    // symbol:
    // ?getPackKeywordValue@I18n@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPackManifest@@AEBV23@@Z
    MCAPI static std::string getPackKeywordValue(class PackManifest const& manifest, std::string const& key);

    // symbol:
    // ?getPackKeywordValueForTelemetry@I18n@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPackManifest@@AEBV23@@Z
    MCAPI static std::string
    getPackKeywordValueForTelemetry(class PackManifest const& manifest, std::string const& key);

    // symbol: ?isPackKeyword@I18n@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static bool isPackKeyword(std::string const& key);

    // symbol: ?loadAllLanguages@I18n@@SAXAEAVResourcePackManager@@@Z
    MCAPI static void loadAllLanguages(class ResourcePackManager& resourcePackManager);

    // symbol:
    // ?loadLanguageKeywordsFromPack@I18n@@SAXAEBVPackManifest@@AEBVPackAccessStrategy@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI static void loadLanguageKeywordsFromPack(
        class PackManifest const&       manifest,
        class PackAccessStrategy const& accessStrategy,
        std::vector<std::string> const& languageCodes
    );

    // symbol: ?NeutralLangCode@I18n@@2QBDB
    MCAPI static char const NeutralLangCode[];

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_findAvailableLanguageNames@I18n@@CAXAEBVValue@Json@@AEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@@Z
    MCAPI static void _findAvailableLanguageNames(
        class Json::Value const&                      root,
        std::unordered_map<std::string, std::string>& destination
    );

    // symbol:
    // ?_findAvailableLanguages@I18n@@CAXAEBVValue@Json@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI static void _findAvailableLanguages(class Json::Value const& root, std::vector<std::string>& destination);

    // symbol:
    // ?_findLocaleFor@I18n@@CAPEAVLocalization@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class Localization* _findLocaleFor(std::string const& code);

    // symbol:
    // ?_generatePackKeyPrefix@I18n@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPackManifest@@@Z
    MCAPI static std::string _generatePackKeyPrefix(class PackManifest const&);

    // symbol:
    // ?_getAdditionalTranslationsBackupLocale@I18n@@CAPEAVLocalization@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI static class Localization*
    _getAdditionalTranslationsBackupLocale(std::string const& langCode, bool createIfDoesNotExist);

    // symbol:
    // ?_getPackKeywordLocale@I18n@@CAAEAVLocalization@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class Localization& _getPackKeywordLocale(std::string const& langCode);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?mAdditionalTranslationsBackup@I18n@@0V?$vector@V?$unique_ptr@VLocalization@@U?$default_delete@VLocalization@@@std@@@std@@V?$allocator@V?$unique_ptr@VLocalization@@U?$default_delete@VLocalization@@@std@@@std@@@2@@std@@A
    MCAPI static std::vector<std::unique_ptr<class Localization>> mAdditionalTranslationsBackup;

    // symbol: ?mAdditionalTranslationsBackupMutex@I18n@@0VMutex@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::Mutex mAdditionalTranslationsBackupMutex;

    // symbol: ?mCurrentLanguage@I18n@@0PEBVLocalization@@EB
    MCAPI static class Localization const* mCurrentLanguage;

    // symbol: ?mCurrentPackMetaLanguage@I18n@@0PEBVLocalization@@EB
    MCAPI static class Localization const* mCurrentPackMetaLanguage;

    // symbol: ?mEmptyLanguage@I18n@@0VLocalization@@B
    MCAPI static class Localization const mEmptyLanguage;

    // symbol:
    // ?mFormatDictionary@I18n@@0V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@@std@@@2@@std@@A
    MCAPI static std::unordered_map<std::string, std::vector<std::string>> mFormatDictionary;

    // symbol:
    // ?mLanguageCodes@I18n@@0V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@A
    MCAPI static std::vector<std::string> mLanguageCodes;

    // symbol:
    // ?mLanguageNames@I18n@@0V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@A
    MCAPI static std::unordered_map<std::string, std::string> mLanguageNames;

    // symbol: ?mLanguageSupportsHypenSplitting@I18n@@0_NA
    MCAPI static bool mLanguageSupportsHypenSplitting;

    // symbol:
    // ?mLanguages@I18n@@0V?$vector@V?$unique_ptr@VLocalization@@U?$default_delete@VLocalization@@@std@@@std@@V?$allocator@V?$unique_ptr@VLocalization@@U?$default_delete@VLocalization@@@std@@@std@@@2@@std@@A
    MCAPI static std::vector<std::unique_ptr<class Localization>> mLanguages;

    // symbol:
    // ?mPackKeywordLanguages@I18n@@0V?$vector@V?$unique_ptr@VLocalization@@U?$default_delete@VLocalization@@@std@@@std@@V?$allocator@V?$unique_ptr@VLocalization@@U?$default_delete@VLocalization@@@std@@@std@@@2@@std@@A
    MCAPI static std::vector<std::unique_ptr<class Localization>> mPackKeywordLanguages;

    // symbol:
    // ?mPackReservedKeys@I18n@@0V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@B
    MCAPI static std::vector<std::string> const mPackReservedKeys;

    // symbol: ?mResourcePackManager@I18n@@0PEAVResourcePackManager@@EA
    MCAPI static class ResourcePackManager* mResourcePackManager;

    // symbol: ?mSubject@I18n@@0V?$Subject@VI18nObserver@@VMutex@Threading@Bedrock@@@Core@@A
    MCAPI static class Core::Subject<class I18nObserver, class Bedrock::Threading::Mutex> mSubject;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $mAdditionalTranslationsBackup() { return mAdditionalTranslationsBackup; }

    static auto& $mAdditionalTranslationsBackupMutex() { return mAdditionalTranslationsBackupMutex; }

    static auto& $mCurrentLanguage() { return mCurrentLanguage; }

    static auto& $mCurrentPackMetaLanguage() { return mCurrentPackMetaLanguage; }

    static auto& $mEmptyLanguage() { return mEmptyLanguage; }

    static auto& $mFormatDictionary() { return mFormatDictionary; }

    static auto& $mLanguageCodes() { return mLanguageCodes; }

    static auto& $mLanguageNames() { return mLanguageNames; }

    static auto& $mLanguageSupportsHypenSplitting() { return mLanguageSupportsHypenSplitting; }

    static auto& $mLanguages() { return mLanguages; }

    static auto& $mPackKeywordLanguages() { return mPackKeywordLanguages; }

    static auto& $mPackReservedKeys() { return mPackReservedKeys; }

    static auto& $mResourcePackManager() { return mResourcePackManager; }

    static auto& $mSubject() { return mSubject; }

    // NOLINTEND
};
