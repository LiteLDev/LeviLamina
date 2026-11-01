#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/locale/I18nObserver.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
class TextToSpeechClient;
namespace OreUI { class ClientDependencies; }
// clang-format on

namespace OreUI {

class AccessibilityScreenQuery : public ::OreUI::QueryBase<::OreUI::AccessibilityScreenQuery>, public ::I18nObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::TextToSpeechClient>> mTTSClient;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>        mIsCurrentLanguageSupported;
    // NOLINTEND

public:
    // prevent constructor by default
    AccessibilityScreenQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onLanguageChanged(::std::string const&, bool) /*override*/;

    virtual void onLanguageKeywordsLoadedFromPack(::PackManifest const&) /*override*/;

    virtual void onLanguagesLoaded() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AccessibilityScreenQuery(::OreUI::ClientDependencies const& client);

    MCNAPI void _updateTTSSupport();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onLanguageChanged(::std::string const&, bool);

    MCNAPI void $onLanguageKeywordsLoadedFromPack(::PackManifest const&);

    MCNAPI void $onLanguagesLoaded();
    // NOLINTEND
};

} // namespace OreUI
