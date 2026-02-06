#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GameVersion.h"
#include "mc/common/editor/WorldType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ContentIdentity.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/options/EduSharedUriResource.h"
#include "mc/options/EducationEditionOffer.h"
#include "mc/options/EducationEditionOfferValue.h"
#include "mc/util/BaseGameVersion.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/LevelSeed64.h"
#include "mc/world/level/storage/CloudSaveLevelInfo.h"
#include "mc/world/level/storage/Experiments.h"
#include "mc/world/level/storage/StorageVersion.h"
#include "mc/world/level/storage/WorldIconType.h"
#include "mc/world/level/storage/edu_cloud/WorldSyncState.h"

// auto generated forward declare list
// clang-format off
class LevelData;
namespace Core { class Path; }
// clang-format on

struct LevelSummary {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                          mId;
    ::ll::TypedStorage<8, 32, ::std::string>                          mName;
    ::ll::TypedStorage<8, 8, int64>                                   mLastSaved;
    ::ll::TypedStorage<4, 4, ::GameType>                              mGameType;
    ::ll::TypedStorage<1, 1, bool>                                    mIsHardcore;
    ::ll::TypedStorage<1, 1, bool>                                    mPlayerHasDied;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::Difficulty>       mGameDifficulty;
    ::ll::TypedStorage<8, 8, ::LevelSeed64>                           mSeed;
    ::ll::TypedStorage<4, 4, int>                                     mNetworkProtocolVersion;
    ::ll::TypedStorage<8, 8, uint64>                                  mSizeOnDisk;
    ::ll::TypedStorage<1, 1, bool>                                    mConfirmedPlatformLockedContent;
    ::ll::TypedStorage<1, 1, bool>                                    mIsMultiplayerEnabled;
    ::ll::TypedStorage<1, 1, bool>                                    mLANBroadcastIntent;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting>            mXBLBroadcastIntent;
    ::ll::TypedStorage<1, 1, bool>                                    mCommandsEnabled;
    ::ll::TypedStorage<4, 4, ::EducationEditionOfferValue>            mEducationEditionOffer;
    ::ll::TypedStorage<8, 56, ::GameVersion>                          mLastLoadedGameVersion;
    ::ll::TypedStorage<8, 56, ::GameVersion>                          mMinCompatibleClientVersion;
    ::ll::TypedStorage<4, 4, ::StorageVersion>                        mStorageVersion;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>      mWorldDirectoryPath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>      mWorldIconPath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>      mWorldIconTargetPath;
    ::ll::TypedStorage<4, 4, ::WorldIconType>                         mWorldIconType;
    ::ll::TypedStorage<8, 24, ::ContentIdentity>                      mPremiumTemplateContentIdentity;
    ::ll::TypedStorage<8, 32, ::std::string>                          mEducationOid;
    ::ll::TypedStorage<8, 72, ::Experiments>                          mExperiments;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>                      mBaseGameVersion;
    ::ll::TypedStorage<1, 1, bool>                                    mIsSingleUseWorld;
    ::ll::TypedStorage<1, 1, bool>                                    mIsBetaRetailLevel;
    ::ll::TypedStorage<8, 64, ::EduSharedUriResource>                 mEduSharedUriResource;
    ::ll::TypedStorage<4, 4, ::Editor::WorldType>                     mEditorWorldType;
    ::ll::TypedStorage<8, 176, ::std::optional<::CloudSaveLevelInfo>> mCloudSaveInfo;
    ::ll::TypedStorage<4, 4, ::EduCloud::WorldSyncState>              mEduCloudWorldSyncState;
    ::ll::TypedStorage<1, 1, bool>                                    mHasUncompleteWorldFileOnDisk;
    ::ll::TypedStorage<8, 32, ::std::string>                          mEducationCreatorId;
    ::ll::TypedStorage<8, 32, ::std::string>                          mEducationCreatorWorldId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelSummary();

    MCAPI LevelSummary(::LevelSummary const&);

    MCAPI LevelSummary(
        ::std::string const& levelId,
        ::LevelData const&   levelData,
        ::Core::Path const&  levelDirectory,
        ::Core::Path const&  levelInfoDirectory,
        bool                 isBetaRetailLevel
    );

    MCAPI LevelSummary(
        ::std::string const&                  id,
        ::std::string const&                  name,
        int64                                 lastSaved,
        ::GameType                            gameType,
        bool                                  isHardcore,
        bool                                  playerHasDied,
        ::SharedTypes::Legacy::Difficulty     gameDifficulty,
        ::LevelSeed64                         seed,
        int                                   npv,
        uint64                                sizeOnDisk,
        bool                                  confirmedPlatformLockedContent,
        bool                                  isMultiplayerEnabled,
        bool                                  lanBroadcastIntent,
        ::Social::GamePublishSetting          xblBroadcastIntent,
        bool                                  commandsEnabled,
        ::EducationEditionOffer               eduOffer,
        ::GameVersion const&                  lastLoadedWithGameVersion,
        ::GameVersion const&                  minCompatibleClientVersion,
        ::StorageVersion                      storageVersion,
        ::Core::Path const&                   path,
        ::ContentIdentity const&              premiumContentIdentity,
        ::std::string const&                  educationOid,
        bool                                  isSingleUseWorld,
        ::EduSharedUriResource const&         eduSharedUriResource,
        ::Experiments const&                  experiments,
        ::BaseGameVersion const&              baseGameVersion,
        ::Editor::WorldType                   editorWorldType,
        bool                                  uncompleteWorldFileOnDisk,
        ::std::optional<::CloudSaveLevelInfo> cloudSaveInfo
    );

    MCAPI ::std::optional<::Core::PathBuffer<::std::string>> _getScreenshotIconPath(::Core::Path const& worldDirectory);

    MCAPI void _initializeWorldIconPath(::Core::Path const& directory);

    MCAPI_C bool cloudSaveForWorldIsEnabled() const;

    MCAPI_C bool isEditionCompatible() const;

    MCAPI_C bool isVersionCompatible() const;

    MCAPI ::LevelSummary& operator=(::LevelSummary const&);

    MCAPI_C ::LevelSummary& setId(::std::string Id);

    MCAPI ::LevelSummary& setName(::std::string Name);

    MCAPI ~LevelSummary();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static ::Core::PathBuffer<::std::string>
    buildScreenshotIconPath(::Core::Path const& worldDirectory, ::Core::Path const& previousScreenshotIconPath);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Core::PathBuffer<::std::string> const& CUSTOM_ICON_FILENAME();

    MCAPI static ::std::string const& DEFAULT_EDU_CLOUD_WORLD_ICON_FILENAME();

    MCAPI static ::std::string const& DEFAULT_WORLD_ICON_FILENAME();

    MCAPI static ::std::string const& INVALID_LEVEL_ID();

    MCAPI static ::std::string const& SCREENSHOT_WORLD_ICON_FILENAME_EXTENSION();

    MCAPI static ::std::string const& SCREENSHOT_WORLD_ICON_FILENAME_PREFIX();

    MCAPI static ::Core::PathBuffer<::std::string> const& WORLD_ICON_FILENAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::LevelSummary const&);

    MCAPI void* $ctor(
        ::std::string const& levelId,
        ::LevelData const&   levelData,
        ::Core::Path const&  levelDirectory,
        ::Core::Path const&  levelInfoDirectory,
        bool                 isBetaRetailLevel
    );

    MCAPI void* $ctor(
        ::std::string const&                  id,
        ::std::string const&                  name,
        int64                                 lastSaved,
        ::GameType                            gameType,
        bool                                  isHardcore,
        bool                                  playerHasDied,
        ::SharedTypes::Legacy::Difficulty     gameDifficulty,
        ::LevelSeed64                         seed,
        int                                   npv,
        uint64                                sizeOnDisk,
        bool                                  confirmedPlatformLockedContent,
        bool                                  isMultiplayerEnabled,
        bool                                  lanBroadcastIntent,
        ::Social::GamePublishSetting          xblBroadcastIntent,
        bool                                  commandsEnabled,
        ::EducationEditionOffer               eduOffer,
        ::GameVersion const&                  lastLoadedWithGameVersion,
        ::GameVersion const&                  minCompatibleClientVersion,
        ::StorageVersion                      storageVersion,
        ::Core::Path const&                   path,
        ::ContentIdentity const&              premiumContentIdentity,
        ::std::string const&                  educationOid,
        bool                                  isSingleUseWorld,
        ::EduSharedUriResource const&         eduSharedUriResource,
        ::Experiments const&                  experiments,
        ::BaseGameVersion const&              baseGameVersion,
        ::Editor::WorldType                   editorWorldType,
        bool                                  uncompleteWorldFileOnDisk,
        ::std::optional<::CloudSaveLevelInfo> cloudSaveInfo
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
