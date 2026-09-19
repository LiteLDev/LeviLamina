#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class LevelStorage;
class Player;
struct PlayerStorageIds;
// clang-format on

namespace PlayerDataSystem {
// functions
// NOLINTBEGIN
MCAPI void forEachIdByPrecedence(
    ::PlayerStorageIds const&                                         ids,
    ::std::function<bool(::std::string const&, ::std::string const&)> callback
);

MCAPI ::std::string getServerId(::LevelStorage& storage, ::PlayerStorageIds const& saveIds, bool isEditorPlayer);

MCAPI ::std::unique_ptr<::CompoundTag> legacyLoadPlayer(::LevelStorage& storage, ::std::string const& clientUniqueName);

MCAPI ::std::unique_ptr<::CompoundTag>
loadPlayerData(::LevelStorage& storage, ::PlayerStorageIds const& playerIds, bool isHostingPlayer, bool isEditorPlayer);

MCAPI ::std::unique_ptr<::CompoundTag>
loadPlayerDataFromTag(::LevelStorage& storage, ::std::string_view saveTag, bool isEditorPlayer);

MCAPI ::std::string playerKey(::std::string_view uniqueName);

MCAPI ::std::string resolvePlayerKey(::std::string_view uniqueName, bool isEditorPlayer);

MCAPI ::std::string serverKey(::LevelStorage& storage, ::Player const& p);

MCAPI ::std::string serverKey(::LevelStorage& storage, ::std::string_view uniqueName, bool isEditorPlayer);
// NOLINTEND

} // namespace PlayerDataSystem
