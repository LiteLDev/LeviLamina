#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScreenHandlerBeacon {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCREENHANDLERBEACON
public:
    ScreenHandlerBeacon& operator=(ScreenHandlerBeacon const&) = delete;
    ScreenHandlerBeacon(ScreenHandlerBeacon const&)            = delete;
    ScreenHandlerBeacon()                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?handleAction\@ScreenHandlerBeacon\@\@MEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestAction\@\@\@Z
     */
    virtual enum class ItemStackNetResult handleAction(class ItemStackRequestAction const&);
    /**
     * @vftbl 2
     * @symbol ?endRequest\@ScreenHandlerBeacon\@\@MEAA?AW4ItemStackNetResult\@\@XZ
     */
    virtual enum class ItemStackNetResult endRequest();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?postRequest\@ScreenHandlerBeacon\@\@MEAAX_N\@Z
     */
    virtual void postRequest(bool);

    // private:
    /**
     * @symbol
     * ?_handleBeaconPaymentAction\@ScreenHandlerBeacon\@\@AEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionBeaconPayment\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult _handleBeaconPaymentAction(class ItemStackRequestActionBeaconPayment const&);

private:
};
