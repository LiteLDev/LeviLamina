#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

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
    MCAPI explicit EditorFacet(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client);
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
