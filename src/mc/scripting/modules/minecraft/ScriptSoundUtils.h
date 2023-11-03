#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LevelEventGenericPacket;
namespace ScriptModuleMinecraft { struct ScriptMusicOptions; }
// clang-format on

namespace ScriptModuleMinecraft::ScriptSoundUtils {
// NOLINTBEGIN
// symbol:
// ?createPlayMusicPacket@ScriptSoundUtils@ScriptModuleMinecraft@@YA?AV?$unique_ptr@VLevelEventGenericPacket@@U?$default_delete@VLevelEventGenericPacket@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@V?$optional@UScriptMusicOptions@ScriptModuleMinecraft@@@4@_N@Z
MCAPI std::unique_ptr<class LevelEventGenericPacket>
      createPlayMusicPacket(std::string const&, std::optional<struct ScriptModuleMinecraft::ScriptMusicOptions>, bool);

// symbol:
// ?createStopMusicPacket@ScriptSoundUtils@ScriptModuleMinecraft@@YA?AV?$unique_ptr@VLevelEventGenericPacket@@U?$default_delete@VLevelEventGenericPacket@@@std@@@std@@XZ
MCAPI std::unique_ptr<class LevelEventGenericPacket> createStopMusicPacket();
// NOLINTEND

}; // namespace ScriptModuleMinecraft::ScriptSoundUtils
