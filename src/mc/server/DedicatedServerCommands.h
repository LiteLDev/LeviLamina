#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AllowListFile;
class DedicatedServer;
class IMinecraftApp;
class Level;
class LevelStorage;
class Minecraft;
struct ScriptSettings;
// clang-format on

class DedicatedServerCommands {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    setupStandaloneServer(::Bedrock::NotNullNonOwnerPtr<::Minecraft> const& minecraft, ::IMinecraftApp& app, ::Level& dedicatedServer, ::LevelStorage& allowListFile, ::DedicatedServer& scriptSettings, ::AllowListFile& level, ::ScriptSettings*);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::std::string>& mSaveAllFileList();
    // NOLINTEND
};
