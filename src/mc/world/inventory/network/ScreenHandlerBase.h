#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScreenHandlerBase {

public:
    // prevent constructor by default
    ScreenHandlerBase& operator=(ScreenHandlerBase const&) = delete;
    ScreenHandlerBase(ScreenHandlerBase const&)            = delete;
    ScreenHandlerBase()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?handleAction\@ScreenHandlerBase\@\@UEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestAction\@\@\@Z
     */
    virtual enum class ItemStackNetResult handleAction(class ItemStackRequestAction const&);
    /**
     * @vftbl 2
     * @symbol ?endRequest\@ScreenHandlerBase\@\@UEAA?AW4ItemStackNetResult\@\@XZ
     */
    virtual enum class ItemStackNetResult endRequest();
    /**
     * @vftbl 3
     * @symbol ?endRequestBatch\@ScreenHandlerBase\@\@UEAAXXZ
     */
    virtual void endRequestBatch();
    /**
     * @vftbl 4
     * @symbol ?postRequest\@ScreenHandlerBase\@\@UEAAX_N\@Z
     */
    virtual void postRequest(bool);
    // NOLINTEND
};
