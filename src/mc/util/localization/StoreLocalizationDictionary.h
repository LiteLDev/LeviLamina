#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/locale/I18nObserver.h"
#include "mc/util/localization/ILocalizationDictionary.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
class PackManifest;
namespace Json { class Value; }
// clang-format on

class StoreLocalizationDictionary : public ::ILocalizationDictionary,
                                    public ::I18nObserver,
                                    public ::std::enable_shared_from_this<::StoreLocalizationDictionary> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk2a5ec3;
    ::ll::UntypedStorage<1, 1> mUnkbe04a1;
    // NOLINTEND

public:
    // prevent constructor by default
    StoreLocalizationDictionary& operator=(StoreLocalizationDictionary const&);
    StoreLocalizationDictionary(StoreLocalizationDictionary const&);

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~StoreLocalizationDictionary() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~StoreLocalizationDictionary() /*override*/;
#endif

    virtual ::std::string getLocString(::std::string const& locKey) const /*override*/;

    virtual bool isLocalizationReady() const /*override*/;

    virtual void onLanguageChanged(::std::string const&, bool) /*override*/;

    virtual void onLanguageKeywordsLoadedFromPack(::PackManifest const&) /*override*/;

    virtual void onLanguagesLoaded() /*override*/;

    virtual void _updateLoc() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C StoreLocalizationDictionary();

    MCNAPI_C ::Json::Value _getDictionaryJsonFromLangFile();

    MCNAPI_C void fetchLocalizationBinary(
        ::std::string const&     url,
        ::ContentCatalogService& catalogService,
        uint                     currentFetchAttempt
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::std::string $getLocString(::std::string const& locKey) const;

    MCNAPI bool $isLocalizationReady() const;

    MCNAPI void $onLanguageChanged(::std::string const&, bool);

    MCNAPI void $onLanguageKeywordsLoadedFromPack(::PackManifest const&);

    MCNAPI void $onLanguagesLoaded();

    MCNAPI void $_updateLoc();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForI18nObserver();

    MCNAPI static void** $vftableForILocalizationDictionary();
    // NOLINTEND
};
