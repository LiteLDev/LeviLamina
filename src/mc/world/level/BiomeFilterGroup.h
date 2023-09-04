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
    BiomeFilterGroup& operator=(BiomeFilterGroup const&) = delete;
    BiomeFilterGroup(BiomeFilterGroup const&)            = delete;
    BiomeFilterGroup()                                   = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?_createSubgroup@BiomeFilterGroup@@MEBA?AV?$shared_ptr@VFilterGroup@@@std@@W4CollectionType@FilterGroup@@@Z
    virtual std::shared_ptr<class FilterGroup> _createSubgroup(::FilterGroup::CollectionType) const;

    // symbol: ??1BiomeFilterGroup@@UEAA@XZ
    MCVAPI ~BiomeFilterGroup();

    // symbol: ?finalizeParsedValue@BiomeFilterGroup@@QEAAXAEAVIWorldRegistriesProvider@@@Z
    MCAPI void finalizeParsedValue(class IWorldRegistriesProvider&);

    // NOLINTEND
};
