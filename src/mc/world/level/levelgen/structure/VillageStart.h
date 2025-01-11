#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class VillageStart : public ::StructureStart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkb3a0e0;
    // NOLINTEND

public:
    // prevent constructor by default
    VillageStart& operator=(VillageStart const&);
    VillageStart(VillageStart const&);
    VillageStart();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VillageStart() /*override*/ = default;

    // vIndex: 2
    virtual bool isValid() const /*override*/;

    // vIndex: 4
    virtual ::std::string_view getStructureName() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isValid() const;

    MCAPI ::std::string_view $getStructureName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
