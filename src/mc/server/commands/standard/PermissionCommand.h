#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class PermissionCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERMISSIONCOMMAND
public:
    PermissionCommand& operator=(PermissionCommand const&) = delete;
    PermissionCommand(PermissionCommand const&)            = delete;
    PermissionCommand()                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@PermissionCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@PermissionCommand\@\@SAXAEAVCommandRegistry\@\@PEAVPermissionsFile\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&, class PermissionsFile*);

    // private:
    /**
     * @symbol ?list\@PermissionCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void list(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?reload\@PermissionCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void reload(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?set\@PermissionCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void set(class CommandOrigin const&, class CommandOutput&) const;

private:
    /**
     * @symbol ?mPermissionsFile\@PermissionCommand\@\@0PEAVPermissionsFile\@\@EA
     */
    MCAPI static class PermissionsFile* mPermissionsFile;
};
