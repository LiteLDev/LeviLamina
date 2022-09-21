/**
 * @file  MC/ScreenHandlerBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ScreenHandlerBase();
    /**
     * @hash   540292198
     * @vftbl  1
     * @symbol ?handleAction@ScreenHandlerBase@@UEAA?AW4ItemStackNetResult@@AEBVItemStackRequestAction@@@Z
     */
    virtual enum ItemStackNetResult handleAction(class ItemStackRequestAction const &);
    /**
     * @hash   -258305167
     * @vftbl  2
     * @symbol ?endRequest@ScreenHandlerBase@@UEAA?AW4ItemStackNetResult@@XZ
     */
    virtual enum ItemStackNetResult endRequest();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCREENHANDLERBASE
    /**
     * @hash   -1819722370
     * @symbol ?endRequestBatch@ScreenHandlerBase@@UEAAXXZ
     */
    MCVAPI void endRequestBatch();
    /**
     * @hash   -610387771
     * @symbol ?postRequest@ScreenHandlerBase@@UEAAX_N@Z
     */
    MCVAPI void postRequest(bool);
#endif
    /**
     * @hash   1384238314
     * @symbol ??0ScreenHandlerBase@@QEAA@AEAVItemStackRequestActionHandler@@@Z
     */
    MCAPI ScreenHandlerBase(class ItemStackRequestActionHandler &);

//protected:
    /**
     * @hash   -480756571
     * @symbol ?_tryGetSparseContainer@ScreenHandlerBase@@IEAA?AV?$shared_ptr@VSimpleSparseContainer@@@std@@W4ContainerEnumName@@@Z
     */
    MCAPI class std::shared_ptr<class SimpleSparseContainer> _tryGetSparseContainer(enum ContainerEnumName);

protected:

};