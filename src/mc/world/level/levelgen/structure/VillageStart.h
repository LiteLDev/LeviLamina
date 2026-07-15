#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class VillageStart : public ::StructureStart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mValid;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VillageStart() /*override*/ = default;

    virtual bool isValid() const /*override*/;

    virtual ::std::string_view getStructureName() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
