/**
 * @file  InputPermissionCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class InputPermissionCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INPUTPERMISSIONCOMMAND
public:
    class InputPermissionCommand& operator=(class InputPermissionCommand const &) = delete;
    InputPermissionCommand(class InputPermissionCommand const &) = delete;
    InputPermissionCommand() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@InputPermissionCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup\@InputPermissionCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @symbol ?_executeQuery\@InputPermissionCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _executeQuery(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?_executeQueryVerbose\@InputPermissionCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _executeQueryVerbose(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?_executeSet\@InputPermissionCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _executeSet(class CommandOrigin const &, class CommandOutput &) const;

private:

};
