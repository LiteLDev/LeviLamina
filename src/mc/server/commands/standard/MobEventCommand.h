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

    public:
        // prevent constructor by default
        InitProxy& operator=(InitProxy const&) = delete;
        InitProxy(InitProxy const&)            = delete;
        InitProxy()                            = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??0InitProxy\@MobEventCommand\@\@QEAA\@AEAVServerLevel\@\@\@Z
         */
        MCAPI InitProxy(class ServerLevel&);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    MobEventCommand& operator=(MobEventCommand const&) = delete;
    MobEventCommand(MobEventCommand const&)            = delete;
    MobEventCommand()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?execute\@MobEventCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@MobEventCommand\@\@SAXAEAVCommandRegistry\@\@$$QEAUInitProxy\@1\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&, struct MobEventCommand::InitProxy&&);
    // NOLINTEND
};
