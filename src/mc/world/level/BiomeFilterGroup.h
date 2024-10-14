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
    // vIndex: 0
    virtual ~BiomeFilterGroup();

    // vIndex: 1
    virtual std::shared_ptr<class FilterGroup> _createSubgroup(::FilterGroup::CollectionType type) const;

    MCAPI void finalizeParsedValue(class IWorldRegistriesProvider& registries);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI std::shared_ptr<class FilterGroup> _createSubgroup$(::FilterGroup::CollectionType type) const;

    // NOLINTEND
};
