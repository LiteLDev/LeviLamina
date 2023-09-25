/**
 * @file  TransferServerCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ServerCommand.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class TransferServerCommand : public ServerCommand {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRANSFERSERVERCOMMAND
public:
    class TransferServerCommand& operator=(class TransferServerCommand const &) = delete;
    TransferServerCommand(class TransferServerCommand const &) = delete;
    TransferServerCommand() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?collectOptionalArguments\@Command\@\@MEAA_NXZ
     */
    virtual bool collectOptionalArguments();
    /**
     * @vftbl 2
     * @symbol ?execute\@TransferServerCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup\@TransferServerCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @symbol ?_findTarget\@TransferServerCommand\@\@AEBAPEBVPlayer\@\@AEAVCommandOutput\@\@AEAVLevel\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Player const * _findTarget(class CommandOutput &, class Level &, std::string const &) const;

private:

};
