#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class I18nObserver;
class Localization;
class PackAccessStrategy;
class PackManifest;
class ResourceLoadManager;
class ResourcePackManager;
// clang-format on

class I18n {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~I18n();

    // vIndex: 1
    virtual void clearLanguages() = 0;

    // vIndex: 2
    virtual ::std::vector<::std::string> findAvailableLanguages(::ResourcePackManager&) = 0;

    // vIndex: 3
    virtual ::std::unordered_map<::std::string, ::std::string> findAvailableLanguageNames(::ResourcePackManager&) = 0;

    // vIndex: 4
    virtual void
    loadLanguages(::ResourcePackManager&, ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>, ::std::string const&) = 0;

    // vIndex: 5
    virtual void loadAllLanguages(::ResourcePackManager&) = 0;

    // vIndex: 6
    virtual ::std::vector<::std::string> getLanguageCodesFromPack(::PackAccessStrategy const&) = 0;

    // vIndex: 8
    virtual void loadLanguageKeywordsFromPack(::PackManifest const&, ::PackAccessStrategy const&) = 0;

    // vIndex: 7
    virtual void
    loadLanguageKeywordsFromPack(::PackManifest const&, ::PackAccessStrategy const&, ::std::vector<::std::string> const&) = 0;

    // vIndex: 9
    virtual void
    appendLanguageStringsFromPack(::PackManifest const&, ::std::multimap<::std::string, ::std::pair<::std::string, ::std::string>> const&) = 0;

    // vIndex: 10
    virtual ::std::unordered_map<::std::string, ::std::string>
    getLanguageKeywordsFromPack(::PackManifest const&, ::std::string const&) = 0;

    // vIndex: 11
    virtual void
    loadLangaugesByLocale(::std::
                              unordered_multimap<::std::string, ::std::pair<::std::string, ::std::string>> const&) = 0;

    // vIndex: 12
    virtual void
    appendAdditionalTranslations(::std::unordered_map<::std::string, ::std::string> const&, ::std::string const&) = 0;

    // vIndex: 13
    virtual void appendLanguageStrings(::PackAccessStrategy*) = 0;

    // vIndex: 14
    virtual void addI18nObserver(::I18nObserver&) = 0;

    // vIndex: 15
    virtual void chooseLanguage(::std::string const&) = 0;

    // vIndex: 17
    virtual ::std::string
    get(::std::string const&, ::std::vector<::std::string> const&, ::std::shared_ptr<::Localization> const) = 0;

    // vIndex: 16
    virtual ::std::string get(::std::string const&, ::std::shared_ptr<::Localization> const) = 0;

    // vIndex: 18
    virtual ::std::string getPackKeywordValue(::PackManifest const&, ::std::string const&) = 0;

    // vIndex: 19
    virtual ::std::string getPackKeywordValueForTelemetry(::PackManifest const&, ::std::string const&) = 0;

    // vIndex: 20
    virtual bool hasPackKeyEntry(::PackManifest const&, ::std::string const&) = 0;

    // vIndex: 21
    virtual ::std::vector<::std::string> const& getSupportedLanguageCodes() = 0;

    // vIndex: 22
    virtual ::std::string const& getLanguageName(::std::string const&) = 0;

    // vIndex: 23
    virtual ::std::shared_ptr<::Localization> const getLocaleFor(::std::string const&) = 0;

    // vIndex: 24
    virtual ::std::string const& getLocaleCodeFor(::std::string const&) = 0;

    // vIndex: 25
    virtual ::gsl::not_null<::std::shared_ptr<::Localization const>> getCurrentLanguage() = 0;

    // vIndex: 26
    virtual bool languageSupportsHypenSplitting() = 0;

    // vIndex: 27
    virtual ::std::string getLocalizedAssetFileWithFallback(::std::string const&, ::std::string const&) = 0;

    // vIndex: 28
    virtual bool isPackKeyword(::std::string const&) = 0;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NeutralLangCode();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
