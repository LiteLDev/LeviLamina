/**
 * @file  EnableEncryptionCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EnableEncryptionCommand.
 *
 */
class EnableEncryptionCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENABLEENCRYPTIONCOMMAND
public:
    class EnableEncryptionCommand& operator=(class EnableEncryptionCommand const &) = delete;
    EnableEncryptionCommand(class EnableEncryptionCommand const &) = delete;
    EnableEncryptionCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~EnableEncryptionCommand();
    /**
     * @vftbl  1
     * @symbol  ?execute\@EnableEncryptionCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?setup\@EnableEncryptionCommand\@\@SAXAEAVCommandRegistry\@\@AEAVIMinecraftApp\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &, class IMinecraftApp &);

//private:

private:
    /**
     * @symbol  ?mApp\@EnableEncryptionCommand\@\@0PEAVIMinecraftApp\@\@EA
     */
    MCAPI static class IMinecraftApp * mApp;

};