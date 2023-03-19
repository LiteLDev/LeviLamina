/**
 * @file  RecipeIngredient.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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

#define DISABLE_CONSTRUCTOR_PREVENTION_RECIPEINGREDIENT

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RECIPEINGREDIENT
public:
    class RecipeIngredient& operator=(class RecipeIngredient const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RECIPEINGREDIENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RecipeIngredient();
#endif
    /**
     * @symbol ??0RecipeIngredient\@\@QEAA\@XZ
     */
    MCAPI RecipeIngredient();
    /**
     * @symbol ??0RecipeIngredient\@\@QEAA\@AEBVBlock\@\@G\@Z
     */
    MCAPI RecipeIngredient(class Block const &, unsigned short);
    /**
     * @symbol ??0RecipeIngredient\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI RecipeIngredient(class RecipeIngredient const &);
    /**
     * @symbol ??0RecipeIngredient\@\@QEAA\@AEBUItemTag\@\@G\@Z
     */
    MCAPI RecipeIngredient(struct ItemTag const &, unsigned short);
    /**
     * @symbol ??0RecipeIngredient\@\@QEAA\@AEBVItem\@\@HG\@Z
     */
    MCAPI RecipeIngredient(class Item const &, int, unsigned short);
    /**
     * @symbol ??0RecipeIngredient\@\@QEAA\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI RecipeIngredient(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0RecipeIngredient\@\@QEAA\@AEBVBlockLegacy\@\@G\@Z
     */
    MCAPI RecipeIngredient(class BlockLegacy const &, unsigned short);
    /**
     * @symbol ??0RecipeIngredient\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI RecipeIngredient(class RecipeIngredient &&);
    /**
     * @symbol ??0RecipeIngredient\@\@QEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@HG\@Z
     */
    MCAPI RecipeIngredient(class std::basic_string_view<char, struct std::char_traits<char>>, int, unsigned short);
    /**
     * @symbol ?EMPTY_INGREDIENT\@RecipeIngredient\@\@2V1\@A
     */
    MCAPI static class RecipeIngredient EMPTY_INGREDIENT;

};
