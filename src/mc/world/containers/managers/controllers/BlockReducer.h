#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockReducer {
public:
    // prevent constructor by default
    BlockReducer& operator=(BlockReducer const&);
    BlockReducer(BlockReducer const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~BlockReducer() = default;

    // vIndex: 1, symbol:
    // ?registerBlock@BlockReducer@@UEAAXAEBVItemStack@@$$QEAV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@Z
    virtual void registerBlock(class ItemStack const&, std::vector<class ItemStack>&&);

    // symbol: ??0BlockReducer@@QEAA@XZ
    MCAPI BlockReducer();

    // symbol:
    // ?getReduction@BlockReducer@@QEBAPEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEBVItemStackBase@@@Z
    MCAPI std::vector<class ItemStack> const* getReduction(class ItemStackBase const&) const;

    // symbol:
    // ?getReductionMap@BlockReducer@@QEBAAEBV?$unordered_map@HV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@U?$hash@H@2@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@std@@@2@@std@@XZ
    MCAPI std::unordered_map<int, std::vector<class ItemStack>> const& getReductionMap() const;

    // symbol: ?tryGetItemDescriptorFromKey@BlockReducer@@QEBA?AVItemDescriptor@@H@Z
    MCAPI class ItemDescriptor tryGetItemDescriptorFromKey(int) const;

    // NOLINTEND
};
