/**
 * @file  MusicCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
     * @hash   -2007686992
     */
    virtual ~MusicCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@MusicCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   1889810173
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup@MusicCommand@@SAXAEAVCommandRegistry@@@Z
     * @hash   290556348
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @symbol ?_handleActionQueueOrPlay@MusicCommand@@AEBAXAEAVCompoundTag@@AEAVCommandOutput@@@Z
     * @hash   -532173357
     */
    MCAPI void _handleActionQueueOrPlay(class CompoundTag &, class CommandOutput &) const;
    /**
     * @symbol ?_handleActionStop@MusicCommand@@AEBAXAEAVCompoundTag@@AEAVCommandOutput@@@Z
     * @hash   -1134666921
     */
    MCAPI void _handleActionStop(class CompoundTag &, class CommandOutput &) const;
    /**
     * @symbol ?_handleActionVolume@MusicCommand@@AEBAXAEAVCompoundTag@@AEAVCommandOutput@@@Z
     * @hash   568406511
     */
    MCAPI void _handleActionVolume(class CompoundTag &, class CommandOutput &) const;

private:

};