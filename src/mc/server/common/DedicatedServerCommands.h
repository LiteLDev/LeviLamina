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
    // symbol:
    // ?setupStandaloneServer@DedicatedServerCommands@@SAXAEBV?$not_null@V?$NonOwnerPointer@VMinecraft@@@Bedrock@@@gsl@@AEAVIMinecraftApp@@AEAVLevel@@AEAVLevelStorage@@AEAVDedicatedServer@@AEAVAllowListFile@@PEAUScriptSettings@@@Z
    MCAPI static void
    setupStandaloneServer(Bedrock::NotNullNonOwnerPtr<class Minecraft> const&, class IMinecraftApp&, class Level&, class LevelStorage&, class DedicatedServer&, class AllowListFile&, struct ScriptSettings*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mSaveAllFileList@DedicatedServerCommands@@0V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@A
    MCAPI static std::vector<std::string> mSaveAllFileList;

    // NOLINTEND
};
