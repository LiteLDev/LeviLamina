/**
 * @file  MC/CloseWebSocketCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CloseWebSocketCommand.
 *
 */
class CloseWebSocketCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLOSEWEBSOCKETCOMMAND
public:
    class CloseWebSocketCommand& operator=(class CloseWebSocketCommand const &) = delete;
    CloseWebSocketCommand(class CloseWebSocketCommand const &) = delete;
    CloseWebSocketCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CloseWebSocketCommand();
    /**
     * @hash   1808135175
     * @vftbl  1
     * @symbol ?execute@CloseWebSocketCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1180811669
     * @symbol ?setup@CloseWebSocketCommand@@SAXAEAVCommandRegistry@@AEAVIMinecraftApp@@@Z
     */
    MCAPI static void setup(class CommandRegistry &, class IMinecraftApp &);

//private:

private:
    /**
     * @hash   1337157163
     * @symbol ?mApp@CloseWebSocketCommand@@0PEAVIMinecraftApp@@EA
     */
    MCAPI static class IMinecraftApp * mApp;

};