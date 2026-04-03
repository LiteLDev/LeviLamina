#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/common/editor/ThemeSettingsColorKey.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace Editor::Services { class EditorPersistenceServiceProvider; }
namespace Editor::Services { class EditorSettingsServiceProvider; }
namespace Editor::Settings { struct ThemePalette; }
namespace Editor::Settings { struct ThemeProps; }
namespace mce { class Color; }
// clang-format on

namespace OreUI {

class EditorSettingsFacet : public ::OreUI::FacetBase<::OreUI::EditorSettingsFacet> {
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
    virtual ~EditorSettingsFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorSettingsFacet(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client);

    MCAPI ::Editor::Services::EditorPersistenceServiceProvider* _getEditorPersistenceProvider();

    MCAPI ::Editor::Services::EditorSettingsServiceProvider* _getEditorSettingsProvider();

    MCAPI void _handleCurrentThemeChanged(::std::string const& newThemeId);

    MCAPI void _handleNewThemeCreated(::std::string const& newThemeId);

    MCAPI void _handleThemeColorUpdated(
        ::std::string const&                      themeId,
        ::Editor::Settings::ThemeSettingsColorKey key,
        ::mce::Color const&                       color
    );

    MCAPI void _handleThemeDeleted(::std::string const& newThemeId);

    MCAPI void _handleThemeSettingsChanged(::Editor::Settings::ThemeProps const& themeProp);

    MCAPI void _loadSettings();

    MCAPI void _saveSettings();

    MCAPI void addNewTheme(
        ::std::string&                  themeId,
        ::std::optional<::std::string>& name,
        ::std::optional<::std::string>& sourceThemeId
    );

    MCAPI void deleteTheme(::std::string& id);

    MCFOLD ::std::string const& getCurrentThemeId() const;

    MCFOLD int getFontZoom() const;

    MCAPI ::std::string getKey(::std::string const& key) const;

    MCFOLD ::OreUI::EditorSettingsFacet::EditorOperatorType getSelectedOperator() const;

    MCFOLD ::std::string const& getSelectedTool() const;

    MCFOLD ::std::unordered_map<::HashedString, ::Editor::Settings::ThemePalette> const& getThemesMap() const;

    MCAPI bool hasKey(::std::string const& key) const;

    MCAPI void setCurrentThemeId(::std::string const& themeId);

    MCAPI void setFontZoom(int fontZoom);

    MCAPI void setKey(::std::string const& key, ::std::string const& value);

    MCAPI void setKeys(::std::unordered_map<::std::string, ::std::string> const& entries);

    MCAPI void setSelectedOperator(::OreUI::EditorSettingsFacet::EditorOperatorType operatorType);

    MCAPI void setSelectedTool(::std::string const& toolId);

    MCAPI void updateThemeColor(::std::string& id, ::std::string& key, ::mce::Color newColor);
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
