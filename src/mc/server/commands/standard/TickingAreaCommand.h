#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class TickingAreaCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKINGAREACOMMAND
public:
    TickingAreaCommand& operator=(TickingAreaCommand const&) = delete;
    TickingAreaCommand(TickingAreaCommand const&)            = delete;
    TickingAreaCommand()                                     = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@TickingAreaCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol
     * ?formatTickingAreaList\@TickingAreaCommand\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@UTickingAreaDescription\@\@V?$allocator\@UTickingAreaDescription\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI static std::string formatTickingAreaList(std::vector<struct TickingAreaDescription> const&);
    /**
     * @symbol ?setup\@TickingAreaCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);

    // private:
    /**
     * @symbol
     * ?_add\@TickingAreaCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@AEAVLevel\@\@AEAVDimension\@\@\@Z
     */
    MCAPI void _add(class CommandOrigin const&, class CommandOutput&, class Level&, class Dimension&) const;
    /**
     * @symbol
     * ?_list\@TickingAreaCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@AEAVLevel\@\@AEAVDimension\@\@\@Z
     */
    MCAPI void _list(class CommandOrigin const&, class CommandOutput&, class Level&, class Dimension&) const;
    /**
     * @symbol
     * ?_preload\@TickingAreaCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@AEAVLevel\@\@AEAVDimension\@\@\@Z
     */
    MCAPI void _preload(class CommandOrigin const&, class CommandOutput&, class Level&, class Dimension&) const;
    /**
     * @symbol
     * ?_remove\@TickingAreaCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@AEAVLevel\@\@AEAVDimension\@\@\@Z
     */
    MCAPI void _remove(class CommandOrigin const&, class CommandOutput&, class Level&, class Dimension&) const;
    /**
     * @symbol
     * ?_removeAll\@TickingAreaCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@AEAVLevel\@\@AEAVDimension\@\@\@Z
     */
    MCAPI void _removeAll(class CommandOrigin const&, class CommandOutput&, class Level&, class Dimension&) const;

private:
};
