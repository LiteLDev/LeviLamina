#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/locale/I18nObserver.h"
#include "mc/util/localization/ILocalizationDictionary.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
// clang-format on

class StoreLocalizationDictionary : public ::ILocalizationDictionary,
                                    public ::I18nObserver,
                                    public ::std::enable_shared_from_this<::StoreLocalizationDictionary> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk2a5ec3;
    ::ll::UntypedStorage<8, 8> mUnk25902a;
    // NOLINTEND

public:
    // prevent constructor by default
    StoreLocalizationDictionary& operator=(StoreLocalizationDictionary const&);
    StoreLocalizationDictionary(StoreLocalizationDictionary const&);
    StoreLocalizationDictionary();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StoreLocalizationDictionary() /*override*/ = default;

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

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
