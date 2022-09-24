/**
 * @file  MultiRecipe.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Recipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MultiRecipe.
 *
 */
class MultiRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MULTIRECIPE
public:
    class MultiRecipe& operator=(class MultiRecipe const &) = delete;
    MultiRecipe(class MultiRecipe const &) = delete;
    MultiRecipe() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MultiRecipe();
    /**
     * @hash   -1970575789
     * @vftbl  5
     * @symbol ?isShapeless@MultiRecipe@@EEBA_NXZ
     */
    virtual bool isShapeless() const;
    /**
     * @hash   896814080
     * @vftbl  10
     * @symbol ?isMultiRecipe@MultiRecipe@@EEBA_NXZ
     */
    virtual bool isMultiRecipe() const;
    /**
     * @hash   178439145
     * @symbol ??0MultiRecipe@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@VHashedString@@@Z
     */
    MCAPI MultiRecipe(class gsl::basic_string_span<char const, -1>, class HashedString);

};