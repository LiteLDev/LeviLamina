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
    ::ll::UntypedStorage<8, 24> mUnk315430;
    // NOLINTEND

public:
    // prevent constructor by default
    TrimMaterialRegistry& operator=(TrimMaterialRegistry const&);
    TrimMaterialRegistry(TrimMaterialRegistry const&);
    TrimMaterialRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::TrimMaterial> getTrimMaterialByItemName(::HashedString const& itemName) const;

    MCNAPI ::std::optional<::TrimMaterial> getTrimMaterialByMaterialId(::HashedString const& materialId) const;
    // NOLINTEND
};
