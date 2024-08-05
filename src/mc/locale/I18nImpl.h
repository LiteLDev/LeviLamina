#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
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
    virtual std::vector<std::string> findAvailableLanguages(class ResourcePackManager&);

    // vIndex: 3
    virtual std::unordered_map<std::string, std::string> findAvailableLanguageNames(class ResourcePackManager&);

    // vIndex: 4
    virtual void
    loadLanguages(class ResourcePackManager&, Bedrock::NotNullNonOwnerPtr<class ResourceLoadManager>, std::string const&);

    // vIndex: 5
    virtual void loadAllLanguages(class ResourcePackManager&);

    // vIndex: 6
    virtual std::vector<std::string> getLanguageCodesFromPack(class PackAccessStrategy const&);

    // vIndex: 7
    virtual void loadLanguageKeywordsFromPack(class PackManifest const&, class PackAccessStrategy const&);

    // vIndex: 8
    virtual void
    loadLanguageKeywordsFromPack(class PackManifest const&, class PackAccessStrategy const&, std::vector<std::string> const&);

    // vIndex: 9
    virtual void
    appendLanguageStringsFromPack(class PackManifest const&, std::multimap<std::string, std::pair<std::string, std::string>> const&);

    // vIndex: 10
    virtual std::unordered_map<std::string, std::string>
    getLanguageKeywordsFromPack(class PackManifest const&, std::string const&);

    // vIndex: 11
    virtual void
    loadLangaugesByLocale(std::unordered_multimap<std::string, std::pair<std::string, std::string>> const&);

    // vIndex: 12
    virtual void appendAdditionalTranslations(std::unordered_map<std::string, std::string> const&, std::string const&);

    // vIndex: 13
    virtual void appendLanguageStrings(class PackAccessStrategy*);

    // vIndex: 14
    virtual void appendTranslations(std::string const&, std::unordered_map<std::string, std::string> const&);

    // vIndex: 15
    virtual void addI18nObserver(class I18nObserver&);

    // vIndex: 16
    virtual void chooseLanguage(std::string const&);

    // vIndex: 17
    virtual std::string get(std::string const&, std::vector<std::string> const&, std::shared_ptr<class Localization>);

    // vIndex: 18
    virtual std::string get(std::string const&, std::shared_ptr<class Localization>);

    // vIndex: 19
    virtual std::string getPackKeywordValue(class PackManifest const&, std::string const&);

    // vIndex: 20
    virtual std::string getPackKeywordValueForTelemetry(class PackManifest const&, std::string const&);

    // vIndex: 21
    virtual bool hasPackKeyEntry(class PackManifest const&, std::string const&);

    // vIndex: 22
    virtual std::vector<std::string> const& getSupportedLanguageCodes();

    // vIndex: 23
    virtual std::string const& getLanguageName(std::string const&);

    // vIndex: 24
    virtual std::shared_ptr<class Localization> const getLocaleFor(std::string const&);

    // vIndex: 25
    virtual std::string const& getLocaleCodeFor(std::string const&);

    // vIndex: 26
    virtual gsl::not_null<std::shared_ptr<class Localization const>> getCurrentLanguage();

    // vIndex: 27
    virtual bool languageSupportsHypenSplitting();

    // vIndex: 28
    virtual std::string getLocalizedAssetFileWithFallback(std::string const&, std::string const&);

    // vIndex: 29
    virtual bool isPackKeyword(std::string const&);

    MCAPI I18nImpl();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _chooseLanguage(std::shared_ptr<class Localization> const&);

    MCAPI void _findAvailableLanguageNames(class Json::Value const&, std::unordered_map<std::string, std::string>&);

    MCAPI void _findAvailableLanguages(class Json::Value const&, std::vector<std::string>&);

    MCAPI std::shared_ptr<class Localization> _findLocaleFor(std::string const&);

    MCAPI std::string _generatePackKeyPrefix(class PackManifest const&);

    MCAPI std::shared_ptr<class Localization> _getFirstLocalization();

    MCAPI gsl::not_null<std::shared_ptr<class Localization>> _getPackKeywordLocale(std::string const&);

    MCAPI void _notifyLanguagesLoaded();

    // NOLINTEND
};
