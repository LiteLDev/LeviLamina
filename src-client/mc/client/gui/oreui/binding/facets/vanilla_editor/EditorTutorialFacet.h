#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Services { class ClientTutorialServiceProvider; }
// clang-format on

namespace OreUI {

class EditorTutorialFacet : public ::OreUI::FacetBase<::OreUI::EditorTutorialFacet> {
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
    virtual ~EditorTutorialFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorTutorialFacet(::Editor::ServiceProviderCollection* services);

    MCAPI void _handleStageChangeEvent(::HashedString const& curr, ::HashedString const&, bool);

    MCAPI void _handleStageConditionsChangeEvent(::std::unordered_map<::HashedString, bool> const& conditions);

    MCAPI void activateTutorial();

    MCAPI void endTutorial(bool cancelled);

    MCFOLD ::std::unordered_map<::HashedString, bool> const& getCurrentStageConditions() const;

    MCFOLD ::HashedString const& getCurrentStageId() const;

    MCAPI bool isTutorialActive() const;

    MCAPI bool isTutorialStarted() const;

    MCAPI void reportStageCondition(::HashedString const& stageId, ::HashedString const& condition);

    MCAPI void skipToNextStage();
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
