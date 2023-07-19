/**
 * @file  SummonCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "RotationCommandUtils.hpp"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SummonCommand.
 *
 */
class SummonCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUMMONCOMMAND
public:
    class SummonCommand& operator=(class SummonCommand const &) = delete;
    SummonCommand(class SummonCommand const &) = delete;
    SummonCommand() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@SummonCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup\@SummonCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @symbol ?_getFacingDirection\@SummonCommand\@\@AEBA?AW4FacingResult\@RotationCommandUtils\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@AEAVVec3\@\@\@Z
     */
    MCAPI enum class RotationCommandUtils::FacingResult _getFacingDirection(class CommandOrigin const &, class CommandOutput &, class Vec3 &) const;

private:

};
