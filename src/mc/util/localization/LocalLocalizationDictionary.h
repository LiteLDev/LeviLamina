#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/locale/I18nObserver.h"
#include "mc/util/localization/ILocalizationDictionary.h"

// auto generated forward declare list
// clang-format off
class Localization;
class PackManifest;
// clang-format on

class LocalLocalizationDictionary : public ::ILocalizationDictionary, public ::I18nObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1e3516;
    ::ll::UntypedStorage<8, 8> mUnkffd9bb;
    ::ll::UntypedStorage<1, 1> mUnkdac6be;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalLocalizationDictionary& operator=(LocalLocalizationDictionary const&);
    LocalLocalizationDictionary(LocalLocalizationDictionary const&);
    LocalLocalizationDictionary();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~LocalLocalizationDictionary() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~LocalLocalizationDictionary() /*override*/;
#endif

    virtual ::std::string getLocString(::std::string const& locKey) const /*override*/;

    virtual bool isLocalizationReady() const /*override*/;

    virtual void onLanguageChanged(::std::string const& locCode, bool) /*override*/;

    virtual void onLanguageKeywordsLoadedFromPack(::PackManifest const&) /*override*/;

    virtual void onLanguagesLoaded() /*override*/;

    virtual void _updateLoc() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C bool _appendLoc(::std::string const& locCode, ::Localization& localizationObjToAppendLoc);

    MCNAPI_C void _initialize();
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

    MCNAPI void $onLanguageChanged(::std::string const& locCode, bool);

    MCNAPI void $onLanguageKeywordsLoadedFromPack(::PackManifest const&);

    MCNAPI void $onLanguagesLoaded();

    MCNAPI void $_updateLoc();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForILocalizationDictionary();

    MCNAPI static void** $vftableForI18nObserver();
    // NOLINTEND
};
