/**
 * @file  PermissionCommand.hpp
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
 * @brief MC class PermissionCommand.
 *
 */
class PermissionCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERMISSIONCOMMAND
public:
    class PermissionCommand& operator=(class PermissionCommand const &) = delete;
    PermissionCommand(class PermissionCommand const &) = delete;
    PermissionCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PermissionCommand();
    /**
     * @vftbl  1
     * @symbol  ?execute\@PermissionCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?setup\@PermissionCommand\@\@SAXAEAVCommandRegistry\@\@PEAVPermissionsFile\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &, class PermissionsFile *);

//private:
    /**
     * @symbol  ?list\@PermissionCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void list(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?reload\@PermissionCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void reload(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?set\@PermissionCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void set(class CommandOrigin const &, class CommandOutput &) const;

private:
    /**
     * @symbol  ?mPermissionsFile\@PermissionCommand\@\@0PEAVPermissionsFile\@\@EA
     */
    MCAPI static class PermissionsFile * mPermissionsFile;

};