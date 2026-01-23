#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class LevelStorage;
class Player;
struct PlayerStorageIds;
namespace Core { class Path; }
// clang-format on

namespace PlayerDataSystem {
// functions
// NOLINTBEGIN
MCAPI void forEachIdByPrecedence(
    ::PlayerStorageIds const&                                         ids,
    ::std::function<bool(::std::string const&, ::std::string const&)> callback
);

MCAPI ::Core::PathBuffer<::std::string> getPlayerFilename(::Core::Path const& fullPath, ::std::string const& fn);

MCAPI ::std::string getServerId(::LevelStorage& storage, ::PlayerStorageIds const& saveIds);

MCAPI ::std::unique_ptr<::CompoundTag>
legacyLoadClientPlayer(::std::string const& clientUniqueName, ::Core::Path const& fullPath);

MCAPI ::std::unique_ptr<::CompoundTag> legacyLoadPlayer(::LevelStorage& storage, ::std::string const& clientUniqueName);

MCAPI ::std::unique_ptr<::CompoundTag>
loadPlayerData(::LevelStorage& storage, ::PlayerStorageIds const& playerIds, bool isHostingPlayer);

MCAPI ::std::unique_ptr<::CompoundTag> loadPlayerDataFromTag(::LevelStorage& storage, ::std::string_view saveTag);

MCAPI ::std::string playerKey(::std::string_view uniqueName);

MCAPI ::std::string serverKey(::LevelStorage& storage, ::Player const& p);

MCAPI ::std::string serverKey(::LevelStorage& storage, ::std::string_view uniqueName);
// NOLINTEND

} // namespace PlayerDataSystem
