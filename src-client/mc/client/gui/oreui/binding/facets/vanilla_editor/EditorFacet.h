#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/editor/Mode.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace OreUI { struct EditorUiMessageListener; }
// clang-format on

namespace OreUI {

class EditorFacet : public ::OreUI::FacetBase<::OreUI::EditorFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                mIsDirty;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>>   mClient;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                    mModeChangedEvent;
    ::ll::TypedStorage<1, 1, bool>                                                mCanShowModeShortcutToast;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::EditorUiMessageListener>> mClientMessageListener;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorFacet(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client);

    MCAPI void _handleModeChanged(::Editor::Mode from, ::Editor::Mode to);

    MCAPI ::std::optional<::std::string> const getCursorBlockName() const;

    MCAPI ::Editor::Mode getEditorMode() const;

    MCAPI void navigateUri(::std::string const& uri);

    MCAPI void onViewportFocusAreaResized(float width, float height, float offsetX, float offsetY);

    MCAPI void openConsole();

    MCAPI void openPauseMenu();

    MCAPI void resizeViewport(float width, float height, float offsetX, float offsetY);

    MCAPI void setEditorMode(::Editor::Mode newMode);

    MCAPI bool shouldDisplayReloadModal() const;
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
