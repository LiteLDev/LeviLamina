#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/binding/FallibleAction_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/LevelDataBindings.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/LevelSummaryBindings.h"
#include "mc/client/gui/screens/rules/WorldSettingsRules.h"
#include "mc/client/world/AddWorldFromTemplateError.h"
#include "mc/client/world/CloseWorldError.h"
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
namespace World { struct WorldData; }
// clang-format on

namespace OreUI {

class WorldEditorFacet : public ::OreUI::FacetBase<::OreUI::WorldEditorFacet> {
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
    ::ll::TypedStorage<8, 1704, ::LevelDataWrapper>                                       mLevelDataWrapper;
    ::ll::TypedStorage<8, 328, ::OreUI::LevelDataBindings>                                mLevelDataBindings;
    ::ll::TypedStorage<8, 848, ::LevelSummary>                                            mDefaultLevelSummary;
    ::ll::TypedStorage<8, 160, ::OreUI::LevelSummaryBindings>                             mLevelSummaryBindings;
    ::ll::TypedStorage<8, 1704, ::LevelDataWrapper>                                       mDefaultLevelDataWrapper;
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
    virtual ~WorldEditorFacet() /*override*/;

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

    MCAPI void _applyRulesToLevelData();

    MCAPI void _cleanupWorld();

    MCAPI void _initializeDataBindings(::World::WorldData const& worldData);

    MCAPI ::OreUI::WorldEditorFacet::InitializationResult _initializeWorld(::World::WorldID const& id);

    MCAPI void _resetLevelData();

    MCAPI void _uninitializeWorld();

    MCAPI void addWorld();

    MCAPI void clearSaveWorldTaskState();

    MCAPI ::std::optional<::World::CloseWorldError> closeWorld(::std::string const& id);

    MCAPI ::OreUI::LevelDataBindings& getCurrentWorldData();

    MCFOLD ::std::string const& getCurrentWorldID() const;

    MCAPI ::OreUI::LevelSummaryBindings& getCurrentWorldSummary();

    MCAPI ::std::optional<::World::IWorldStorageHandler::ReadWorldError> const& getLoadWorldError() const;

    MCAPI ::OreUI::FacetTaskState getLoadWorldTaskState() const;

    MCAPI ::std::optional<::World::SaveWorldError> const& getSaveWorldError() const;

    MCAPI ::OreUI::FacetTaskState getSaveWorldTaskState() const;

    MCAPI bool isAchievementsDisabled() const;

    MCAPI bool isEditorWorld() const;

    MCAPI ::std::optional<::World::IWorldStorageHandler::ReadWorldError> loadWorld(::std::string const& id);

    MCAPI void reloadWorld();

    MCAPI void saveLocalWorld(::std::string const& id);

    MCAPI bool worldHasBeenModified();

    MCAPI bool worldIsInitialized() const;
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
