#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemStackRequestActionDataless.h"

class ScreenHandlerLabTable {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCREENHANDLERLABTABLE
public:
    ScreenHandlerLabTable& operator=(ScreenHandlerLabTable const&) = delete;
    ScreenHandlerLabTable(ScreenHandlerLabTable const&)            = delete;
    ScreenHandlerLabTable()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?handleAction\@ScreenHandlerLabTable\@\@MEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestAction\@\@\@Z
     */
    virtual enum class ItemStackNetResult handleAction(class ItemStackRequestAction const&);
    /**
     * @vftbl 2
     * @symbol ?endRequest\@ScreenHandlerLabTable\@\@MEAA?AW4ItemStackNetResult\@\@XZ
     */
    virtual enum class ItemStackNetResult endRequest();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?postRequest\@ScreenHandlerLabTable\@\@MEAAX_N\@Z
     */
    virtual void postRequest(bool);

    // private:
    /**
     * @symbol
     * ?_handleLabTableCombine\@ScreenHandlerLabTable\@\@AEAA?AW4ItemStackNetResult\@\@AEBV?$ItemStackRequestActionDataless\@$08\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult _handleLabTableCombine(class ItemStackRequestActionDataless<9> const&);

private:
};
