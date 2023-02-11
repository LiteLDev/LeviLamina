/**
 * @file  RecipeOptionalCraftInputs.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct RecipeOptionalCraftInputs {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RECIPEOPTIONALCRAFTINPUTS
public:
    struct RecipeOptionalCraftInputs& operator=(struct RecipeOptionalCraftInputs const &) = delete;
    RecipeOptionalCraftInputs(struct RecipeOptionalCraftInputs const &) = delete;
    RecipeOptionalCraftInputs() = delete;
#endif

public:
    /**
     * @symbol  ??0RecipeOptionalCraftInputs\@\@QEAA\@AEBV?$TypedServerNetId\@URecipeNetIdTag\@\@I$0A\@\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCAPI RecipeOptionalCraftInputs(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &, std::string const &, std::string const &);

};