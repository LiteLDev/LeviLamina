#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class I18nObserver : public ::Core::Observer<::I18nObserver, ::Bedrock::Threading::Mutex> {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~I18nObserver() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~I18nObserver() /*override*/;
#endif

    virtual void onLanguageChanged(::std::string const&, bool) = 0;

    virtual void onLanguageKeywordsLoadedFromPack(::PackManifest const&) = 0;

    virtual void onLanguagesLoaded() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
