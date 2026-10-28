#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LevelEventGenericPacket;
class ServerSoundHandle;
namespace ScriptModuleMinecraft { struct ScriptMusicOptions; }
// clang-format on

namespace ScriptModuleMinecraft::ScriptSoundUtils {
// functions
// NOLINTBEGIN
MCAPI ::std::unique_ptr<::LevelEventGenericPacket> createPlayMusicPacket(
    ::std::string const&                                         trackId,
    ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions,
    ::std::optional<::ServerSoundHandle>                         serverSoundHandle,
    bool                                                         shouldQueue
);

MCAPI ::std::unique_ptr<::LevelEventGenericPacket> createStopMusicPacket();
// NOLINTEND

} // namespace ScriptModuleMinecraft::ScriptSoundUtils
