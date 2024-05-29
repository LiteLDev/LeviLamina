#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class I18n {
public:
    // prevent constructor by default
    I18n& operator=(I18n const&);
    I18n(I18n const&);
    I18n();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1I18n@@UEAA@XZ
    virtual ~I18n();

    // vIndex: 1, symbol: ?clearLanguages@I18nImpl@@UEAAXXZ
    virtual void clearLanguages() = 0;

    // vIndex: 2, symbol:
    // ?findAvailableLanguages@I18nImpl@@UEAA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAVResourcePackManager@@@Z
    virtual std::vector<std::string> findAvailableLanguages(class ResourcePackManager&) = 0;

    // vIndex: 3, symbol:
    // ?findAvailableLanguageNames@I18nImpl@@UEAA?AV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@AEAVResourcePackManager@@@Z
    virtual std::unordered_map<std::string, std::string> findAvailableLanguageNames(class ResourcePackManager&) = 0;

    // vIndex: 4, symbol:
    // ?loadLanguages@I18nImpl@@UEAAXAEAVResourcePackManager@@V?$not_null@V?$NonOwnerPointer@VResourceLoadManager@@@Bedrock@@@gsl@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void
    loadLanguages(class ResourcePackManager&, Bedrock::NotNullNonOwnerPtr<class ResourceLoadManager>, std::string const&) = 0;

    // vIndex: 5, symbol: ?loadAllLanguages@I18nImpl@@UEAAXAEAVResourcePackManager@@@Z
    virtual void loadAllLanguages(class ResourcePackManager&) = 0;

    // vIndex: 6, symbol:
    // ?getLanguageCodesFromPack@I18nImpl@@UEAA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVPackAccessStrategy@@@Z
    virtual std::vector<std::string> getLanguageCodesFromPack(class PackAccessStrategy const&) = 0;

    // vIndex: 7, symbol: ?loadLanguageKeywordsFromPack@I18nImpl@@UEAAXAEBVPackManifest@@AEBVPackAccessStrategy@@@Z
    virtual void loadLanguageKeywordsFromPack(class PackManifest const&, class PackAccessStrategy const&) = 0;

    // vIndex: 8, symbol:
    // ?loadLanguageKeywordsFromPack@I18nImpl@@UEAAXAEBVPackManifest@@AEBVPackAccessStrategy@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    virtual void
    loadLanguageKeywordsFromPack(class PackManifest const&, class PackAccessStrategy const&, std::vector<std::string> const&) = 0;

    // vIndex: 9, symbol:
    // ?appendLanguageStringsFromPack@I18nImpl@@UEAAXAEBVPackManifest@@AEBV?$multimap@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@2@@std@@@2@@std@@@Z
    virtual void
    appendLanguageStringsFromPack(class PackManifest const&, std::multimap<std::string, std::pair<std::string, std::string>> const&) = 0;

    // vIndex: 10, symbol:
    // ?getLanguageKeywordsFromPack@I18nImpl@@UEAA?AV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@AEBVPackManifest@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    virtual std::unordered_map<std::string, std::string>
    getLanguageKeywordsFromPack(class PackManifest const&, std::string const&) = 0;

    // vIndex: 11, symbol:
    // ?loadLangaugesByLocale@I18nImpl@@UEAAXAEBV?$unordered_multimap@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@2@@std@@@2@@std@@@Z
    virtual void
    loadLangaugesByLocale(std::unordered_multimap<std::string, std::pair<std::string, std::string>> const&) = 0;

    // vIndex: 12, symbol:
    // ?appendAdditionalTranslations@I18nImpl@@UEAAXAEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    virtual void
    appendAdditionalTranslations(std::unordered_map<std::string, std::string> const&, std::string const&) = 0;

    // vIndex: 13, symbol: ?appendLanguageStrings@I18nImpl@@UEAAXPEAVPackAccessStrategy@@@Z
    virtual void appendLanguageStrings(class PackAccessStrategy*) = 0;

    // vIndex: 14, symbol:
    // ?appendTranslations@I18nImpl@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@3@@Z
    virtual void appendTranslations(std::string const&, std::unordered_map<std::string, std::string> const&) = 0;

    // vIndex: 15, symbol: ?addI18nObserver@I18nImpl@@UEAAXAEAVI18nObserver@@@Z
    virtual void addI18nObserver(class I18nObserver&) = 0;

    // vIndex: 16, symbol:
    // ?chooseLanguage@I18nImpl@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void chooseLanguage(std::string const&) = 0;

    // vIndex: 17, symbol: ?chooseLanguage@I18nImpl@@UEAAXAEBVLocalization@@@Z
    virtual void chooseLanguage(class Localization const&) = 0;

    // vIndex: 18, symbol:
    // ?get@I18nImpl@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@V?$shared_ptr@VLocalization@@@3@@Z
    virtual std::string
    get(std::string const&, std::vector<std::string> const&, std::shared_ptr<class Localization>) = 0;

    // vIndex: 19, symbol:
    // ?get@I18nImpl@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@V?$shared_ptr@VLocalization@@@3@@Z
    virtual std::string get(std::string const&, std::shared_ptr<class Localization>) = 0;

    // vIndex: 20, symbol:
    // ?getPackKeywordValue@I18nImpl@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPackManifest@@AEBV23@@Z
    virtual std::string getPackKeywordValue(class PackManifest const&, std::string const&) = 0;

    // vIndex: 21, symbol:
    // ?getPackKeywordValueForTelemetry@I18nImpl@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPackManifest@@AEBV23@@Z
    virtual std::string getPackKeywordValueForTelemetry(class PackManifest const&, std::string const&) = 0;

    // vIndex: 22, symbol:
    // ?hasPackKeyEntry@I18nImpl@@UEAA_NAEBVPackManifest@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool hasPackKeyEntry(class PackManifest const&, std::string const&) = 0;

    // vIndex: 23, symbol:
    // ?getSupportedLanguageCodes@I18nImpl@@UEAAAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    virtual std::vector<std::string> const& getSupportedLanguageCodes() = 0;

    // vIndex: 24, symbol:
    // ?getLanguageName@I18nImpl@@UEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
    virtual std::string const& getLanguageName(std::string const&) = 0;

    // vIndex: 25, symbol:
    // ?getLocaleFor@I18nImpl@@UEAA?BV?$shared_ptr@VLocalization@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    virtual std::shared_ptr<class Localization> const getLocaleFor(std::string const&) = 0;

    // vIndex: 26, symbol:
    // ?getLocaleCodeFor@I18nImpl@@UEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
    virtual std::string const& getLocaleCodeFor(std::string const&) = 0;

    // vIndex: 27, symbol: ?getCurrentLanguage@I18nImpl@@UEAA?AV?$optional_ref@$$CBVLocalization@@@@XZ
    virtual class optional_ref<class Localization const> getCurrentLanguage() = 0;

    // vIndex: 28, symbol: ?languageSupportsHypenSplitting@I18nImpl@@UEAA_NXZ
    virtual bool languageSupportsHypenSplitting() = 0;

    // vIndex: 29, symbol:
    // ?getLocalizedAssetFileWithFallback@I18nImpl@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@0@Z
    virtual std::string getLocalizedAssetFileWithFallback(std::string const&, std::string const&) = 0;

    // vIndex: 30, symbol:
    // ?isPackKeyword@I18nImpl@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isPackKeyword(std::string const&) = 0;

    // symbol: ?NeutralLangCode@I18n@@2QBDB
    MCAPI static char const NeutralLangCode[];

    // NOLINTEND
};

// symbol: ?getI18n@@YAAEAVI18n@@XZ
MCAPI I18n& getI18n();
