#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class DedicatedServerCommands {
public:
    // prevent constructor by default
    DedicatedServerCommands& operator=(DedicatedServerCommands const&);
    DedicatedServerCommands(DedicatedServerCommands const&);
    DedicatedServerCommands();

public:
    // NOLINTBEGIN
    MCAPI static void
    setupStandaloneServer(Bedrock::NotNullNonOwnerPtr<class Minecraft> const&, class IMinecraftApp&, class Level&, class LevelStorage&, class DedicatedServer&, class AllowListFile&, struct ScriptSettings*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::vector<std::string> mSaveAllFileList;

    // NOLINTEND
};
