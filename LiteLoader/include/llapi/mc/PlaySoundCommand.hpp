/**
 * @file  MC/PlaySoundCommand.hpp
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
 * @brief MC class PlaySoundCommand.
 *
 */
class PlaySoundCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYSOUNDCOMMAND
public:
    class PlaySoundCommand& operator=(class PlaySoundCommand const &) = delete;
    PlaySoundCommand(class PlaySoundCommand const &) = delete;
    PlaySoundCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~PlaySoundCommand();
    /**
     * @hash   -1560321981
     * @vftbl  1
     * @symbol ?execute@PlaySoundCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1229766228
     * @symbol ?setup@PlaySoundCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};