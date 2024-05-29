#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

class BiomeComponentStorage {
public:
    // prevent constructor by default
    BiomeComponentStorage& operator=(BiomeComponentStorage const&);
    BiomeComponentStorage(BiomeComponentStorage const&);
    BiomeComponentStorage();

public:
    // NOLINTBEGIN
    // symbol: ?finalizeComponents@BiomeComponentStorage@@QEAAXXZ
    MCAPI void finalizeComponents();

    // symbol: ??1BiomeComponentStorage@@QEAA@XZ
    MCAPI ~BiomeComponentStorage();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addingComponentsIsAllowed@BiomeComponentStorage@@AEBA_NXZ
    MCAPI bool _addingComponentsIsAllowed() const;

    // symbol: ?_hasComponent@BiomeComponentStorage@@AEBA_NV?$typeid_t@X@Bedrock@@@Z
    MCAPI bool _hasComponent(class Bedrock::typeid_t<void>) const;

    // symbol: ?_removeComponent@BiomeComponentStorage@@AEAAXV?$typeid_t@X@Bedrock@@@Z
    MCAPI void _removeComponent(class Bedrock::typeid_t<void>);

    // NOLINTEND
};
