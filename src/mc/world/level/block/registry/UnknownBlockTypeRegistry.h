#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/registry/IUnknownBlockTypeRegistry.h"

class UnknownBlockTypeRegistry : public ::IUnknownBlockTypeRegistry {
public:
    // prevent constructor by default
    UnknownBlockTypeRegistry& operator=(UnknownBlockTypeRegistry const&);
    UnknownBlockTypeRegistry(UnknownBlockTypeRegistry const&);
    UnknownBlockTypeRegistry();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1UnknownBlockTypeRegistry@@UEAA@XZ
    virtual ~UnknownBlockTypeRegistry() = default;

    // vIndex: 1, symbol: ?getUnknownBlock@UnknownBlockTypeRegistry@@UEAAAEBVBlock@@AEBVCompoundTag@@@Z
    virtual class Block const& getUnknownBlock(class CompoundTag const& serId);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_registerBlock@UnknownBlockTypeRegistry@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K@Z
    MCAPI void _registerBlock(std::string const& name, uint64 serIdHash);

    // NOLINTEND
};
