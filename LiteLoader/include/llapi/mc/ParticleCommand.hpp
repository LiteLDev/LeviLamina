/**
 * @file  MC/ParticleCommand.hpp
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
 * @brief MC class ParticleCommand.
 *
 */
class ParticleCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARTICLECOMMAND
public:
    class ParticleCommand& operator=(class ParticleCommand const &) = delete;
    ParticleCommand(class ParticleCommand const &) = delete;
    ParticleCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ParticleCommand();
    /**
     * @hash   -1368183922
     * @vftbl  1
     * @symbol ?execute@ParticleCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1696671888
     * @symbol ?setup@ParticleCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};