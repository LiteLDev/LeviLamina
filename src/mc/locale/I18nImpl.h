#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/SharedLockbox.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/Subject.h"
#include "mc/locale/I18n.h"
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
class I18nObserver;
class ImmutableLocalization;
class Localization;
class PackAccessStrategy;
class PackManifest;
class ResourceLoadManager;
class ResourcePackManager;
// clang-format on

class I18nImpl : public ::I18n {
public:
    // I18nImpl inner types declare
    // clang-format off
    struct CurrentLanguageInfo;
    // clang-format on

    // I18nImpl inner types define
    enum class NotifyMode : uchar {
        Always        = 0,
        LocaleChanged = 1,
    };

    struct CurrentLanguageInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ImmutableLocalization const>> mCurrentLanguage;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ImmutableLocalization const>> mCurrentPackMetaLanguage;
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
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ImmutableLocalization>>> mLanguages;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                              mLanguageCodes;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>>        mLanguageNames;
    ::ll::TypedStorage<
        8,
        32,
        ::Bedrock::Threading::
            SharedLockbox<::std::vector<::std::shared_ptr<::ImmutableLocalization>>, ::std::shared_mutex>>
                                                                      mPackKeywordLanguages;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string> const>     mPackReservedKeys;
    ::ll::TypedStorage<1, 1, bool>                                    mLanguageSupportsHypenSplitting;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager*>                  mResourcePackManager;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                     mAdditionalTranslationsBackupMutex;
    ::ll::TypedStorage<8, 24, ::std::vector<::ImmutableLocalization>> mAdditionalTranslationsBackup;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                     mLocalizationMutex;
    ::ll::TypedStorage<8, 104, ::Core::Subject<::I18nObserver, ::Bedrock::Threading::Mutex>> mSubject;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void clearLanguages() /*override*/;

    virtual ::std::vector<::std::string> findAvailableLanguages(::ResourcePackManager&) /*override*/;

    virtual ::std::unordered_map<::std::string, ::std::string>
    findAvailableLanguageNames(::ResourcePackManager&) /*override*/;

    virtual ::Bedrock::Threading::Async<void> loadLanguages(
        ::ResourcePackManager&,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>,
        ::std::string const&
    ) /*override*/;

    virtual void loadAllLanguages(::ResourcePackManager&) /*override*/;

    virtual ::std::vector<::std::string> getLanguageCodesFromPack(::PackAccessStrategy const&) /*override*/;

    virtual void loadLanguageKeywordsFromPack(::PackManifest const&, ::PackAccessStrategy const&) /*override*/;

    virtual void loadLanguageKeywordsFromPack(
        ::PackManifest const&,
        ::PackAccessStrategy const&,
        ::std::vector<::std::string> const&,
        ::std::optional<::std::vector<::std::string>> const&
    ) /*override*/;

    virtual void appendLanguageStringsFromPack(
        ::PackManifest const&,
        ::std::multimap<::std::string, ::std::pair<::std::string, ::std::string>> const&
    ) /*override*/;

    virtual ::std::unordered_map<::std::string, ::std::string>
    getLanguageKeywordsFromPack(::PackManifest const&, ::std::string const&) /*override*/;

    virtual void loadLangaugesByLocale(
        ::std::unordered_multimap<::std::string, ::std::pair<::std::string, ::std::string>> const&
    ) /*override*/;

    virtual void appendAdditionalTranslations(
        ::std::unordered_map<::std::string, ::std::string> const&,
        ::std::string const&
    ) /*override*/;

    virtual void appendLanguageStrings(::PackAccessStrategy*) /*override*/;

    virtual void addI18nObserver(::I18nObserver&) /*override*/;

    virtual void chooseLanguage(::std::string const&) /*override*/;

    virtual ::std::string
    get(::std::string const&,
        ::std::vector<::std::string> const&,
        ::std::shared_ptr<::Localization const> const) /*override*/;

    virtual ::std::string get(::std::string const&, ::std::shared_ptr<::Localization const> const) /*override*/;

    virtual ::std::string getPackKeywordValue(::PackManifest const&, ::std::string const&) /*override*/;

    virtual ::std::string getPackKeywordValueForTelemetry(::PackManifest const&, ::std::string const&) /*override*/;

    virtual bool hasPackKeyEntry(::PackManifest const&, ::std::string const&) /*override*/;

    virtual ::std::vector<::std::string> const& getSupportedLanguageCodes() /*override*/;

    virtual ::std::string const& getLanguageName(::std::string const&) /*override*/;

    virtual ::std::shared_ptr<::Localization const> const getLocaleFor(::std::string const&) /*override*/;

    virtual ::std::string const& getLocaleCodeFor(::std::string const&) /*override*/;

    virtual ::gsl::not_null<::std::shared_ptr<::Localization const>> getCurrentLanguage() /*override*/;

    virtual bool languageSupportsHypenSplitting() /*override*/;

    virtual ::std::string getLocalizedAssetFileWithFallback(::std::string const&, ::std::string const&) /*override*/;

    virtual bool isPackKeyword(::std::string const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI I18nImpl();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
