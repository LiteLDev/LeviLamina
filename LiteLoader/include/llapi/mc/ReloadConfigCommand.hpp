/**
 * @file  ReloadConfigCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ReloadConfigCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RELOADCONFIGCOMMAND
public:
    class ReloadConfigCommand& operator=(class ReloadConfigCommand const &) = delete;
    ReloadConfigCommand(class ReloadConfigCommand const &) = delete;
    ReloadConfigCommand() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@ReloadConfigCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup\@ReloadConfigCommand\@\@SAXAEAVCommandRegistry\@\@AEAUScriptSettings\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &, struct ScriptSettings &);

//private:

private:
    /**
     * @symbol ?sScriptSettings\@ReloadConfigCommand\@\@0PEAUScriptSettings\@\@EA
     */
    MCAPI static struct ScriptSettings * sScriptSettings;

};
