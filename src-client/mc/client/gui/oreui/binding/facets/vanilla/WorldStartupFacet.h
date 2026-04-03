#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ProgressContentType.h"
#include "mc/client/gui/oreui/binding/AsyncStatefulFunction_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/screens/ProgressScreenNavigation.h"
#include "mc/client/services/download/DlcCheckResult.h"
#include "mc/client/world/IWorldStorageHandler.h"
#include "mc/client/world/StartLocalWorldResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class ContentAcquisition;
class ILevelListCache;
class TaskGroup;
namespace World { class IWorldCloudSyncer; }
namespace World { class IWorldResourcePackHandler; }
namespace World { class LocalWorldStarter; }
namespace World { class OwnedWorldTemplateManager; }
namespace World { struct PackDetails; }
// clang-format on

namespace OreUI {

class WorldStartupFacet : public ::OreUI::FacetBase<::OreUI::WorldStartupFacet> {
public:
    // WorldStartupFacet inner types declare
    // clang-format off
    struct BackupThenStartLocalWorldResult;
    // clang-format on

    // WorldStartupFacet inner types define
    struct BackupThenStartLocalWorldResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::World::IWorldStorageHandler::DuplicateWorldResult> duplicateWorldResult;
        ::ll::TypedStorage<4, 8, ::std::optional<::World::StartLocalWorldResult>>     startLocalWorldResult;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::World::LocalWorldStarter&>                          mLocalWorldStarter;
    ::ll::TypedStorage<8, 8, ::World::IWorldCloudSyncer&>                          mWorldCloudSyncer;
    ::ll::TypedStorage<8, 8, ::World::IWorldResourcePackHandler&>                  mWorldResourcePackHandler;
    ::ll::TypedStorage<8, 104, ::ui::ProgressScreenNavigation>                     mProgressScreenNavigation;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                   mLevelListCache;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ContentAcquisition>> mContentAcquisition;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::World::OwnedWorldTemplateManager>>
        mOwnedWorldTemplateManager;
    ::ll::TypedStorage<
        8,
        160,
        ::OreUI::AsyncStatefulFunction_DEPRECATED<
            ::OreUI::WorldStartupFacet::BackupThenStartLocalWorldResult(::std::string const&)>>
                                                             mBackupThenStartLocalWorldFunctor;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>> mStartLocalWorldTaskGroup;
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::World::StartLocalWorldResult>> mStartLocalWorldTaskTracker;
    ::ll::TypedStorage<8, 32, ::std::string>                                             mMissingTemplatesToStart;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::PackDetails>>                       mMissingPacksToStart;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::PackDetails>>                       mBrokenPacksToStart;
    ::ll::TypedStorage<8, 32, ::std::string>                                             mMissingPacksSize;
    ::ll::TypedStorage<1, 1, bool>                                                       mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldStartupFacet& operator=(WorldStartupFacet const&);
    WorldStartupFacet(WorldStartupFacet const&);
    WorldStartupFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldStartupFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldStartupFacet(
        ::World::LocalWorldStarter&                                       localWorldStarter,
        ::World::IWorldCloudSyncer&                                       worldCloudSyncer,
        ::World::IWorldResourcePackHandler&                               worldResourcePackHandler,
        ::ui::ProgressScreenNavigation                                    progressScreenNavigation,
        ::ILevelListCache&                                                levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::ContentAcquisition>               contentAcquisition,
        ::Bedrock::NotNullNonOwnerPtr<::World::OwnedWorldTemplateManager> ownedWorldTemplateManager
    );

    MCAPI ::DlcCheckResult _checkDLCsToStartLocalWorld(::std::string const& worldIdStr);

    MCAPI void _pushLoadingScreen(::ProgressContentType contentType, ::GameType gametype);

    MCAPI void clearStartLocalWorldResult();

    MCFOLD ::OreUI::AsyncStatefulFunction_DEPRECATED<
        ::OreUI::WorldStartupFacet::BackupThenStartLocalWorldResult(::std::string const&)>&
    getBackupThenStartLocalWorldFunctor_DEPRECATED();

    MCFOLD ::std::vector<::World::PackDetails> const& getBrokenPacksToStart() const;

    MCAPI bool const getHasMissingResources() const;

    MCFOLD ::std::string const& getMissingPacksSize() const;

    MCFOLD ::std::vector<::World::PackDetails> const& getMissingPacksToStart() const;

    MCFOLD ::std::string const& getMissingTemplateToStart() const;

    MCFOLD ::std::optional<::World::StartLocalWorldResult> const& getStartLocalWorldResult();

    MCAPI ::OreUI::FacetTaskState getStartLocalWorldTaskState() const;

    MCAPI void startLocalWorld(::std::string const& worldIdStr);
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
        ::World::LocalWorldStarter&                                       localWorldStarter,
        ::World::IWorldCloudSyncer&                                       worldCloudSyncer,
        ::World::IWorldResourcePackHandler&                               worldResourcePackHandler,
        ::ui::ProgressScreenNavigation                                    progressScreenNavigation,
        ::ILevelListCache&                                                levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::ContentAcquisition>               contentAcquisition,
        ::Bedrock::NotNullNonOwnerPtr<::World::OwnedWorldTemplateManager> ownedWorldTemplateManager
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
