#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class GameRuleCommand : public ::Command {
public:
    // GameRuleCommand inner types declare
    // clang-format off
    struct InitProxy;
    // clang-format on

    // GameRuleCommand inner types define
    struct InitProxy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMERULECOMMAND_INITPROXY
    public:
        InitProxy& operator=(InitProxy const&) = delete;
        InitProxy(InitProxy const&)            = delete;
        InitProxy()                            = delete;
#endif

    public:
        /**
         * @symbol ??0InitProxy\@GameRuleCommand\@\@QEAA\@AEAVLevel\@\@\@Z
         */
        MCAPI InitProxy(class Level&);
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMERULECOMMAND
public:
    GameRuleCommand& operator=(GameRuleCommand const&) = delete;
    GameRuleCommand(GameRuleCommand const&)            = delete;
    GameRuleCommand()                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@GameRuleCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@GameRuleCommand\@\@SAXAEAVCommandRegistry\@\@$$QEAUInitProxy\@1\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&, struct GameRuleCommand::InitProxy&&);

    // private:
    /**
     * @symbol ?getGameRule\@GameRuleCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void getGameRule(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setGameRule\@GameRuleCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void setGameRule(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol
     * ?createJsonIndex\@GameRuleCommand\@\@CAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVGameRule\@\@AEAVValue\@Json\@\@PEAV23\@\@Z
     */
    MCAPI static void createJsonIndex(std::string const&, class GameRule const&, class Json::Value&, std::string*);

private:
};
