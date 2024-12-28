#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/locale/I18nObserver.h"
#include "mc/util/localization/ILocalizationDictionary.h"

// auto generated forward declare list
// clang-format off
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
    // vIndex: 0
    virtual ~LocalLocalizationDictionary() /*override*/;

    // vIndex: 1
    virtual ::std::string getLocString(::std::string const&) const /*override*/;

    // vIndex: 2
    virtual bool isLocalizationReady() const /*override*/;

    // vIndex: 2
    virtual void onLanguageChanged(::std::string const&, bool) /*override*/;

    // vIndex: 3
    virtual void onLanguageKeywordsLoadedFromPack(::PackManifest const&) /*override*/;

    // vIndex: 4
    virtual void onLanguagesLoaded() /*override*/;

    // vIndex: 3
    virtual void _updateLoc() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $getLocString(::std::string const&) const;

    MCAPI bool $isLocalizationReady() const;

    MCAPI void $onLanguageChanged(::std::string const&, bool);

    MCAPI void $onLanguageKeywordsLoadedFromPack(::PackManifest const&);

    MCAPI void $onLanguagesLoaded();

    MCAPI void $_updateLoc();
    // NOLINTEND
};
