/**
 * @file  ScreenHandlerBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScreenHandlerBase.
 *
 */
class ScreenHandlerBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCREENHANDLERBASE
public:
    class ScreenHandlerBase& operator=(class ScreenHandlerBase const &) = delete;
    ScreenHandlerBase(class ScreenHandlerBase const &) = delete;
    ScreenHandlerBase() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?handleAction\@ScreenHandlerBase\@\@UEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestAction\@\@\@Z
     */
    virtual enum class ItemStackNetResult handleAction(class ItemStackRequestAction const &);
    /**
     * @vftbl 2
     * @symbol ?endRequest\@ScreenHandlerBase\@\@UEAA?AW4ItemStackNetResult\@\@XZ
     */
    virtual enum class ItemStackNetResult endRequest();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCREENHANDLERBASE
    /**
     * @symbol ?endRequestBatch\@ScreenHandlerBase\@\@UEAAXXZ
     */
    MCVAPI void endRequestBatch();
    /**
     * @symbol ?postRequest\@ScreenHandlerBase\@\@UEAAX_N\@Z
     */
    MCVAPI void postRequest(bool);
#endif

};
