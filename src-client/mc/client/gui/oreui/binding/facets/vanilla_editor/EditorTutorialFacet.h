#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Services { class ClientTutorialServiceProvider; }
// clang-format on

namespace OreUI {

class EditorTutorialFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::EditorTutorialFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                               mIsDirty;
    ::ll::TypedStorage<8, 8, ::Editor::Services::ClientTutorialServiceProvider*> mTutorialService;
    ::ll::TypedStorage<8, 48, ::HashedString>                                    mCurrentStage;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, bool>>        mCurrentConditions;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mStageChangeEventSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mStageConditionsChangeEventSub;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorTutorialFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorTutorialFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorTutorialFacet(::Editor::ServiceProviderCollection* services);
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
