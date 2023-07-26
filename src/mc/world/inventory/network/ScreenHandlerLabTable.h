#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemStackRequestActionDataless.h"

class ScreenHandlerLabTable {

public:
    // prevent constructor by default
    ScreenHandlerLabTable& operator=(ScreenHandlerLabTable const&) = delete;
    ScreenHandlerLabTable(ScreenHandlerLabTable const&)            = delete;
    ScreenHandlerLabTable()                                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?handleAction\@ScreenHandlerLabTable\@\@MEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestAction\@\@\@Z
     */
    virtual enum class ItemStackNetResult handleAction(class ItemStackRequestAction const&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?endRequest\@ScreenHandlerLabTable\@\@MEAA?AW4ItemStackNetResult\@\@XZ
     */
    virtual enum class ItemStackNetResult endRequest(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?postRequest\@ScreenHandlerLabTable\@\@MEAAX_N\@Z
     */
    virtual void postRequest(bool); // NOLINT

    // private:
    /**
     * @symbol
     * ?_handleLabTableCombine\@ScreenHandlerLabTable\@\@AEAA?AW4ItemStackNetResult\@\@AEBV?$ItemStackRequestActionDataless\@$08\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult
    _handleLabTableCombine(class ItemStackRequestActionDataless<9> const&); // NOLINT

private:
};
