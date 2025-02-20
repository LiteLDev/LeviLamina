#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WorldType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/options/EducationEditionOffer.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CloudSaveLevelInfo;
class ContentIdentity;
class Experiments;
class GameVersion;
class LevelData;
class LevelSeed64;
struct EduSharedUriResource;
namespace Core { class Path; }
// clang-format on

struct LevelSummary {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkda60e7;
    ::ll::UntypedStorage<8, 32>  mUnk76266f;
    ::ll::UntypedStorage<8, 8>   mUnk7511c6;
    ::ll::UntypedStorage<4, 4>   mUnk66426f;
    ::ll::UntypedStorage<1, 1>   mUnk57412d;
    ::ll::UntypedStorage<1, 1>   mUnke30c4b;
    ::ll::UntypedStorage<4, 4>   mUnk298125;
    ::ll::UntypedStorage<8, 8>   mUnkf73d72;
    ::ll::UntypedStorage<4, 4>   mUnkeb97bb;
    ::ll::UntypedStorage<8, 8>   mUnkc435b8;
    ::ll::UntypedStorage<1, 1>   mUnkf0fffc;
    ::ll::UntypedStorage<1, 1>   mUnk2493d3;
    ::ll::UntypedStorage<1, 1>   mUnk414905;
    ::ll::UntypedStorage<4, 4>   mUnkfbf5b2;
    ::ll::UntypedStorage<1, 1>   mUnkffd3d7;
    ::ll::UntypedStorage<4, 4>   mUnka3dd06;
    ::ll::UntypedStorage<8, 56>  mUnk61d117;
    ::ll::UntypedStorage<8, 56>  mUnk51c0b3;
    ::ll::UntypedStorage<4, 4>   mUnk17b9b7;
    ::ll::UntypedStorage<8, 32>  mUnk47ed0f;
    ::ll::UntypedStorage<8, 32>  mUnkdcc88b;
    ::ll::UntypedStorage<8, 32>  mUnkae2e1a;
    ::ll::UntypedStorage<4, 4>   mUnk1e0d75;
    ::ll::UntypedStorage<8, 24>  mUnkf49ceb;
    ::ll::UntypedStorage<8, 32>  mUnk2b57e9;
    ::ll::UntypedStorage<8, 72>  mUnkf9dbe5;
    ::ll::UntypedStorage<8, 32>  mUnkf2671b;
    ::ll::UntypedStorage<1, 1>   mUnk8d22fd;
    ::ll::UntypedStorage<1, 1>   mUnk5b0010;
    ::ll::UntypedStorage<8, 64>  mUnk93b919;
    ::ll::UntypedStorage<4, 4>   mUnkb03051;
    ::ll::UntypedStorage<8, 176> mUnk1391df;
    ::ll::UntypedStorage<4, 4>   mUnkf4d60e;
    ::ll::UntypedStorage<1, 1>   mUnka07096;
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

    MCAPI bool _isScreenshotIconPath(::Core::PathBuffer<::std::string> const& file);

    MCAPI ::LevelSummary& operator=(::LevelSummary const&);

    MCAPI ::LevelSummary& setName(::std::string Name);

    MCAPI ~LevelSummary();
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
