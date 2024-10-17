#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/CompoundContainerType.h"
#include "mc/world/item/CompoundType.h"
#include "mc/world/level/block/actor/LabTableReactionType.h"

class CraftableCompounds {
public:
    // prevent constructor by default
    CraftableCompounds& operator=(CraftableCompounds const&);
    CraftableCompounds(CraftableCompounds const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftableCompounds();

    // vIndex: 1
    virtual void _registerCompound(
        std::vector<class ItemStack> const& input,
        class ItemStack const&              result,
        ::LabTableReactionType              reaction,
        ::CompoundContainerType             containerOverride
    );

    MCAPI CraftableCompounds();

    MCAPI std::vector<class ItemStack> const* getComponents(class ItemDescriptor const& compound) const;

    MCAPI class ItemStack const& getCompound(std::vector<class ItemStack> const& components);

    MCAPI ::LabTableReactionType getReaction(std::vector<class ItemStack> const& components);

    MCAPI void registerCompounds();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI std::string _getCompoundId(std::vector<class ItemStack> const& input);

    MCAPI void _registerCompound(
        std::vector<struct ChemistryIngredient> const& input,
        class ItemStack const&                         result,
        ::LabTableReactionType                         reaction,
        ::CompoundContainerType                        containerOverride
    );

    MCAPI void _registerCompound(
        std::vector<struct ChemistryIngredient> const& input,
        ::CompoundType                                 result,
        ::LabTableReactionType                         reaction,
        ::CompoundContainerType                        containerOverride,
        int                                            stackCount
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI void _registerCompound$(
        std::vector<class ItemStack> const& input,
        class ItemStack const&              result,
        ::LabTableReactionType              reaction,
        ::CompoundContainerType             containerOverride
    );

    // NOLINTEND
};
