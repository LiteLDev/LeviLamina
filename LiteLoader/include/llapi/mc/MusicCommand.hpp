/**
 * @file  MC/MusicCommand.hpp
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
 * @brief MC class MusicCommand.
 *
 */
class MusicCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MUSICCOMMAND
public:
    class MusicCommand& operator=(class MusicCommand const &) = delete;
    MusicCommand(class MusicCommand const &) = delete;
    MusicCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MusicCommand();
    /**
     * @hash   1889810173
     * @vftbl  1
     * @symbol ?execute@MusicCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   290556348
     * @symbol ?setup@MusicCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @hash   -532173357
     * @symbol ?_handleActionQueueOrPlay@MusicCommand@@AEBAXAEAVCompoundTag@@AEAVCommandOutput@@@Z
     */
    MCAPI void _handleActionQueueOrPlay(class CompoundTag &, class CommandOutput &) const;
    /**
     * @hash   -1134666921
     * @symbol ?_handleActionStop@MusicCommand@@AEBAXAEAVCompoundTag@@AEAVCommandOutput@@@Z
     */
    MCAPI void _handleActionStop(class CompoundTag &, class CommandOutput &) const;
    /**
     * @hash   568406511
     * @symbol ?_handleActionVolume@MusicCommand@@AEBAXAEAVCompoundTag@@AEAVCommandOutput@@@Z
     */
    MCAPI void _handleActionVolume(class CompoundTag &, class CommandOutput &) const;

private:

};