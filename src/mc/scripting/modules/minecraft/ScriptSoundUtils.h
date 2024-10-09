#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LevelEventGenericPacket;
namespace ScriptModuleMinecraft { struct ScriptMusicOptions; }
// clang-format on

namespace ScriptModuleMinecraft::ScriptSoundUtils {
// NOLINTBEGIN
MCAPI std::unique_ptr<class LevelEventGenericPacket> createPlayMusicPacket(
    std::string const&                                              trackId,
    std::optional<struct ScriptModuleMinecraft::ScriptMusicOptions> musicOptions,
    bool                                                            shouldQueue
);

MCAPI std::unique_ptr<class LevelEventGenericPacket> createStopMusicPacket();
// NOLINTEND

}; // namespace ScriptModuleMinecraft::ScriptSoundUtils
