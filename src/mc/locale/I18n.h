#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

class I18n {
public:
    // prevent constructor by default
    I18n& operator=(I18n const&);
    I18n(I18n const&);
    I18n();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~I18n();

    // vIndex: 1
    virtual void clearLanguages() = 0;

    // vIndex: 2
    virtual std::vector<std::string> findAvailableLanguages(class ResourcePackManager& resourcePackManager) = 0;

    // vIndex: 3
    virtual std::unordered_map<std::string, std::string>
    findAvailableLanguageNames(class ResourcePackManager& resourcePackManager) = 0;

    // vIndex: 4
    virtual void loadLanguages(
        class ResourcePackManager&                             resourcePackManager,
        Bedrock::NotNullNonOwnerPtr<class ResourceLoadManager> resourceLoadManager,
        std::string const&                                     initLang
    ) = 0;

    // vIndex: 5
    virtual void loadAllLanguages(class ResourcePackManager& resourcePackManager) = 0;

    // vIndex: 6
    virtual std::vector<std::string> getLanguageCodesFromPack(class PackAccessStrategy const& accessStrategy) = 0;

    // vIndex: 7
    virtual void loadLanguageKeywordsFromPack(
        class PackManifest const&       manifest,
        class PackAccessStrategy const& accessStrategy
    ) = 0;

    // vIndex: 8
    virtual void loadLanguageKeywordsFromPack(
        class PackManifest const&       manifest,
        class PackAccessStrategy const& accessStrategy,
        std::vector<std::string> const& languageCodes
    ) = 0;

    // vIndex: 9
    virtual void appendLanguageStringsFromPack(
        class PackManifest const&                                              manifest,
        std::multimap<std::string, std::pair<std::string, std::string>> const& localizationMapping
    ) = 0;

    // vIndex: 10
    virtual std::unordered_map<std::string, std::string>
    getLanguageKeywordsFromPack(class PackManifest const& manifest, std::string const& keyword) = 0;

    // vIndex: 11
    virtual void loadLangaugesByLocale(
        std::unordered_multimap<std::string, std::pair<std::string, std::string>> const& storeLocalization
    ) = 0;

    // vIndex: 12
    virtual void appendAdditionalTranslations(
        std::unordered_map<std::string, std::string> const& translations,
        std::string const&                                  keyPrefix
    ) = 0;

    // vIndex: 13
    virtual void appendLanguageStrings(class PackAccessStrategy* accessStrategy) = 0;

    // vIndex: 14
    virtual void appendTranslations(
        std::string const&                                  localeCode,
        std::unordered_map<std::string, std::string> const& translations
    ) = 0;

    // vIndex: 15
    virtual void addI18nObserver(class I18nObserver& observer) = 0;

    // vIndex: 16
    virtual void chooseLanguage(std::string const& code) = 0;

    // vIndex: 17
    virtual std::string
    get(std::string const& id, std::vector<std::string> const& params, std::shared_ptr<class Localization> locale) = 0;

    // vIndex: 18
    virtual std::string get(std::string const& langString, std::shared_ptr<class Localization> locale) = 0;

    // vIndex: 19
    virtual std::string getPackKeywordValue(class PackManifest const& manifest, std::string const& key) = 0;

    // vIndex: 20
    virtual std::string getPackKeywordValueForTelemetry(class PackManifest const& manifest, std::string const& key) = 0;

    // vIndex: 21
    virtual bool hasPackKeyEntry(class PackManifest const& manifest, std::string const& key) = 0;

    // vIndex: 22
    virtual std::vector<std::string> const& getSupportedLanguageCodes() = 0;

    // vIndex: 23
    virtual std::string const& getLanguageName(std::string const&) = 0;

    // vIndex: 24
    virtual std::shared_ptr<class Localization> const getLocaleFor(std::string const& code) = 0;

    // vIndex: 25
    virtual std::string const& getLocaleCodeFor(std::string const&) = 0;

    // vIndex: 26
    virtual gsl::not_null<std::shared_ptr<class Localization const>> getCurrentLanguage() = 0;

    // vIndex: 27
    virtual bool languageSupportsHypenSplitting() = 0;

    // vIndex: 28
    virtual std::string
    getLocalizedAssetFileWithFallback(std::string const& fileNamePrefix, std::string const& fileNameSuffix) = 0;

    // vIndex: 29
    virtual bool isPackKeyword(std::string const& key) = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI static auto NeutralLangCode() -> char const (&)[];

    // NOLINTEND
};
