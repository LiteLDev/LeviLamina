#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/GamePublishSetting.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/enums/Difficulty.h"
#include "mc/enums/EducationEditionOffer.h"
#include "mc/enums/GameType.h"
#include "mc/enums/StorageVersion.h"
#include "mc/server/editor/WorldType.h"

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

    MCAPI LevelSummary(std::string const&, std::string const&, int64, ::GameType, bool, ::Difficulty, class LevelSeed64, int, uint64, bool, bool, bool, ::Social::GamePublishSetting, bool, ::EducationEditionOffer, class GameVersion const&, class GameVersion const&, ::StorageVersion, class Core::Path const&, class ContentIdentity const&, std::string const&, bool, struct EduSharedUriResource const&, class Experiments const&, class BaseGameVersion const&, ::Editor::WorldType, std::optional<class CloudSaveLevelInfo>);

    MCAPI struct LevelSummary& operator=(struct LevelSummary const&);

    MCAPI void reinitializeWorldIconPath(class Core::Path const& directory);

    MCAPI void reinitializeWorldSize(class Core::Path const& directory);

    MCAPI struct LevelSummary& setName(std::string);

    MCAPI ~LevelSummary();

    MCAPI static class Core::PathBuffer<std::string> buildCustomIconPath(class Core::Path const&);

    MCAPI static class Core::PathBuffer<std::string> buildWorldIconPath(class Core::Path const&);

    MCAPI static class Core::PathBuffer<std::string> const CUSTOM_ICON_FILENAME;

    MCAPI static std::string const DEFAULT_EDU_CLOUD_WORLD_ICON_FILENAME;

    MCAPI static std::string const DEFAULT_WORLD_ICON_FILENAME;

    MCAPI static std::string const INVALID_LEVEL_ID;

    MCAPI static class Core::PathBuffer<std::string> const WORLD_ICON_FILENAME;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _initializeWorldIconPath(class Core::Path const& directory);

    // NOLINTEND
};
