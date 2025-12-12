#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/locale/I18nObserver.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
// clang-format on

class NpcI18nObserver : public ::I18nObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk483061;
    ::ll::UntypedStorage<8, 8> mUnk28e5d4;
    // NOLINTEND

public:
    // prevent constructor by default
    NpcI18nObserver& operator=(NpcI18nObserver const&);
    NpcI18nObserver(NpcI18nObserver const&);
    NpcI18nObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onLanguageChanged(::std::string const& code, bool languageSystemInitializing) /*override*/;

    virtual void onLanguageKeywordsLoadedFromPack(::PackManifest const& manifest) /*override*/;

    virtual void onLanguagesLoaded() /*override*/;

    virtual ~NpcI18nObserver() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _loadNpcData();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onLanguageChanged(::std::string const& code, bool languageSystemInitializing);

    MCNAPI void $onLanguageKeywordsLoadedFromPack(::PackManifest const& manifest);

    MCNAPI void $onLanguagesLoaded();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
