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
    // vIndex: 0
    virtual ~I18nObserver() /*override*/ = default;

    // vIndex: 2
    virtual void onLanguageChanged(::std::string const&, bool) = 0;

    // vIndex: 3
    virtual void onLanguageKeywordsLoadedFromPack(::PackManifest const&) = 0;

    // vIndex: 4
    virtual void onLanguagesLoaded() = 0;
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
