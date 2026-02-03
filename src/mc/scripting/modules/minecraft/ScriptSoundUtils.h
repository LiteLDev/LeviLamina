#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LevelEventGenericPacket;
namespace ScriptModuleMinecraft { struct ScriptMusicOptions; }
// clang-format on

namespace ScriptModuleMinecraft::ScriptSoundUtils {
// functions
// NOLINTBEGIN
MCAPI ::std::unique_ptr<::LevelEventGenericPacket> createPlayMusicPacket(
    ::std::string const&                                         trackId,
    ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions,
    bool                                                         shouldQueue
);

MCAPI ::std::unique_ptr<::LevelEventGenericPacket> createStopMusicPacket();
// NOLINTEND

} // namespace ScriptModuleMinecraft::ScriptSoundUtils
