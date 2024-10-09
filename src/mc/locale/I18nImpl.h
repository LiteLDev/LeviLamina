#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/locale/I18n.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class I18nImpl : public ::I18n {
public:
    // I18nImpl inner types declare
    // clang-format off
    struct CurrentLanguageInfo;
    // clang-format on

    // I18nImpl inner types define
    struct CurrentLanguageInfo {
    public:
        // prevent constructor by default
        CurrentLanguageInfo& operator=(CurrentLanguageInfo const&);
        CurrentLanguageInfo(CurrentLanguageInfo const&);
        CurrentLanguageInfo();

    public:
        // NOLINTBEGIN
        MCAPI ~CurrentLanguageInfo();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    I18nImpl& operator=(I18nImpl const&);
    I18nImpl(I18nImpl const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~I18nImpl();

    // vIndex: 1
    virtual void clearLanguages();

    // vIndex: 2
    virtual std::vector<std::string> findAvailableLanguages(class ResourcePackManager& resourcePackManager);

    // vIndex: 3
    virtual std::unordered_map<std::string, std::string>
    findAvailableLanguageNames(class ResourcePackManager& resourcePackManager);

    // vIndex: 4
    virtual void loadLanguages(
        class ResourcePackManager&                             resourcePackManager,
        Bedrock::NotNullNonOwnerPtr<class ResourceLoadManager> resourceLoadManager,
        std::string const&                                     initLang
    );

    // vIndex: 5
    virtual void loadAllLanguages(class ResourcePackManager& resourcePackManager);

    // vIndex: 6
    virtual std::vector<std::string> getLanguageCodesFromPack(class PackAccessStrategy const& accessStrategy);

    // vIndex: 7
    virtual void
    loadLanguageKeywordsFromPack(class PackManifest const& manifest, class PackAccessStrategy const& accessStrategy);

    // vIndex: 8
    virtual void loadLanguageKeywordsFromPack(
        class PackManifest const&       manifest,
        class PackAccessStrategy const& accessStrategy,
        std::vector<std::string> const& languageCodes
    );

    // vIndex: 9
    virtual void appendLanguageStringsFromPack(
        class PackManifest const&                                              manifest,
        std::multimap<std::string, std::pair<std::string, std::string>> const& localizationMapping
    );

    // vIndex: 10
    virtual std::unordered_map<std::string, std::string>
    getLanguageKeywordsFromPack(class PackManifest const& manifest, std::string const& keyword);

    // vIndex: 11
    virtual void loadLangaugesByLocale(
        std::unordered_multimap<std::string, std::pair<std::string, std::string>> const& storeLocalization
    );

    // vIndex: 12
    virtual void appendAdditionalTranslations(
        std::unordered_map<std::string, std::string> const& translations,
        std::string const&                                  keyPrefix
    );

    // vIndex: 13
    virtual void appendLanguageStrings(class PackAccessStrategy* accessStrategy);

    // vIndex: 14
    virtual void
    appendTranslations(std::string const& localeCode, std::unordered_map<std::string, std::string> const& translations);

    // vIndex: 15
    virtual void addI18nObserver(class I18nObserver& observer);

    // vIndex: 16
    virtual void chooseLanguage(std::string const& code);

    // vIndex: 17
    virtual std::string
    get(std::string const& id, std::vector<std::string> const& params, std::shared_ptr<class Localization> locale);

    // vIndex: 18
    virtual std::string get(std::string const& langString, std::shared_ptr<class Localization> locale);

    // vIndex: 19
    virtual std::string getPackKeywordValue(class PackManifest const& manifest, std::string const& key);

    // vIndex: 20
    virtual std::string getPackKeywordValueForTelemetry(class PackManifest const& manifest, std::string const& key);

    // vIndex: 21
    virtual bool hasPackKeyEntry(class PackManifest const& manifest, std::string const& key);

    // vIndex: 22
    virtual std::vector<std::string> const& getSupportedLanguageCodes();

    // vIndex: 23
    virtual std::string const& getLanguageName(std::string const&);

    // vIndex: 24
    virtual std::shared_ptr<class Localization> const getLocaleFor(std::string const& code);

    // vIndex: 25
    virtual std::string const& getLocaleCodeFor(std::string const&);

    // vIndex: 26
    virtual gsl::not_null<std::shared_ptr<class Localization const>> getCurrentLanguage();

    // vIndex: 27
    virtual bool languageSupportsHypenSplitting();

    // vIndex: 28
    virtual std::string
    getLocalizedAssetFileWithFallback(std::string const& fileNamePrefix, std::string const& fileNameSuffix);

    // vIndex: 29
    virtual bool isPackKeyword(std::string const& key);

    MCAPI I18nImpl();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _chooseLanguage(std::shared_ptr<class Localization> const& chosen);

    MCAPI void _findAvailableLanguageNames(
        class Json::Value const&                      root,
        std::unordered_map<std::string, std::string>& destination
    );

    MCAPI void _findAvailableLanguages(class Json::Value const& root, std::vector<std::string>& destination);

    MCAPI std::shared_ptr<class Localization> _findLocaleFor(std::string const& code);

    MCAPI std::string _generatePackKeyPrefix(class PackManifest const& manifest);

    MCAPI std::shared_ptr<class Localization> _getFirstLocalization();

    MCAPI gsl::not_null<std::shared_ptr<class Localization>> _getPackKeywordLocale(std::string const& langCode);

    MCAPI void _notifyLanguagesLoaded();

    // NOLINTEND
};
