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

    virtual ::std::vector<::std::string> findAvailableLanguages(::ResourcePackManager& resourcePackManager) = 0;

    virtual ::std::unordered_map<::std::string, ::std::string>
    findAvailableLanguageNames(::ResourcePackManager& resourcePackManager) = 0;

    virtual ::Bedrock::Threading::Async<void> loadLanguages(
        ::ResourcePackManager&                               resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager,
        ::std::string const&                                 initLang
    ) = 0;

    virtual void loadAllLanguages(::ResourcePackManager& resourcePackManager) = 0;

    virtual ::std::vector<::std::string> getLanguageCodesFromPack(::PackAccessStrategy const& accessStrategy) = 0;

    virtual void
    loadLanguageKeywordsFromPack(::PackManifest const& manifest, ::PackAccessStrategy const& accessStrategy) = 0;

    virtual void loadLanguageKeywordsFromPack(
        ::PackManifest const&                                manifest,
        ::PackAccessStrategy const&                          accessStrategy,
        ::std::vector<::std::string> const&                  languageCodes,
        ::std::optional<::std::vector<::std::string>> const& additionalLocKeys
    ) = 0;

    virtual void appendLanguageStringsFromPack(
        ::PackManifest const&                                                            manifest,
        ::std::multimap<::std::string, ::std::pair<::std::string, ::std::string>> const& localizationMapping
    ) = 0;

    virtual ::std::unordered_map<::std::string, ::std::string>
    getLanguageKeywordsFromPack(::PackManifest const& manifest, ::std::string const& keyword) = 0;

    virtual void loadLangaugesByLocale(
        ::std::unordered_multimap<::std::string, ::std::pair<::std::string, ::std::string>> const& storeLocalization
    ) = 0;

    virtual void appendAdditionalTranslations(
        ::std::unordered_map<::std::string, ::std::string> const& translations,
        ::std::string const&                                      keyPrefix
    ) = 0;

    virtual void appendLanguageStrings(::PackAccessStrategy* accessStrategy) = 0;

    virtual void addI18nObserver(::I18nObserver& observer) = 0;

    virtual void chooseLanguage(::std::string const& code) = 0;

    virtual ::std::string
    get(::std::string const&                          id,
        ::std::vector<::std::string> const&           params,
        ::std::shared_ptr<::Localization const> const locale) = 0;

    virtual ::std::string
    get(::std::string const& langString, ::std::shared_ptr<::Localization const> const locale) = 0;

    virtual ::std::string getPackKeywordValue(::PackManifest const& manifest, ::std::string const& key) = 0;

    virtual ::std::string getPackKeywordValueForTelemetry(::PackManifest const& manifest, ::std::string const& key) = 0;

    virtual bool hasPackKeyEntry(::PackManifest const& manifest, ::std::string const& key) = 0;

    virtual ::std::vector<::std::string> const& getSupportedLanguageCodes() = 0;

    virtual ::std::string const& getLanguageName(::std::string const& code) = 0;

    virtual ::std::shared_ptr<::Localization const> const getLocaleFor(::std::string const& code) = 0;

    virtual ::std::string const& getLocaleCodeFor(::std::string const& code) = 0;

    virtual ::gsl::not_null<::std::shared_ptr<::Localization const>> getCurrentLanguage() = 0;

    virtual bool languageSupportsHypenSplitting() = 0;

    virtual ::std::string
    getLocalizedAssetFileWithFallback(::std::string const& fileNamePrefix, ::std::string const& fileNameSuffix) = 0;

    virtual bool isPackKeyword(::std::string const& key) = 0;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NeutralLangCode();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
