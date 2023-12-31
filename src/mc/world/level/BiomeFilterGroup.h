#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterGroup.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class BiomeFilterGroup : public ::FilterGroup {
public:
    // prevent constructor by default
    BiomeFilterGroup& operator=(BiomeFilterGroup const&);
    BiomeFilterGroup(BiomeFilterGroup const&);
    BiomeFilterGroup();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BiomeFilterGroup@@UEAA@XZ
    virtual ~BiomeFilterGroup();

    // vIndex: 1, symbol:
    // ?_createSubgroup@BiomeFilterGroup@@MEBA?AV?$shared_ptr@VFilterGroup@@@std@@W4CollectionType@FilterGroup@@@Z
    virtual std::shared_ptr<class FilterGroup> _createSubgroup(::FilterGroup::CollectionType type) const;

    // symbol: ?finalizeParsedValue@BiomeFilterGroup@@QEAAXAEAVIWorldRegistriesProvider@@@Z
    MCAPI void finalizeParsedValue(class IWorldRegistriesProvider& registries);

    // NOLINTEND
};
