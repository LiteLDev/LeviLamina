#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WorldType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/options/EducationEditionOffer.h"
#include "mc/world/Difficulty.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

struct LevelSummary {
public:
    // NOLINTBEGIN
    MCAPI LevelSummary();

    MCAPI LevelSummary(struct LevelSummary const&);

    MCAPI LevelSummary(
        std::string const&      levelId,
        class LevelData const&  levelData,
        class Core::Path const& levelDirectory,
        class Core::Path const& levelInfoDirectory,
        bool                    isBetaRetailLevel
    );

    MCAPI LevelSummary(
        std::string const&                      id,
        std::string const&                      name,
        int64                                   lastSaved,
        ::GameType                              gameType,
        bool                                    isHardcore,
        ::Difficulty                            gameDifficulty,
        class LevelSeed64                       seed,
        int                                     npv,
        uint64                                  sizeOnDisk,
        bool                                    confirmedPlatformLockedContent,
        bool                                    isMultiplayerEnabled,
        bool                                    lanBroadcastIntent,
        ::Social::GamePublishSetting            xblBroadcastIntent,
        bool                                    commandsEnabled,
        ::EducationEditionOffer                 eduOffer,
        class GameVersion const&                lastLoadedWithGameVersion,
        class GameVersion const&                minCompatibleClientVersion,
        ::StorageVersion                        storageVersion,
        class Core::Path const&                 path,
        class ContentIdentity const&            premiumContentIdentity,
        std::string const&                      educationOid,
        bool                                    isSingleUseWorld,
        struct EduSharedUriResource const&      eduSharedUriResource,
        class Experiments const&                experiments,
        class BaseGameVersion const&            baseGameVersion,
        ::Editor::WorldType                     editorWorldType,
        std::optional<class CloudSaveLevelInfo> cloudSaveInfo
    );

    MCAPI struct LevelSummary& operator=(struct LevelSummary const&);

    MCAPI void reinitializeWorldIconPath(class Core::Path const& directory);

    MCAPI void reinitializeWorldSize(class Core::Path const& directory);

    MCAPI struct LevelSummary& setName(std::string);

    MCAPI ~LevelSummary();

    MCAPI static class Core::PathBuffer<std::string> buildCustomIconPath(class Core::Path const& worldDirectory);

    MCAPI static class Core::PathBuffer<std::string> buildWorldIconPath(class Core::Path const& worldDirectory);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _initializeWorldIconPath(class Core::Path const& directory);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI static class Core::PathBuffer<std::string> const& CUSTOM_ICON_FILENAME();

    MCAPI static std::string const& DEFAULT_EDU_CLOUD_WORLD_ICON_FILENAME();

    MCAPI static std::string const& DEFAULT_WORLD_ICON_FILENAME();

    MCAPI static std::string const& INVALID_LEVEL_ID();

    MCAPI static class Core::PathBuffer<std::string> const& WORLD_ICON_FILENAME();

    // NOLINTEND
};
