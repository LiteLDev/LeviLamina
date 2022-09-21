/**
 * @file  MC/ItemPack.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemPack.
 *
 */
class ItemPack {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMPACK
public:
    class ItemPack& operator=(class ItemPack const &) = delete;
    ItemPack(class ItemPack const &) = delete;
#endif

public:
    /**
     * @hash   95611592
     * @symbol ??0ItemPack@@QEAA@XZ
     */
    MCAPI ItemPack();
    /**
     * @hash   1350905203
     * @symbol ?add@ItemPack@@QEAAXAEBVRecipeIngredient@@H@Z
     */
    MCAPI void add(class RecipeIngredient const &, int);
    /**
     * @hash   -858048506
     * @symbol ??1ItemPack@@QEAA@XZ
     */
    MCAPI ~ItemPack();

};