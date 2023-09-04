#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CompoundType.h"
#include "mc/enums/LabTableReactionType.h"
#include "mc/world/containers/CompoundContainerType.h"

class CraftableCompounds {
public:
    // prevent constructor by default
    CraftableCompounds& operator=(CraftableCompounds const&) = delete;
    CraftableCompounds(CraftableCompounds const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?_registerCompound@CraftableCompounds@@MEAAXAEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEBVItemStack@@W4LabTableReactionType@@W4CompoundContainerType@@@Z
    virtual void _registerCompound(
        std::vector<class ItemStack> const&,
        class ItemStack const&,
        ::LabTableReactionType,
        ::CompoundContainerType
    );

    // symbol: ??1CraftableCompounds@@UEAA@XZ
    MCVAPI ~CraftableCompounds();

    // symbol: ??0CraftableCompounds@@QEAA@XZ
    MCAPI CraftableCompounds();

    // symbol:
    // ?getComponents@CraftableCompounds@@QEBAPEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEBVItemDescriptor@@@Z
    MCAPI std::vector<class ItemStack> const* getComponents(class ItemDescriptor const&) const;

    // symbol:
    // ?getCompound@CraftableCompounds@@QEAAAEBVItemStack@@AEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@Z
    MCAPI class ItemStack const& getCompound(std::vector<class ItemStack> const&);

    // symbol:
    // ?getReaction@CraftableCompounds@@QEAA?AW4LabTableReactionType@@AEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@Z
    MCAPI ::LabTableReactionType getReaction(std::vector<class ItemStack> const&);

    // symbol: ?registerCompounds@CraftableCompounds@@QEAAXXZ
    MCAPI void registerCompounds();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_getCompoundId@CraftableCompounds@@IEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@3@@Z
    MCAPI std::string _getCompoundId(std::vector<class ItemStack> const&);

    // symbol:
    // ?_registerCompound@CraftableCompounds@@IEAAXAEBV?$vector@UChemistryIngredient@@V?$allocator@UChemistryIngredient@@@std@@@std@@W4CompoundType@@W4LabTableReactionType@@W4CompoundContainerType@@H@Z
    MCAPI void _registerCompound(
        std::vector<struct ChemistryIngredient> const&,
        ::CompoundType,
        ::LabTableReactionType,
        ::CompoundContainerType,
        int
    );

    // symbol:
    // ?_registerCompound@CraftableCompounds@@IEAAXAEBV?$vector@UChemistryIngredient@@V?$allocator@UChemistryIngredient@@@std@@@std@@AEBVItemStack@@W4LabTableReactionType@@W4CompoundContainerType@@@Z
    MCAPI void _registerCompound(
        std::vector<struct ChemistryIngredient> const&,
        class ItemStack const&,
        ::LabTableReactionType,
        ::CompoundContainerType
    );

    // NOLINTEND
};
