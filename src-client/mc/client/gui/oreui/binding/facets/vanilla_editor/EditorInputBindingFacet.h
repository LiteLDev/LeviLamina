#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/common/editor/MouseActionCategory.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/editor/input/KeyInputType.h"
#include "mc/editor/input/Modifier.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Input { class ContextKeyBinding; }
namespace Editor::Input { struct EditorKeyBindingRegistered; }
namespace Editor::Input { struct EditorKeyBindingUnregistered; }
namespace Editor::Input { struct EditorKeyBindingUpdated; }
namespace Editor::Input { struct EditorMouseBindingRegistered; }
namespace Editor::Input { struct EditorMouseBindingUnregistered; }
namespace Editor::Services { struct ClientPlayerInputServiceProvider; }
// clang-format on

namespace OreUI {

class EditorInputBindingFacet : public ::OreUI::FacetBase<::OreUI::EditorInputBindingFacet> {
public:
    // EditorInputBindingFacet inner types declare
    // clang-format off
    struct KeyBindingFacet;
    struct MouseBindingFacet;
    // clang-format on

    // EditorInputBindingFacet inner types define
    struct KeyBindingFacet {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                             mKey;
        ::ll::TypedStorage<4, 4, ::Editor::Input::Modifier>       mModifier;
        ::ll::TypedStorage<4, 4, ::Editor::Input::KeyInputType>   mInputType;
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mLabel;
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mTooltip;
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mActionId;
        ::ll::TypedStorage<1, 1, bool>                            mCanRebind;
        ::ll::TypedStorage<1, 1, bool>                            mIsModified;
        // NOLINTEND

    public:
        // prevent constructor by default
        KeyBindingFacet();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI KeyBindingFacet(::Editor::Input::ContextKeyBinding const& binding, bool useDefault);

        MCAPI ~KeyBindingFacet();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::Editor::Input::ContextKeyBinding const& binding, bool useDefault);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct MouseBindingFacet {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::Editor::Input::MouseActionCategory> mMouseAction;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                  mDirty;
    ::ll::TypedStorage<8, 8, ::Editor::ServiceProviderCollection*>                  mServices;
    ::ll::TypedStorage<8, 8, ::Editor::Services::ClientPlayerInputServiceProvider*> mInputService;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::HashedString,
            ::std::unordered_map<::HashedString, ::OreUI::EditorInputBindingFacet::KeyBindingFacet>>>
        mKeyBindings;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::HashedString,
            ::std::unordered_map<::HashedString, ::OreUI::EditorInputBindingFacet::MouseBindingFacet>>>
                                                               mMouseBindings;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mKeyBindingChangedSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mMouseBindingChangedSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mTutorialStageChangedSub;
    ::ll::TypedStorage<1, 1, bool>                             mToggleCursorEnabled;
    ::ll::TypedStorage<1, 1, bool>                             mUseDefaultBindings;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorInputBindingFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorInputBindingFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorInputBindingFacet(::Editor::ServiceProviderCollection* services);

    MCAPI void _handleKeyBindingChanged(
        ::std::variant<
            ::Editor::Input::EditorKeyBindingRegistered,
            ::Editor::Input::EditorKeyBindingUpdated,
            ::Editor::Input::EditorKeyBindingUnregistered> const& evt
    );

    MCAPI void _handleMouseBindingChanged(
        ::std::variant<
            ::Editor::Input::EditorMouseBindingRegistered,
            ::Editor::Input::EditorMouseBindingUnregistered> const& evt
    );

    MCAPI void _handleTutorialStageChangeEvent(::HashedString const&, ::HashedString const&, bool isTutorialStarted);

    MCAPI void _refreshBindings();

    MCFOLD ::std::unordered_map<
        ::HashedString,
        ::std::unordered_map<::HashedString, ::OreUI::EditorInputBindingFacet::KeyBindingFacet>> const&
    getKeyBindings() const;

    MCFOLD ::std::unordered_map<
        ::HashedString,
        ::std::unordered_map<::HashedString, ::OreUI::EditorInputBindingFacet::MouseBindingFacet>> const&
    getMouseBindings() const;

    MCAPI bool invokeActionCallback(::HashedString const& eventId);

    MCAPI void resetKeyBinding(::HashedString const& contextId, ::HashedString const& bindingId);

    MCAPI void resetModifiedKeyBindings(::std::optional<::HashedString> const& contextId);

    MCAPI void updateKeyBinding(
        ::HashedString const&     contextId,
        ::HashedString const&     bindingId,
        int                       key,
        ::Editor::Input::Modifier modifier
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ServiceProviderCollection* services);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
