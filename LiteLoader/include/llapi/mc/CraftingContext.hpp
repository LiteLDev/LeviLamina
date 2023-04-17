/**
 * @file  CraftingContext.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct CraftingContext {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTINGCONTEXT
public:
    struct CraftingContext& operator=(struct CraftingContext const &) = delete;
    CraftingContext(struct CraftingContext const &) = delete;
    CraftingContext() = delete;
#endif

public:
    /**
     * @symbol ??1CraftingContext\@\@QEAA\@XZ
     */
    MCAPI ~CraftingContext();
    /**
     * @symbol ?buildCraftingContext\@CraftingContext\@\@SA?AU1\@AEBVILevel\@\@\@Z
     */
    MCAPI static struct CraftingContext buildCraftingContext(class ILevel const &);

};