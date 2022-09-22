/**
 * @file  ClearSpawnPointCommand.hpp
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
 * @brief MC class ClearSpawnPointCommand.
 *
 */
class ClearSpawnPointCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLEARSPAWNPOINTCOMMAND
public:
    class ClearSpawnPointCommand& operator=(class ClearSpawnPointCommand const &) = delete;
    ClearSpawnPointCommand(class ClearSpawnPointCommand const &) = delete;
    ClearSpawnPointCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ClearSpawnPointCommand();
    /**
     * @hash   1035235258
     * @vftbl  1
     * @symbol ?execute@ClearSpawnPointCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -719182004
     * @symbol ?setup@ClearSpawnPointCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};