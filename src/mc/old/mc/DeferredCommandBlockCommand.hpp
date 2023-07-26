/**
 * @file  DeferredCommandBlockCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DeferredCommandBlockCommand.
 *
 */
class DeferredCommandBlockCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFERREDCOMMANDBLOCKCOMMAND
public:
    class DeferredCommandBlockCommand& operator=(class DeferredCommandBlockCommand const &) = delete;
    DeferredCommandBlockCommand(class DeferredCommandBlockCommand const &) = delete;
    DeferredCommandBlockCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DeferredCommandBlockCommand();
    /**
     * @vftbl  1
     * @symbol  ?execute\@DeferredCommandBlockCommand\@\@UEAAXAEAVMinecraftCommands\@\@\@Z
     */
    virtual void execute(class MinecraftCommands &);
    /**
     * @symbol  ??0DeferredCommandBlockCommand\@\@QEAA\@VBlockPos\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI DeferredCommandBlockCommand(class BlockPos, class BlockSource &);

};