#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptorCount.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class RecipeIngredient : public ::ItemDescriptorCount {

public:
    // prevent constructor by default
    RecipeIngredient& operator=(RecipeIngredient const&) = delete;
    RecipeIngredient()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RECIPEINGREDIENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RecipeIngredient(); // NOLINT
#endif
    /**
     * @symbol ??0RecipeIngredient\@\@QEAA\@AEBVItemDescriptor\@\@G\@Z
     */
    MCAPI RecipeIngredient(class ItemDescriptor const&, unsigned short); // NOLINT
    /**
     * @symbol ??0RecipeIngredient\@\@QEAA\@AEBVBlock\@\@G\@Z
     */
    MCAPI RecipeIngredient(class Block const&, unsigned short); // NOLINT
    /**
     * @symbol ??0RecipeIngredient\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI RecipeIngredient(class RecipeIngredient const&); // NOLINT
    /**
     * @symbol ??0RecipeIngredient\@\@QEAA\@AEBUItemTag\@\@G\@Z
     */
    MCAPI RecipeIngredient(struct ItemTag const&, unsigned short); // NOLINT
    /**
     * @symbol ??0RecipeIngredient\@\@QEAA\@AEBVItem\@\@HG\@Z
     */
    MCAPI RecipeIngredient(class Item const&, int, unsigned short); // NOLINT
    /**
     * @symbol ??0RecipeIngredient\@\@QEAA\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI RecipeIngredient(class ReadOnlyBinaryStream&); // NOLINT
    /**
     * @symbol ??0RecipeIngredient\@\@QEAA\@AEBVBlockLegacy\@\@G\@Z
     */
    MCAPI RecipeIngredient(class BlockLegacy const&, unsigned short); // NOLINT
    /**
     * @symbol ??0RecipeIngredient\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI RecipeIngredient(class RecipeIngredient&&); // NOLINT
    /**
     * @symbol ??0RecipeIngredient\@\@QEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@HG\@Z
     */
    MCAPI
    RecipeIngredient(class std::basic_string_view<char, struct std::char_traits<char>>, int, unsigned short); // NOLINT
    /**
     * @symbol ?isEmpty\@RecipeIngredient\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const; // NOLINT
    /**
     * @symbol ?EMPTY_INGREDIENT\@RecipeIngredient\@\@2V1\@A
     */
    MCAPI static class RecipeIngredient EMPTY_INGREDIENT; // NOLINT
};
