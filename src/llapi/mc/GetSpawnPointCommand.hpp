/**
 * @file  GetSpawnPointCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GetSpawnPointCommand.
 *
 */
class GetSpawnPointCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETSPAWNPOINTCOMMAND
public:
    class GetSpawnPointCommand& operator=(class GetSpawnPointCommand const &) = delete;
    GetSpawnPointCommand(class GetSpawnPointCommand const &) = delete;
    GetSpawnPointCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GetSpawnPointCommand();
    /**
     * @vftbl  1
     * @symbol  ?execute\@GetSpawnPointCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?setup\@GetSpawnPointCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};