#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class DedicatedServerCommands {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEDICATEDSERVERCOMMANDS
public:
    DedicatedServerCommands& operator=(DedicatedServerCommands const&) = delete;
    DedicatedServerCommands(DedicatedServerCommands const&)            = delete;
    DedicatedServerCommands()                                          = delete;
#endif

public:
    /**
     * @symbol
     * ?setupStandaloneServer\@DedicatedServerCommands\@\@SAXAEBV?$not_null\@V?$NonOwnerPointer\@VMinecraft\@\@\@Bedrock\@\@\@gsl\@\@AEAVIMinecraftApp\@\@AEAVLevel\@\@AEAVLevelStorage\@\@AEAVDedicatedServer\@\@AEAVAllowListFile\@\@PEAUScriptSettings\@\@\@Z
     */
    MCAPI static void
    setupStandaloneServer(class gsl::not_null<class Bedrock::NonOwnerPointer<class Minecraft>> const&, class IMinecraftApp&, class Level&, class LevelStorage&, class DedicatedServer&, class AllowListFile&, struct ScriptSettings*);

    // private:

private:
    /**
     * @symbol
     * ?mSaveAllFileList\@DedicatedServerCommands\@\@0V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::vector<std::string> mSaveAllFileList;
};
