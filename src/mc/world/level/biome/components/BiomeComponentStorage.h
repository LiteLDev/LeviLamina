#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

class BiomeComponentStorage {
public:
    // prevent constructor by default
    BiomeComponentStorage& operator=(BiomeComponentStorage const&);
    BiomeComponentStorage(BiomeComponentStorage const&);
    BiomeComponentStorage();

public:
    // NOLINTBEGIN
    MCAPI void finalizeComponents();

    MCAPI ~BiomeComponentStorage();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _addingComponentsIsAllowed() const;

    MCAPI bool _hasComponent(class Bedrock::typeid_t<void> typeId) const;

    MCAPI void _removeComponent(class Bedrock::typeid_t<void> typeId);

    // NOLINTEND
};
