/**
 * @file  MC/ItemStackRequestActionCraftRecipeOptional.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionCraftRecipeOptional.
 *
 */
class ItemStackRequestActionCraftRecipeOptional {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONCRAFTRECIPEOPTIONAL
public:
    class ItemStackRequestActionCraftRecipeOptional& operator=(class ItemStackRequestActionCraftRecipeOptional const &) = delete;
    ItemStackRequestActionCraftRecipeOptional(class ItemStackRequestActionCraftRecipeOptional const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ItemStackRequestActionCraftRecipeOptional();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   -60695807
     * @vftbl  2
     * @symbol ?getFilteredStringIndex@ItemStackRequestActionCraftRecipeOptional@@UEBAHXZ
     */
    virtual int getFilteredStringIndex() const;
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -735762183
     * @vftbl  4
     * @symbol ?_write@ItemStackRequestActionCraftRecipeOptional@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void _write(class BinaryStream &) const;
    /**
     * @hash   879970033
     * @vftbl  5
     * @symbol ?_read@ItemStackRequestActionCraftRecipeOptional@@UEAA_NAEAVReadOnlyBinaryStream@@@Z
     */
    virtual bool _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   633009338
     * @symbol ??0ItemStackRequestActionCraftRecipeOptional@@QEAA@XZ
     */
    MCAPI ItemStackRequestActionCraftRecipeOptional();
    /**
     * @hash   446671077
     * @symbol ?getRecipeNetId@ItemStackRequestActionCraftRecipeOptional@@QEBAAEBV?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@XZ
     */
    MCAPI class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const & getRecipeNetId() const;

};