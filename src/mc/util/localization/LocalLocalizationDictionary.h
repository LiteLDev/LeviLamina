#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/locale/I18nObserver.h"
#include "mc/util/localization/ILocalizationDictionary.h"

// auto generated forward declare list
// clang-format off
class Localization;
class PackManifest;
namespace Core { class Path; }
// clang-format on

class LocalLocalizationDictionary : public ::ILocalizationDictionary, public ::I18nObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk41ef73;
    ::ll::UntypedStorage<8, 8> mUnk488622;
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

#ifdef LL_PLAT_S
    virtual ::std::string getLocString(::std::string const&) const /*override*/;
#else // LL_PLAT_C
    virtual ::std::string getLocString(::std::string const& locKey) const /*override*/;
#endif

    virtual bool isLocalizationReady() const /*override*/;

#ifdef LL_PLAT_S
    virtual void onLanguageChanged(::std::string const&, bool) /*override*/;
#else // LL_PLAT_C
    virtual void onLanguageChanged(::std::string const& locCode, bool) /*override*/;
#endif

    virtual void onLanguageKeywordsLoadedFromPack(::PackManifest const&) /*override*/;

    virtual void onLanguagesLoaded() /*override*/;

    virtual void _updateLoc() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit LocalLocalizationDictionary(::Core::Path const& locFilePath);

    MCNAPI bool _appendLoc(::std::string const& locCode, ::Localization& localizationObjToAppendLoc);

    MCNAPI void _initialize();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Core::Path const& locFilePath);
#endif
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
