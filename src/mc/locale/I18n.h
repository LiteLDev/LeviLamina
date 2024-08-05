#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

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
    virtual std::vector<std::string> findAvailableLanguages(class ResourcePackManager&) = 0;

    // vIndex: 3
    virtual std::unordered_map<std::string, std::string> findAvailableLanguageNames(class ResourcePackManager&) = 0;

    // vIndex: 4
    virtual void
    loadLanguages(class ResourcePackManager&, Bedrock::NotNullNonOwnerPtr<class ResourceLoadManager>, std::string const&) = 0;

    // vIndex: 5
    virtual void loadAllLanguages(class ResourcePackManager&) = 0;

    // vIndex: 6
    virtual std::vector<std::string> getLanguageCodesFromPack(class PackAccessStrategy const&) = 0;

    // vIndex: 7
    virtual void loadLanguageKeywordsFromPack(class PackManifest const&, class PackAccessStrategy const&) = 0;

    // vIndex: 8
    virtual void
    loadLanguageKeywordsFromPack(class PackManifest const&, class PackAccessStrategy const&, std::vector<std::string> const&) = 0;

    // vIndex: 9
    virtual void
    appendLanguageStringsFromPack(class PackManifest const&, std::multimap<std::string, std::pair<std::string, std::string>> const&) = 0;

    // vIndex: 10
    virtual std::unordered_map<std::string, std::string>
    getLanguageKeywordsFromPack(class PackManifest const&, std::string const&) = 0;

    // vIndex: 11
    virtual void
    loadLangaugesByLocale(std::unordered_multimap<std::string, std::pair<std::string, std::string>> const&) = 0;

    // vIndex: 12
    virtual void
    appendAdditionalTranslations(std::unordered_map<std::string, std::string> const&, std::string const&) = 0;

    // vIndex: 13
    virtual void appendLanguageStrings(class PackAccessStrategy*) = 0;

    // vIndex: 14
    virtual void appendTranslations(std::string const&, std::unordered_map<std::string, std::string> const&) = 0;

    // vIndex: 15
    virtual void addI18nObserver(class I18nObserver&) = 0;

    // vIndex: 16
    virtual void chooseLanguage(std::string const&) = 0;

    // vIndex: 17
    virtual std::string
    get(std::string const&, std::vector<std::string> const&, std::shared_ptr<class Localization>) = 0;

    // vIndex: 18
    virtual std::string get(std::string const&, std::shared_ptr<class Localization>) = 0;

    // vIndex: 19
    virtual std::string getPackKeywordValue(class PackManifest const&, std::string const&) = 0;

    // vIndex: 20
    virtual std::string getPackKeywordValueForTelemetry(class PackManifest const&, std::string const&) = 0;

    // vIndex: 21
    virtual bool hasPackKeyEntry(class PackManifest const&, std::string const&) = 0;

    // vIndex: 22
    virtual std::vector<std::string> const& getSupportedLanguageCodes() = 0;

    // vIndex: 23
    virtual std::string const& getLanguageName(std::string const&) = 0;

    // vIndex: 24
    virtual std::shared_ptr<class Localization> const getLocaleFor(std::string const&) = 0;

    // vIndex: 25
    virtual std::string const& getLocaleCodeFor(std::string const&) = 0;

    // vIndex: 26
    virtual gsl::not_null<std::shared_ptr<class Localization const>> getCurrentLanguage() = 0;

    // vIndex: 27
    virtual bool languageSupportsHypenSplitting() = 0;

    // vIndex: 28
    virtual std::string getLocalizedAssetFileWithFallback(std::string const&, std::string const&) = 0;

    // vIndex: 29
    virtual bool isPackKeyword(std::string const&) = 0;

    MCAPI static char const NeutralLangCode[];

    // NOLINTEND
};

// symbol: ?getI18n@@YAAEAVI18n@@XZ
MCAPI I18n& getI18n();
