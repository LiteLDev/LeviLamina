/**
 * @file  CraftHandlerLoom.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "CraftHandlerBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CraftHandlerLoom.
 *
 */
class CraftHandlerLoom : public CraftHandlerBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERLOOM
public:
    class CraftHandlerLoom& operator=(class CraftHandlerLoom const &) = delete;
    CraftHandlerLoom(class CraftHandlerLoom const &) = delete;
    CraftHandlerLoom() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 4
     * @symbol ?_handleCraftAction\@CraftHandlerLoom\@\@MEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionCraftBase\@\@\@Z
     */
    virtual enum class ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const &);

};
