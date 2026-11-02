#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class MineshaftStart : public ::StructureStart {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MineshaftStart() /*override*/ = default;

    virtual ::std::string_view getStructureName() const /*override*/;

    virtual bool requiresNeighborAwareBlockUpgrade() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string_view $getStructureName() const;

    MCNAPI bool $requiresNeighborAwareBlockUpgrade() const;


    // NOLINTEND
};
