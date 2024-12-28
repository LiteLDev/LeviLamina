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
    // prevent constructor by default
    DedicatedServerCommands& operator=(DedicatedServerCommands const&);
    DedicatedServerCommands(DedicatedServerCommands const&);
    DedicatedServerCommands();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setupStandaloneServer(
        ::Bedrock::NotNullNonOwnerPtr<::Minecraft> const& minecraft,
        ::IMinecraftApp&                                  app,
        ::Level&                                          level,
        ::LevelStorage&,
        ::DedicatedServer& dedicatedServer,
        ::AllowListFile&   allowListFile,
        ::ScriptSettings*  scriptSettings
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::std::string>& mSaveAllFileList();
    // NOLINTEND
};
