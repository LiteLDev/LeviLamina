#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class MobEventCommand : public ::Command {
public:
    // MobEventCommand inner types declare
    // clang-format off
    struct InitProxy;
    // clang-format on

    // MobEventCommand inner types define
    struct InitProxy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEVENTCOMMAND_INITPROXY
    public:
        InitProxy& operator=(InitProxy const&) = delete;
        InitProxy(InitProxy const&)            = delete;
        InitProxy()                            = delete;
#endif

    public:
        /**
         * @symbol ??0InitProxy\@MobEventCommand\@\@QEAA\@AEAVServerLevel\@\@\@Z
         */
        MCAPI InitProxy(class ServerLevel&);
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEVENTCOMMAND
public:
    MobEventCommand& operator=(MobEventCommand const&) = delete;
    MobEventCommand(MobEventCommand const&)            = delete;
    MobEventCommand()                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@MobEventCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@MobEventCommand\@\@SAXAEAVCommandRegistry\@\@$$QEAUInitProxy\@1\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&, struct MobEventCommand::InitProxy&&);
};
