/**
 * @file  AllowListCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AllowListCommand.
 *
 */
class AllowListCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ALLOWLISTCOMMAND
public:
    class AllowListCommand& operator=(class AllowListCommand const &) = delete;
    AllowListCommand(class AllowListCommand const &) = delete;
    AllowListCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AllowListCommand();
    /**
     * @hash   273207711
     * @vftbl  1
     * @symbol  ?execute\@AllowListCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   905963635
     * @symbol  ?setup\@AllowListCommand\@\@SAXAEAVCommandRegistry\@\@AEAVAllowListFile\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &, class AllowListFile &);

//private:

private:
    /**
     * @hash   1505259455
     * @symbol  ?mAllowListFile\@AllowListCommand\@\@0PEAVAllowListFile\@\@EA
     */
    MCAPI static class AllowListFile * mAllowListFile;

};