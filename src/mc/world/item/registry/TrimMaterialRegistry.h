#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
struct TrimMaterial;
// clang-format on

class TrimMaterialRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::TrimMaterial>> mTrimMaterials;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::TrimMaterial> getTrimMaterialByItemName(::HashedString const& itemName) const;

    MCAPI ::std::optional<::TrimMaterial> getTrimMaterialByMaterialId(::HashedString const& materialId) const;
    // NOLINTEND
};
