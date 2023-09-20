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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCREENHANDLERBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScreenHandlerBase();
#endif
    /**
     * @symbol ??0ScreenHandlerBase\@\@QEAA\@AEAVItemStackRequestActionHandler\@\@\@Z
     */
    MCAPI ScreenHandlerBase(class ItemStackRequestActionHandler &);

};
