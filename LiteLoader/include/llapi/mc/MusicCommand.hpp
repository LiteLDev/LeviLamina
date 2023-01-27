/**
 * @file  MusicCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Command.hpp"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~MusicCommand();
    /**
     * @hash   1896964605
     * @vftbl  1
     * @symbol  ?execute\@MusicCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   298002924
     * @symbol  ?setup\@MusicCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @hash   -525065053
     * @symbol  ?_handleActionQueueOrPlay\@MusicCommand\@\@AEBAXAEAVCompoundTag\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _handleActionQueueOrPlay(class CompoundTag &, class CommandOutput &) const;
    /**
     * @hash   -1127589369
     * @symbol  ?_handleActionStop\@MusicCommand\@\@AEBAXAEAVCompoundTag\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _handleActionStop(class CompoundTag &, class CommandOutput &) const;
    /**
     * @hash   575514815
     * @symbol  ?_handleActionVolume\@MusicCommand\@\@AEBAXAEAVCompoundTag\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _handleActionVolume(class CompoundTag &, class CommandOutput &) const;

private:

};