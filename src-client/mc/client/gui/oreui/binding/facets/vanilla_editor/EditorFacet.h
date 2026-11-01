#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/editor/Mode.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
// clang-format on

namespace OreUI {

class EditorFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::EditorFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                              mIsDirty;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>> mClient;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                  mModeChangedEvent;
    ::ll::TypedStorage<1, 1, bool>                                              mCanShowModeShortcutToast;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorFacet(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client);

    MCNAPI void _handleModeChanged(::Editor::Mode from, ::Editor::Mode to);

    MCNAPI ::std::optional<::std::string> const getCursorBlockName() const;

    MCNAPI ::Editor::Mode getEditorMode() const;

    MCNAPI void navigateUri(::std::string const& uri);

    MCNAPI void onViewportFocusAreaResized(float width, float height, float offsetX, float offsetY);

    MCNAPI void openConsole();

    MCNAPI void openPauseMenu();

    MCNAPI void setEditorMode(::Editor::Mode newMode);

    MCNAPI bool shouldDisplayReloadModal() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND
};

} // namespace OreUI
