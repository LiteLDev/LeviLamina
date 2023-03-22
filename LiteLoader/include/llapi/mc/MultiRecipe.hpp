/**
 * @file  MultiRecipe.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 5
     * @symbol ?isShapeless\@MultiRecipe\@\@EEBA_NXZ
     */
    virtual bool isShapeless() const;
    /**
     * @vftbl 9
     * @symbol ?isMultiRecipe\@MultiRecipe\@\@EEBA_NXZ
     */
    virtual bool isMultiRecipe() const;
    /**
     * @symbol ??0MultiRecipe\@\@QEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@VHashedString\@\@\@Z
     */
    MCAPI MultiRecipe(class std::basic_string_view<char, struct std::char_traits<char>>, class HashedString);

};
