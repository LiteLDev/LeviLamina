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
    // vIndex: 2
    virtual void onLanguageChanged(::std::string const& code, bool languageSystemInitializing) /*override*/;

    // vIndex: 3
    virtual void onLanguageKeywordsLoadedFromPack(::PackManifest const& manifest) /*override*/;

    // vIndex: 4
    virtual void onLanguagesLoaded() /*override*/;

    // vIndex: 0
    virtual ~NpcI18nObserver() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _loadNpcData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onLanguageChanged(::std::string const& code, bool languageSystemInitializing);

    MCAPI void $onLanguageKeywordsLoadedFromPack(::PackManifest const& manifest);

    MCAPI void $onLanguagesLoaded();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
