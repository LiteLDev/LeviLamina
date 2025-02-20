#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/SharedLockbox.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/locale/I18n.h"

// auto generated forward declare list
// clang-format off
class I18nObserver;
class Localization;
class PackAccessStrategy;
class PackManifest;
class ResourceLoadManager;
class ResourcePackManager;
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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkc50413;
        ::ll::UntypedStorage<8, 16> mUnk264029;
        // NOLINTEND

    public:
        // prevent constructor by default
        CurrentLanguageInfo& operator=(CurrentLanguageInfo const&);
        CurrentLanguageInfo(CurrentLanguageInfo const&);
        CurrentLanguageInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk9376ff;
    ::ll::UntypedStorage<8, 40>  mUnk1db5c2;
    ::ll::UntypedStorage<8, 24>  mUnk850180;
    ::ll::UntypedStorage<8, 24>  mUnkac16d9;
    ::ll::UntypedStorage<8, 64>  mUnk8ed9f6;
    ::ll::UntypedStorage<8, 24>  mUnkadbc53;
    ::ll::UntypedStorage<8, 24>  mUnk2cf824;
    ::ll::UntypedStorage<8, 64>  mUnke0b471;
    ::ll::UntypedStorage<1, 1>   mUnk9ee6e7;
    ::ll::UntypedStorage<8, 8>   mUnk64d343;
    ::ll::UntypedStorage<8, 8>   mUnkea19e8;
    ::ll::UntypedStorage<8, 24>  mUnk30b5e0;
    ::ll::UntypedStorage<8, 8>   mUnkb7bd07;
    ::ll::UntypedStorage<8, 104> mUnk23e1f9;
    // NOLINTEND

public:
    // prevent constructor by default
    I18nImpl& operator=(I18nImpl const&);
    I18nImpl(I18nImpl const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void clearLanguages() /*override*/;

    // vIndex: 2
    virtual ::std::vector<::std::string> findAvailableLanguages(::ResourcePackManager& resourcePackManager
    ) /*override*/;

    // vIndex: 3
    virtual ::std::unordered_map<::std::string, ::std::string>
    findAvailableLanguageNames(::ResourcePackManager& resourcePackManager) /*override*/;

    // vIndex: 4
    virtual void loadLanguages(
        ::ResourcePackManager&                               resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager,
        ::std::string const&                                 initLang
    ) /*override*/;

    // vIndex: 5
    virtual void loadAllLanguages(::ResourcePackManager& resourcePackManager) /*override*/;

    // vIndex: 6
    virtual ::std::vector<::std::string> getLanguageCodesFromPack(::PackAccessStrategy const& accessStrategy
    ) /*override*/;

    // vIndex: 8
    virtual void loadLanguageKeywordsFromPack(
        ::PackManifest const&       manifest,
        ::PackAccessStrategy const& accessStrategy
    ) /*override*/;

    // vIndex: 7
    virtual void loadLanguageKeywordsFromPack(
        ::PackManifest const&               manifest,
        ::PackAccessStrategy const&         accessStrategy,
        ::std::vector<::std::string> const& languageCodes
    ) /*override*/;

    // vIndex: 9
    virtual void appendLanguageStringsFromPack(
        ::PackManifest const&                                                            manifest,
        ::std::multimap<::std::string, ::std::pair<::std::string, ::std::string>> const& localizationMapping
    ) /*override*/;

    // vIndex: 10
    virtual ::std::unordered_map<::std::string, ::std::string>
    getLanguageKeywordsFromPack(::PackManifest const& manifest, ::std::string const& keyword) /*override*/;

    // vIndex: 11
    virtual void loadLangaugesByLocale(
        ::std::unordered_multimap<::std::string, ::std::pair<::std::string, ::std::string>> const& storeLocalization
    ) /*override*/;

    // vIndex: 12
    virtual void appendAdditionalTranslations(
        ::std::unordered_map<::std::string, ::std::string> const& translations,
        ::std::string const&                                      keyPrefix
    ) /*override*/;

    // vIndex: 13
    virtual void appendLanguageStrings(::PackAccessStrategy* accessStrategy) /*override*/;

    // vIndex: 14
    virtual void addI18nObserver(::I18nObserver& observer) /*override*/;

    // vIndex: 15
    virtual void chooseLanguage(::std::string const& code) /*override*/;

    // vIndex: 17
    virtual ::std::string
    get(::std::string const&                    id,
        ::std::vector<::std::string> const&     params,
        ::std::shared_ptr<::Localization> const locale) /*override*/;

    // vIndex: 16
    virtual ::std::string
    get(::std::string const& langString, ::std::shared_ptr<::Localization> const locale) /*override*/;

    // vIndex: 18
    virtual ::std::string getPackKeywordValue(::PackManifest const& manifest, ::std::string const& key) /*override*/;

    // vIndex: 19
    virtual ::std::string
    getPackKeywordValueForTelemetry(::PackManifest const& manifest, ::std::string const& key) /*override*/;

    // vIndex: 20
    virtual bool hasPackKeyEntry(::PackManifest const& manifest, ::std::string const& key) /*override*/;

    // vIndex: 21
    virtual ::std::vector<::std::string> const& getSupportedLanguageCodes() /*override*/;

    // vIndex: 22
    virtual ::std::string const& getLanguageName(::std::string const& code) /*override*/;

    // vIndex: 23
    virtual ::std::shared_ptr<::Localization> const getLocaleFor(::std::string const& code) /*override*/;

    // vIndex: 24
    virtual ::std::string const& getLocaleCodeFor(::std::string const& code) /*override*/;

    // vIndex: 25
    virtual ::gsl::not_null<::std::shared_ptr<::Localization const>> getCurrentLanguage() /*override*/;

    // vIndex: 26
    virtual bool languageSupportsHypenSplitting() /*override*/;

    // vIndex: 27
    virtual ::std::string getLocalizedAssetFileWithFallback(
        ::std::string const& fileNamePrefix,
        ::std::string const& fileNameSuffix
    ) /*override*/;

    // vIndex: 28
    virtual bool isPackKeyword(::std::string const& key) /*override*/;

    // vIndex: 0
    virtual ~I18nImpl() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI I18nImpl();

    MCAPI void _chooseLanguage(::std::shared_ptr<::Localization> const& chosen);

    MCAPI void _findAvailableLanguageNames(
        ::Json::Value const&                                root,
        ::std::unordered_map<::std::string, ::std::string>& destination
    );

    MCAPI void _findAvailableLanguages(::Json::Value const& root, ::std::vector<::std::string>& destination);

    MCAPI ::std::shared_ptr<::Localization> _findLocaleFor(::std::string const& code);

    MCAPI ::std::string _generatePackKeyPrefix(::PackManifest const& manifest);

    MCAPI ::std::string& _getLocaleCodeFor(::std::string const& code);

    MCAPI ::gsl::not_null<::std::shared_ptr<::Localization>> _getPackKeywordLocale(::std::string const& langCode);

    MCAPI void _notifyLanguagesLoaded();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $clearLanguages();

    MCAPI ::std::vector<::std::string> $findAvailableLanguages(::ResourcePackManager& resourcePackManager);

    MCAPI ::std::unordered_map<::std::string, ::std::string>
    $findAvailableLanguageNames(::ResourcePackManager& resourcePackManager);

    MCAPI void $loadLanguages(
        ::ResourcePackManager&                               resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager,
        ::std::string const&                                 initLang
    );

    MCAPI void $loadAllLanguages(::ResourcePackManager& resourcePackManager);

    MCAPI ::std::vector<::std::string> $getLanguageCodesFromPack(::PackAccessStrategy const& accessStrategy);

    MCAPI void
    $loadLanguageKeywordsFromPack(::PackManifest const& manifest, ::PackAccessStrategy const& accessStrategy);

    MCAPI void $loadLanguageKeywordsFromPack(
        ::PackManifest const&               manifest,
        ::PackAccessStrategy const&         accessStrategy,
        ::std::vector<::std::string> const& languageCodes
    );

    MCAPI void $appendLanguageStringsFromPack(
        ::PackManifest const&                                                            manifest,
        ::std::multimap<::std::string, ::std::pair<::std::string, ::std::string>> const& localizationMapping
    );

    MCAPI ::std::unordered_map<::std::string, ::std::string>
    $getLanguageKeywordsFromPack(::PackManifest const& manifest, ::std::string const& keyword);

    MCAPI void $loadLangaugesByLocale(
        ::std::unordered_multimap<::std::string, ::std::pair<::std::string, ::std::string>> const& storeLocalization
    );

    MCAPI void $appendAdditionalTranslations(
        ::std::unordered_map<::std::string, ::std::string> const& translations,
        ::std::string const&                                      keyPrefix
    );

    MCAPI void $appendLanguageStrings(::PackAccessStrategy* accessStrategy);

    MCAPI void $addI18nObserver(::I18nObserver& observer);

    MCAPI void $chooseLanguage(::std::string const& code);

    MCAPI ::std::string $get(
        ::std::string const&                    id,
        ::std::vector<::std::string> const&     params,
        ::std::shared_ptr<::Localization> const locale
    );

    MCAPI ::std::string $get(::std::string const& langString, ::std::shared_ptr<::Localization> const locale);

    MCAPI ::std::string $getPackKeywordValue(::PackManifest const& manifest, ::std::string const& key);

    MCAPI ::std::string $getPackKeywordValueForTelemetry(::PackManifest const& manifest, ::std::string const& key);

    MCAPI bool $hasPackKeyEntry(::PackManifest const& manifest, ::std::string const& key);

    MCFOLD ::std::vector<::std::string> const& $getSupportedLanguageCodes();

    MCAPI ::std::string const& $getLanguageName(::std::string const& code);

    MCAPI ::std::shared_ptr<::Localization> const $getLocaleFor(::std::string const& code);

    MCAPI ::std::string const& $getLocaleCodeFor(::std::string const& code);

    MCAPI ::gsl::not_null<::std::shared_ptr<::Localization const>> $getCurrentLanguage();

    MCAPI bool $languageSupportsHypenSplitting();

    MCAPI ::std::string
    $getLocalizedAssetFileWithFallback(::std::string const& fileNamePrefix, ::std::string const& fileNameSuffix);

    MCAPI bool $isPackKeyword(::std::string const& key);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
