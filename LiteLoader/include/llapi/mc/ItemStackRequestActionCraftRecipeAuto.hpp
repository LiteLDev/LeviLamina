/**
 * @file  MC/ItemStackRequestActionCraftRecipeAuto.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionCraftRecipeAuto.
 *
 */
class ItemStackRequestActionCraftRecipeAuto {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONCRAFTRECIPEAUTO
public:
    class ItemStackRequestActionCraftRecipeAuto& operator=(class ItemStackRequestActionCraftRecipeAuto const &) = delete;
    ItemStackRequestActionCraftRecipeAuto(class ItemStackRequestActionCraftRecipeAuto const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ItemStackRequestActionCraftRecipeAuto();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   258775288
     * @vftbl  4
     * @symbol ?_write@ItemStackRequestActionCraftRecipeAuto@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void _write(class BinaryStream &) const;
    /**
     * @hash   1697608256
     * @vftbl  5
     * @symbol ?_read@ItemStackRequestActionCraftRecipeAuto@@UEAA_NAEAVReadOnlyBinaryStream@@@Z
     */
    virtual bool _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1272144105
     * @symbol ??0ItemStackRequestActionCraftRecipeAuto@@QEAA@XZ
     */
    MCAPI ItemStackRequestActionCraftRecipeAuto();
    /**
     * @hash   -290993715
     * @symbol ?getNumCrafts@ItemStackRequestActionCraftRecipeAuto@@QEBAEXZ
     */
    MCAPI unsigned char getNumCrafts() const;

};