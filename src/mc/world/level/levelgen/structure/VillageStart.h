#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class VillageStart : public ::StructureStart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mValid;
    ::ll::TypedStorage<1, 1, bool> mIsAbandoned;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VillageStart() /*override*/ = default;

    virtual bool isValid() const /*override*/;

    virtual bool requiresNeighborAwareBlockUpgrade() const /*override*/;

    virtual ::std::string_view getStructureName() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isValid() const;

    MCAPI bool $requiresNeighborAwareBlockUpgrade() const;

    MCAPI ::std::string_view $getStructureName() const;


    // NOLINTEND
};
