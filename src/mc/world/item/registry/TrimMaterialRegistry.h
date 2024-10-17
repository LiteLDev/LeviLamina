#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TrimMaterialRegistry {
public:
    // prevent constructor by default
    TrimMaterialRegistry& operator=(TrimMaterialRegistry const&);
    TrimMaterialRegistry(TrimMaterialRegistry const&);
    TrimMaterialRegistry();

public:
    // NOLINTBEGIN
    MCAPI std::vector<struct TrimMaterial> const& getAllEntries() const;

    MCAPI std::optional<struct TrimMaterial> getTrimMaterialByItemName(class HashedString const& itemName) const;

    MCAPI std::optional<struct TrimMaterial> getTrimMaterialByMaterialId(class HashedString const& materialId) const;

    MCAPI void initializeServer();

    // NOLINTEND
};
