/**
 * @file  GameRuleCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GameRuleCommand.
 *
 */
class GameRuleCommand : public Command {

#define AFTER_EXTRA
// Add Member There
public:
struct InitProxy {
    InitProxy() = delete;
    InitProxy(InitProxy const&) = delete;
    InitProxy(InitProxy const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMERULECOMMAND
public:
    class GameRuleCommand& operator=(class GameRuleCommand const &) = delete;
    GameRuleCommand(class GameRuleCommand const &) = delete;
    GameRuleCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GameRuleCommand();
    /**
     * @vftbl  1
     * @symbol  ?execute\@GameRuleCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?setup\@GameRuleCommand\@\@SAXAEAVCommandRegistry\@\@$$QEAUInitProxy\@1\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &, struct GameRuleCommand::InitProxy &&);

//private:
    /**
     * @symbol  ?getGameRule\@GameRuleCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void getGameRule(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?setGameRule\@GameRuleCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void setGameRule(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?createJsonIndex\@GameRuleCommand\@\@CAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVGameRule\@\@AEAVValue\@Json\@\@PEAV23\@\@Z
     */
    MCAPI static void createJsonIndex(std::string const &, class GameRule const &, class Json::Value &, std::string *);

private:

};