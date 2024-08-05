#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

namespace PlayerDataSystem {
// NOLINTBEGIN
MCAPI void forEachIdByPrecedence(
    struct PlayerStorageIds const&                              ids,
    std::function<bool(std::string const&, std::string const&)> callback
);

MCAPI class Core::PathBuffer<std::string> getPlayerFilename(class Core::Path const& fullPath, std::string const& fn);

MCAPI std::string getServerId(class LevelStorage&, struct PlayerStorageIds const&);

MCAPI std::unique_ptr<class CompoundTag>
      legacyLoadClientPlayer(std::string const& clientUniqueName, class Core::Path const& fullPath);

MCAPI std::unique_ptr<class CompoundTag>
      legacyLoadPlayer(class LevelStorage& storage, std::string const& clientUniqueName);

MCAPI std::unique_ptr<class CompoundTag> loadLocalPlayerData(class LevelStorage& storage);

MCAPI std::unique_ptr<class CompoundTag>
      loadPlayerData(class LevelStorage& storage, struct PlayerStorageIds const& playerIds, bool isHostingPlayer);

MCAPI std::unique_ptr<class CompoundTag> loadPlayerDataFromTag(class LevelStorage& storage, std::string_view saveTag);

MCAPI std::string playerKey(std::string_view);

MCAPI std::string serverKey(class LevelStorage&, class Player const&);

MCAPI std::string serverKey(class LevelStorage&, std::string_view);
// NOLINTEND

}; // namespace PlayerDataSystem
