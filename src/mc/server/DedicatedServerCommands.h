#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

class DedicatedServerCommands {
public:
    // prevent constructor by default
    DedicatedServerCommands& operator=(DedicatedServerCommands const&);
    DedicatedServerCommands(DedicatedServerCommands const&);
    DedicatedServerCommands();

public:
    // NOLINTBEGIN
    MCAPI static void setupStandaloneServer(
        Bedrock::NotNullNonOwnerPtr<class Minecraft> const& minecraft,
        class IMinecraftApp&                                app,
        class Level&                                        level,
        class LevelStorage&,
        class DedicatedServer& dedicatedServer,
        class AllowListFile&   allowListFile,
        struct ScriptSettings* scriptSettings
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static std::vector<std::string>& mSaveAllFileList();

    // NOLINTEND
};
