#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/download/DlcCheckResult.h"
#include "mc/client/world/CopyResourcePacksResult.h"
#include "mc/client/world/world_creation_utils/WorldCreationResult.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/LevelSettings.h"
#include "mc/world/level/storage/LevelSummary.h"

// auto generated forward declare list
// clang-format off
class IContentAcquisition;
class IContentManager;
class IDlcBatcher;
class IDlcValidation;
class IEntitlementManager;
class IGameServerStartup;
class ILevelListCache;
class IResourcePackRepository;
class IStoreCatalogRepository;
class LevelDataWrapper;
class ResourcePackCopyProgressHandler;
class ResourcePackManager;
class TrialManager;
struct PackManagerContentSource;
// clang-format on

class WorldCreationHelper {
public:
    // WorldCreationHelper inner types define
    enum class WorldCreationMode : int {
        Local  = 0,
        Realms = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IContentManager&>                                        mContentManager;
    ::ll::TypedStorage<8, 8, ::IDlcValidation&>                                         mDlcValidation;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IDlcBatcher>>                          mDlcBatcher;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                        mLevelListCache;
    ::ll::TypedStorage<8, 8, ::IContentAcquisition&>                                    mContentAcquisition;
    ::ll::TypedStorage<8, 8, ::IStoreCatalogRepository&>                                mStoreCatalogRepository;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>     mEntitlementManager;
    ::ll::TypedStorage<8, 8, ::IGameServerStartup&>                                     mGameServerStartup;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository>> mResourcePackRepository;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                                    mResourcePackManager;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                                    mServerResourcePackManager;
    ::ll::TypedStorage<8, 8, ::TrialManager&>                                           mTrialManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                                  mExistenceTracker;
    ::ll::TypedStorage<4, 4, ::WorldCreationHelper::WorldCreationMode>                  mCreationMode;
    ::ll::TypedStorage<1, 1, bool>                                                      mCreatingFromTemplate;
    ::ll::TypedStorage<8, 1336, ::LevelSettings>                                        mLevelSettings;
    ::ll::TypedStorage<8, 32, ::std::string>                                            mLevelName;
    ::ll::TypedStorage<8, 48, ::PackIdVersion>                                          mPackIdVersion;
    ::ll::TypedStorage<8, 8, ::PackManagerContentSource*>                               mWorldContentSource;
    ::ll::TypedStorage<8, 848, ::LevelSummary>                                          mLevelSummary;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ResourcePackCopyProgressHandler>>      mProgressHandler;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>>                        mCopyResourcePacksFuture;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::SharedAsync<void>>                  mStartResult;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldCreationHelper& operator=(WorldCreationHelper const&);
    WorldCreationHelper(WorldCreationHelper const&);
    WorldCreationHelper();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldCreationHelper(
        ::IContentManager&                                              contentManager,
        ::IDlcValidation&                                               dlcValidation,
        ::ILevelListCache&                                              levelListCache,
        ::IContentAcquisition&                                          contentAcquisition,
        ::IStoreCatalogRepository&                                      storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>            entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const& resourcePackRepository,
        ::ResourcePackManager&                                          resourcePackManager,
        ::ResourcePackManager&                                          serverResourcePackManager,
        ::TrialManager&                                                 trialManager,
        ::IGameServerStartup&                                           gameServerStartup
    );

    MCAPI ::WorldCreationUtils::WorldCreationResult
    _createWorldImpl(::LevelDataWrapper& levelData, ::LevelSummary& levelSummary);

    MCAPI ::DlcCheckResult checkDlc();

    MCAPI ::CopyResourcePacksResult startCopyingResourcePacks();

    MCAPI ~WorldCreationHelper();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IContentManager&                                              contentManager,
        ::IDlcValidation&                                               dlcValidation,
        ::ILevelListCache&                                              levelListCache,
        ::IContentAcquisition&                                          contentAcquisition,
        ::IStoreCatalogRepository&                                      storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>            entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const& resourcePackRepository,
        ::ResourcePackManager&                                          resourcePackManager,
        ::ResourcePackManager&                                          serverResourcePackManager,
        ::TrialManager&                                                 trialManager,
        ::IGameServerStartup&                                           gameServerStartup
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
