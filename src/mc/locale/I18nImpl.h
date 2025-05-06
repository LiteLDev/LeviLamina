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
