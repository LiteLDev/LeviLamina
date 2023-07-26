#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScreenHandlerBase {

public:
    // prevent constructor by default
    ScreenHandlerBase& operator=(ScreenHandlerBase const&) = delete;
    ScreenHandlerBase(ScreenHandlerBase const&)            = delete;
    ScreenHandlerBase()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?handleAction\@ScreenHandlerBase\@\@UEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestAction\@\@\@Z
     */
    virtual enum class ItemStackNetResult handleAction(class ItemStackRequestAction const&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?endRequest\@ScreenHandlerBase\@\@UEAA?AW4ItemStackNetResult\@\@XZ
     */
    virtual enum class ItemStackNetResult endRequest(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCREENHANDLERBASE
    /**
     * @symbol ?endRequestBatch\@ScreenHandlerBase\@\@UEAAXXZ
     */
    MCVAPI void endRequestBatch(); // NOLINT
    /**
     * @symbol ?postRequest\@ScreenHandlerBase\@\@UEAAX_N\@Z
     */
    MCVAPI void postRequest(bool); // NOLINT
#endif
};
