/**
 * @file  MobEventCommand.hpp
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
 * @brief MC class MobEventCommand.
 *
 */
class MobEventCommand : public Command {

#define AFTER_EXTRA
// Add Member There
public:
struct InitProxy {
    InitProxy() = delete;
    InitProxy(InitProxy const&) = delete;
    InitProxy(InitProxy const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEVENTCOMMAND
public:
    class MobEventCommand& operator=(class MobEventCommand const &) = delete;
    MobEventCommand(class MobEventCommand const &) = delete;
    MobEventCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MobEventCommand();
    /**
     * @hash   -475771950
     * @vftbl  1
     * @symbol ?execute@MobEventCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   838175169
     * @symbol ?setup@MobEventCommand@@SAXAEAVCommandRegistry@@$$QEAUInitProxy@1@@Z
     */
    MCAPI static void setup(class CommandRegistry &, struct MobEventCommand::InitProxy &&);

};