#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LevelData;
struct SnapshotFilenameAndLength;
namespace Core { class Path; }
// clang-format on

namespace Editor::ProjectConverterUtils {
// functions
// NOLINTBEGIN
MCNAPI void appendEditorProjectFilesToSaveSnapshot(
    ::std::vector<::SnapshotFilenameAndLength>& files,
    ::Core::Path const&                         worldPath,
    ::std::string const&                        levelId
);

MCNAPI void prepareLevelDataForPlayableWorld(::LevelData& levelData);
// NOLINTEND

} // namespace Editor::ProjectConverterUtils
