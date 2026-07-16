#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Services { class ClientPlayerInputServiceProvider; }
// clang-format on

namespace OreUI {

class EditorInputStateFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::EditorInputStateFacet> {
public:
    // EditorInputStateFacet inner types declare
    // clang-format off
    struct KeyBindingStateFacet;
    // clang-format on

    // EditorInputStateFacet inner types define
    enum class MouseButton : uchar {
        Left    = 0,
        Middle  = 1,
        Right   = 2,
        Back    = 3,
        Forward = 4,
    };

    struct KeyBindingStateFacet {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 8, ::std::optional<int>> mProcessingState;
        // NOLINTEND
    };

    using KeyBindingStateMap = ::std::unordered_map<
        ::HashedString,
        ::std::unordered_map<::HashedString, ::OreUI::EditorInputStateFacet::KeyBindingStateFacet>>;

    using CursorIconStateMap = ::std::unordered_map<::HashedString, ::std::string>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                  mDirty;
    ::ll::TypedStorage<8, 8, ::Editor::ServiceProviderCollection*>                  mServices;
    ::ll::TypedStorage<8, 8, ::Editor::Services::ClientPlayerInputServiceProvider&> mInputService;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                      mViewportFocusEventSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                      mKeyBindingStateChangedEventSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                      mCursorIconChangedEventSub;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::HashedString,
            ::std::unordered_map<::HashedString, ::OreUI::EditorInputStateFacet::KeyBindingStateFacet>>>
                                                                                   mKeyBindingStateMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::std::string>> mCursorIconStateMap;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorInputStateFacet& operator=(EditorInputStateFacet const&);
    EditorInputStateFacet(EditorInputStateFacet const&);
    EditorInputStateFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorInputStateFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorInputStateFacet(::Editor::ServiceProviderCollection* services);
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

    // NOLINTEND
};

} // namespace OreUI
