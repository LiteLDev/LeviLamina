#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
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
    virtual ~I18n();

    virtual void clearLanguages() = 0;

    virtual ::std::vector<::std::string> findAvailableLanguages(::ResourcePackManager&) = 0;

    virtual ::std::unordered_map<::std::string, ::std::string> findAvailableLanguageNames(::ResourcePackManager&) = 0;

    virtual ::Bedrock::Threading::Async<void> loadLanguages(
        ::ResourcePackManager&,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>,
        ::std::string const&
    ) = 0;

    virtual void loadAllLanguages(::ResourcePackManager&) = 0;

    virtual ::std::vector<::std::string> getLanguageCodesFromPack(::PackAccessStrategy const&) = 0;

    virtual void loadLanguageKeywordsFromPack(::PackManifest const&, ::PackAccessStrategy const&) = 0;

    virtual void loadLanguageKeywordsFromPack(
        ::PackManifest const&,
        ::PackAccessStrategy const&,
        ::std::vector<::std::string> const&,
        ::std::optional<::std::vector<::std::string>> const&
    ) = 0;

    virtual void appendLanguageStringsFromPack(
        ::PackManifest const&,
        ::std::multimap<::std::string, ::std::pair<::std::string, ::std::string>> const&
    ) = 0;

    virtual ::std::unordered_map<::std::string, ::std::string>
    getLanguageKeywordsFromPack(::PackManifest const&, ::std::string const&) = 0;

    virtual void loadLangaugesByLocale(
        ::std::unordered_multimap<::std::string, ::std::pair<::std::string, ::std::string>> const&
    ) = 0;

    virtual void
    appendAdditionalTranslations(::std::unordered_map<::std::string, ::std::string> const&, ::std::string const&) = 0;

    virtual void appendLanguageStrings(::PackAccessStrategy*) = 0;

    virtual void addI18nObserver(::I18nObserver&) = 0;

    virtual void chooseLanguage(::std::string const&) = 0;

    virtual ::std::string
    get(::std::string const&, ::std::vector<::std::string> const&, ::std::shared_ptr<::Localization const> const) = 0;

    virtual ::std::string get(::std::string const&, ::std::shared_ptr<::Localization const> const) = 0;

    virtual ::std::string getPackKeywordValue(::PackManifest const&, ::std::string const&) = 0;

    virtual ::std::string getPackKeywordValueForTelemetry(::PackManifest const&, ::std::string const&) = 0;

    virtual bool hasPackKeyEntry(::PackManifest const&, ::std::string const&) = 0;

    virtual ::std::vector<::std::string> const& getSupportedLanguageCodes() = 0;

    virtual ::std::string const& getLanguageName(::std::string const&) = 0;

    virtual ::std::shared_ptr<::Localization const> const getLocaleFor(::std::string const&) = 0;

    virtual ::std::string const& getLocaleCodeFor(::std::string const&) = 0;

    virtual ::gsl::not_null<::std::shared_ptr<::Localization const>> getCurrentLanguage() = 0;

    virtual bool languageSupportsHypenSplitting() = 0;

    virtual ::std::string getLocalizedAssetFileWithFallback(::std::string const&, ::std::string const&) = 0;

    virtual bool isPackKeyword(::std::string const&) = 0;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NeutralLangCode();
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

MCAPI I18n& getI18n();
