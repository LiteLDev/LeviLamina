/**
 * @file  DeferredCompiledCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DeferredCompiledCommand.
 *
 */
class DeferredCompiledCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFERREDCOMPILEDCOMMAND
public:
    class DeferredCompiledCommand& operator=(class DeferredCompiledCommand const &) = delete;
    DeferredCompiledCommand(class DeferredCompiledCommand const &) = delete;
    DeferredCompiledCommand() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@DeferredCompiledCommand\@\@UEAAXAEAVMinecraftCommands\@\@\@Z
     */
    virtual void execute(class MinecraftCommands &);

};
