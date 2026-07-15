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
    virtual ~I18nObserver() /*override*/ = default;

    virtual void onLanguageChanged(::std::string const& code, bool languageSystemInitializing) = 0;

    virtual void onLanguageKeywordsLoadedFromPack(::PackManifest const& manifest) = 0;

    virtual void onLanguagesLoaded() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
