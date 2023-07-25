#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class TakePictureCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAKEPICTURECOMMAND
public:
    TakePictureCommand& operator=(TakePictureCommand const&) = delete;
    TakePictureCommand(TakePictureCommand const&)            = delete;
    TakePictureCommand()                                     = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@TakePictureCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@TakePictureCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
};
