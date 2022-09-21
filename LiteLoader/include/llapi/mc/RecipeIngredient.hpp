/**
 * @file  MC/RecipeIngredient.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "ItemDescriptorCount.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "ItemDescriptor.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class RecipeIngredient.
 *
 */
class RecipeIngredient : public ItemDescriptorCount {

#define AFTER_EXTRA
// Add Member There
public:
    ItemDescriptor descriptor;
    unsigned short count;
private:
    char pad74[6]{ 0 };

#define DISABLE_CONSTRUCTOR_PREVENTION_RECIPEINGREDIENT

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RECIPEINGREDIENT
public:
    class RecipeIngredient& operator=(class RecipeIngredient const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RecipeIngredient();
    /**
     * @hash   166975851
     * @symbol ??0RecipeIngredient@@QEAA@XZ
     */
    MCAPI RecipeIngredient();
    /**
     * @hash   -1714414229
     * @symbol ??0RecipeIngredient@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@HG@Z
     */
    MCAPI RecipeIngredient(class gsl::basic_string_span<char const, -1>, int, unsigned short);
    /**
     * @hash   959836585
     * @symbol ??0RecipeIngredient@@QEAA@AEBVItem@@HG@Z
     */
    MCAPI RecipeIngredient(class Item const &, int, unsigned short);
    /**
     * @hash   -1585443052
     * @symbol ??0RecipeIngredient@@QEAA@AEBVBlockLegacy@@G@Z
     */
    MCAPI RecipeIngredient(class BlockLegacy const &, unsigned short);
    /**
     * @hash   -1966674078
     * @symbol ??0RecipeIngredient@@QEAA@AEBVBlock@@G@Z
     */
    MCAPI RecipeIngredient(class Block const &, unsigned short);
    /**
     * @symbol ??0RecipeIngredient@@QEAA@AEBUItemTag@@G@Z
     */
    MCAPI RecipeIngredient(struct ItemTag const &, unsigned short);
    /**
     * @symbol ??0RecipeIngredient@@QEAA@$$QEAV0@@Z
     */
    MCAPI RecipeIngredient(class RecipeIngredient &&);
    /**
     * @hash   -1253068639
     * @symbol ??0RecipeIngredient@@QEAA@AEBV0@@Z
     */
    MCAPI RecipeIngredient(class RecipeIngredient const &);
    /**
     * @hash   -2105002769
     * @symbol ?EMPTY_INGREDIENT@RecipeIngredient@@2V1@A
     */
    MCAPI static class RecipeIngredient EMPTY_INGREDIENT;

};