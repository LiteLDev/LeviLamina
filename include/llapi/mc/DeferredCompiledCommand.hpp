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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DeferredCompiledCommand();
    /**
     * @vftbl  1
     * @symbol  ?execute\@DeferredCompiledCommand\@\@UEAAXAEAVMinecraftCommands\@\@\@Z
     */
    virtual void execute(class MinecraftCommands &);
    /**
     * @symbol  ??0DeferredCompiledCommand\@\@QEAA\@V?$not_null\@PEAVCommand\@\@\@gsl\@\@V?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI DeferredCompiledCommand(class gsl::not_null<class Command *>, std::unique_ptr<class CommandOrigin>);

};