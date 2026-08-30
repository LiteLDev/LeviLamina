#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class MineshaftStart : public ::StructureStart {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MineshaftStart() /*override*/;

    virtual ::std::string_view getStructureName() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string_view $getStructureName() const;


    // NOLINTEND
};
