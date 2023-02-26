/**
 * @file  DedicatedServerCommands.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DedicatedServerCommands.
 *
 */
class DedicatedServerCommands {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEDICATEDSERVERCOMMANDS
public:
    class DedicatedServerCommands& operator=(class DedicatedServerCommands const &) = delete;
    DedicatedServerCommands(class DedicatedServerCommands const &) = delete;
    DedicatedServerCommands() = delete;
#endif

public:
    /**
     * @symbol  ?setupStandaloneServer\@DedicatedServerCommands\@\@SAXAEBV?$not_null\@V?$NonOwnerPointer\@VMinecraft\@\@\@Bedrock\@\@\@gsl\@\@AEAVIMinecraftApp\@\@AEAVLevel\@\@AEAVLevelStorage\@\@AEAVDedicatedServer\@\@AEAVAllowListFile\@\@\@Z
     */
    MCAPI static void setupStandaloneServer(class gsl::not_null<class Bedrock::NonOwnerPointer<class Minecraft>> const &, class IMinecraftApp &, class Level &, class LevelStorage &, class DedicatedServer &, class AllowListFile &);

//private:

private:
    /**
     * @symbol  ?mSaveAllFileList\@DedicatedServerCommands\@\@0V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::vector<std::string> mSaveAllFileList;

};