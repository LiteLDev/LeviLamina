/**
 * @file  CraftHandleNonImplemented_DEPRECATEDASKTYLAING.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "CraftHandlerBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CraftHandleNonImplemented_DEPRECATEDASKTYLAING.
 *
 */
class CraftHandleNonImplemented_DEPRECATEDASKTYLAING : public CraftHandlerBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLENONIMPLEMENTED_DEPRECATEDASKTYLAING
public:
    class CraftHandleNonImplemented_DEPRECATEDASKTYLAING& operator=(class CraftHandleNonImplemented_DEPRECATEDASKTYLAING const &) = delete;
    CraftHandleNonImplemented_DEPRECATEDASKTYLAING(class CraftHandleNonImplemented_DEPRECATEDASKTYLAING const &) = delete;
    CraftHandleNonImplemented_DEPRECATEDASKTYLAING() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CraftHandleNonImplemented_DEPRECATEDASKTYLAING();
    /**
     * @hash   -280474968
     * @vftbl  4
     * @symbol ?_handleCraftAction@CraftHandleNonImplemented_DEPRECATEDASKTYLAING@@MEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftBase@@@Z
     */
    virtual enum ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const &);
    /**
     * @hash   -1575685933
     * @symbol ??0CraftHandleNonImplemented_DEPRECATEDASKTYLAING@@QEAA@AEAVItemStackRequestActionCraftHandler@@@Z
     */
    MCAPI CraftHandleNonImplemented_DEPRECATEDASKTYLAING(class ItemStackRequestActionCraftHandler &);

};