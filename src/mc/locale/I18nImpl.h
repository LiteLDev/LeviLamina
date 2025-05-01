#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/SharedLockbox.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/Subject.h"
#include "mc/locale/I18n.h"
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
class I18nObserver;
class Localization;
class PackAccessStrategy;
class PackManifest;
class ResourceLoadManager;
class ResourcePackManager;
namespace Bedrock::Threading { class Mutex; }
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
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Localization>> mCurrentLanguage;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Localization>> mCurrentPackMetaLanguage;
        // NOLINTEND
    };

    using LockedCurrentLanguageInfo =
        ::Bedrock::Threading::SharedLockbox<::I18nImpl::CurrentLanguageInfo, ::std::shared_mutex>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Localization const>> mEmptyLanguage;
    ::ll::TypedStorage<8, 40, ::Bedrock::Threading::SharedLockbox<::I18nImpl::CurrentLanguageInfo, ::std::shared_mutex>>
                                                                                                 mCurrentLanguageInfo;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::Localization>>>                  mLanguages;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                                      mLanguageCodes;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>>                mLanguageNames;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::Localization>>>                  mPackKeywordLanguages;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string> const>                                mPackReservedKeys;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::vector<::std::string>>> mFormatDictionary;
    ::ll::TypedStorage<1, 1, bool>                                              mLanguageSupportsHypenSplitting;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager*>                            mResourcePackManager;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                               mAdditionalTranslationsBackupMutex;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::Localization>>> mAdditionalTranslationsBackup;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                               mLocalizationMutex;
    ::ll::TypedStorage<8, 104, ::Core::Subject<::I18nObserver, ::Bedrock::Threading::Mutex>> mSubject;
    // NOLINTEND

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
    MCNAPI I18nImpl();

    MCNAPI void _chooseLanguage(::std::shared_ptr<::Localization> const& chosen);

    MCNAPI void _findAvailableLanguageNames(
        ::Json::Value const&                                root,
        ::std::unordered_map<::std::string, ::std::string>& destination
    );

    MCNAPI void _findAvailableLanguages(::Json::Value const& root, ::std::vector<::std::string>& destination);

    MCNAPI ::std::shared_ptr<::Localization> _findLocaleFor(::std::string const& code);

    MCNAPI ::std::string _generatePackKeyPrefix(::PackManifest const& manifest);

    MCNAPI ::std::string& _getLocaleCodeFor(::std::string const& code);

    MCNAPI ::gsl::not_null<::std::shared_ptr<::Localization>> _getPackKeywordLocale(::std::string const& langCode);

    MCNAPI void _notifyLanguagesLoaded();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $clearLanguages();

    MCNAPI ::std::vector<::std::string> $findAvailableLanguages(::ResourcePackManager& resourcePackManager);

    MCNAPI ::std::unordered_map<::std::string, ::std::string>
    $findAvailableLanguageNames(::ResourcePackManager& resourcePackManager);

    MCNAPI void $loadLanguages(
        ::ResourcePackManager&                               resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager,
        ::std::string const&                                 initLang
    );

    MCNAPI void $loadAllLanguages(::ResourcePackManager& resourcePackManager);

    MCNAPI ::std::vector<::std::string> $getLanguageCodesFromPack(::PackAccessStrategy const& accessStrategy);

    MCNAPI void
    $loadLanguageKeywordsFromPack(::PackManifest const& manifest, ::PackAccessStrategy const& accessStrategy);

    MCNAPI void $loadLanguageKeywordsFromPack(
        ::PackManifest const&               manifest,
        ::PackAccessStrategy const&         accessStrategy,
        ::std::vector<::std::string> const& languageCodes
    );

    MCNAPI void $appendLanguageStringsFromPack(
        ::PackManifest const&                                                            manifest,
        ::std::multimap<::std::string, ::std::pair<::std::string, ::std::string>> const& localizationMapping
    );

    MCNAPI ::std::unordered_map<::std::string, ::std::string>
    $getLanguageKeywordsFromPack(::PackManifest const& manifest, ::std::string const& keyword);

    MCNAPI void $loadLangaugesByLocale(
        ::std::unordered_multimap<::std::string, ::std::pair<::std::string, ::std::string>> const& storeLocalization
    );

    MCNAPI void $appendAdditionalTranslations(
        ::std::unordered_map<::std::string, ::std::string> const& translations,
        ::std::string const&                                      keyPrefix
    );

    MCNAPI void $appendLanguageStrings(::PackAccessStrategy* accessStrategy);

    MCNAPI void $addI18nObserver(::I18nObserver& observer);

    MCNAPI void $chooseLanguage(::std::string const& code);

    MCNAPI ::std::string $get(
        ::std::string const&                    id,
        ::std::vector<::std::string> const&     params,
        ::std::shared_ptr<::Localization> const locale
    );

    MCNAPI ::std::string $get(::std::string const& langString, ::std::shared_ptr<::Localization> const locale);

    MCNAPI ::std::string $getPackKeywordValue(::PackManifest const& manifest, ::std::string const& key);

    MCNAPI ::std::string $getPackKeywordValueForTelemetry(::PackManifest const& manifest, ::std::string const& key);

    MCNAPI bool $hasPackKeyEntry(::PackManifest const& manifest, ::std::string const& key);

    MCNAPI ::std::vector<::std::string> const& $getSupportedLanguageCodes();

    MCNAPI ::std::string const& $getLanguageName(::std::string const& code);

    MCNAPI ::std::shared_ptr<::Localization> const $getLocaleFor(::std::string const& code);

    MCNAPI ::std::string const& $getLocaleCodeFor(::std::string const& code);

    MCNAPI ::gsl::not_null<::std::shared_ptr<::Localization const>> $getCurrentLanguage();

    MCNAPI bool $languageSupportsHypenSplitting();

    MCNAPI ::std::string
    $getLocalizedAssetFileWithFallback(::std::string const& fileNamePrefix, ::std::string const& fileNameSuffix);

    MCNAPI bool $isPackKeyword(::std::string const& key);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
