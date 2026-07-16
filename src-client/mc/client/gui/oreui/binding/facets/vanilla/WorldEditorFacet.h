#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/binding/FallibleAction_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/LevelDataBindings.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/LevelSummaryBindings.h"
#include "mc/client/gui/screens/rules/WorldSettingsRules.h"
#include "mc/client/world/AddWorldFromTemplateError.h"
#include "mc/client/world/IWorldStorageHandler.h"
#include "mc/client/world/SaveWorldError.h"
#include "mc/client/world/WorldID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/storage/LevelDataWrapper.h"
#include "mc/world/level/storage/LevelSummary.h"

// auto generated forward declare list
// clang-format off
class IEntitlementManager;
class NewPlayerSystem;
class TrialManager;
namespace OreUI { class IResourceAllowList; }
namespace World { class WorldEditor; }
// clang-format on

namespace OreUI {

class WorldEditorFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::WorldEditorFacet> {
public:
    // WorldEditorFacet inner types define
    enum class InitializationResult : int {
        Success = 0,
        Failure = 1,
    };

    enum class ClearPlayerDataStatus : int {
        NotStarted          = 0,
        InProgress          = 1,
        InProgressWithError = 2,
        Finished            = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::World::WorldEditor&>                                       mWorldEditor;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::NewPlayerSystem>>           mNewPlayerSystem;
    ::ll::TypedStorage<8, 8, ::TrialManager const&>                                       mTrialManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>       mEntitlementManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 32, ::World::WorldID>                                           mCurrentWorldID;
    ::ll::TypedStorage<8, 1744, ::LevelDataWrapper>                                       mLevelDataWrapper;
    ::ll::TypedStorage<8, 328, ::OreUI::LevelDataBindings>                                mLevelDataBindings;
    ::ll::TypedStorage<8, 848, ::LevelSummary>                                            mDefaultLevelSummary;
    ::ll::TypedStorage<8, 160, ::OreUI::LevelSummaryBindings>                             mLevelSummaryBindings;
    ::ll::TypedStorage<8, 1744, ::LevelDataWrapper>                                       mDefaultLevelDataWrapper;
    ::ll::TypedStorage<8, 328, ::OreUI::LevelDataBindings>                                mLevelDataSnapshot;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mWorldDirtySubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mWorldIconDirtySubscriber;
    ::ll::TypedStorage<
        8,
        72,
        ::OreUI::FallibleAction_DEPRECATED<::World::AddWorldFromTemplateError, ::std::string const&>>
                                                                                  mAddWorldFromTemplateFunctor;
    ::ll::TypedStorage<8, 112, ::WorldSettingsRules>                              mWorldSettingsRules;
    ::ll::TypedStorage<1, 1, bool>                                                mIsDirty;
    ::ll::TypedStorage<1, 1, bool>                                                mIsInitialized;
    ::ll::TypedStorage<1, 1, bool>                                                mWorldClosedExternally;
    ::ll::TypedStorage<4, 12, ::OreUI::FacetTaskTracker<::World::SaveWorldError>> mSaveWorldTask;
    ::ll::TypedStorage<4, 12, ::OreUI::FacetTaskTracker<::World::IWorldStorageHandler::ReadWorldError>> mLoadWorldTask;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldEditorFacet& operator=(WorldEditorFacet const&);
    WorldEditorFacet(WorldEditorFacet const&);
    WorldEditorFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldEditorFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldEditorFacet(
        ::World::WorldEditor&                                      worldEditor,
        ::Bedrock::NotNullNonOwnerPtr<::NewPlayerSystem>           newPlayerSystem,
        ::TrialManager const&                                      trialManager,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>       entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::WorldSettingsRules                                       worldSettingsRules
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
    MCAPI void* $ctor(
        ::World::WorldEditor&                                      worldEditor,
        ::Bedrock::NotNullNonOwnerPtr<::NewPlayerSystem>           newPlayerSystem,
        ::TrialManager const&                                      trialManager,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>       entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::WorldSettingsRules                                       worldSettingsRules
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
