#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterGroup.h"

// auto generated forward declare list
// clang-format off
class IWorldRegistriesProvider;
// clang-format on

class BiomeFilterGroup : public ::FilterGroup {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BiomeFilterGroup() /*override*/;

    // vIndex: 2
    virtual ::std::shared_ptr<::FilterGroup> _createSubgroup(::FilterGroup::CollectionType type) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void finalizeParsedValue(::IWorldRegistriesProvider& registries);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::shared_ptr<::FilterGroup> $_createSubgroup(::FilterGroup::CollectionType type) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
