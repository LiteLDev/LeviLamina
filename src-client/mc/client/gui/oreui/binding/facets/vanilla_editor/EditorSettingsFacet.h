#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace Editor::Settings { struct ThemePalette; }
// clang-format on

namespace OreUI {

class EditorSettingsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::EditorSettingsFacet> {
public:
    // EditorSettingsFacet inner types define
    enum class EditorOperatorType : int {
        None   = 0,
        Create = 1,
        Move   = 2,
        Resize = 3,
        Rotate = 4,
        Stroke = 5,
        Count  = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                  mSettingsChangedEventSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                  mNewThemeCreatedEventSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                  mThemeColorUpdatedEventSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                  mThemeDeletedEventSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                  mCurrentThemeChangedEventSub;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>> mClient;
    ::ll::TypedStorage<1, 1, bool>                                              mIsDirty;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mCurrentThemeId;
    ::ll::TypedStorage<4, 4, int>                                               mFontZoom;
    ::ll::TypedStorage<1, 1, bool>                                              mIsEditorModeActive;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mCurrentToolId;
    ::ll::TypedStorage<4, 4, ::OreUI::EditorSettingsFacet::EditorOperatorType>  mCurrentOperatorType;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::Editor::Settings::ThemePalette>> mThemesMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>>                     mUISettings;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorSettingsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorSettingsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorSettingsFacet(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
