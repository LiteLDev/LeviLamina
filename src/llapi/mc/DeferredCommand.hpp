/**
 * @file  DeferredCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DeferredCommand.
 *
 */
class DeferredCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFERREDCOMMAND
public:
    class DeferredCommand& operator=(class DeferredCommand const &) = delete;
    DeferredCommand(class DeferredCommand const &) = delete;
    DeferredCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DeferredCommand();
    /**
     * @vftbl  1
     * @symbol  ?execute\@DeferredCommand\@\@UEAAXAEAVMinecraftCommands\@\@\@Z
     */
    virtual void execute(class MinecraftCommands &);
    /**
     * @symbol  ??0DeferredCommand\@\@QEAA\@V?$unique_ptr\@VCommandContext\@\@U?$default_delete\@VCommandContext\@\@\@std\@\@\@std\@\@_N1V?$function\@$$A6AXUMCRESULT\@\@\@Z\@2\@\@Z
     */
    MCAPI DeferredCommand(std::unique_ptr<class CommandContext>, bool, bool, class std::function<void (struct MCRESULT)>);

};