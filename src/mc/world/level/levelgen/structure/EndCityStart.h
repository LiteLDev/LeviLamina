#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class Dimension;
// clang-format on

class EndCityStart : public ::StructureStart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsValid;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EndCityStart() /*override*/;

    virtual bool isValid() const /*override*/;

    virtual ::std::string_view getStructureName() const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static int getYPositionForFeature(::ChunkPos const& pos, ::Dimension& dimension);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isValid() const;

    MCAPI ::std::string_view $getStructureName() const;


    // NOLINTEND
};
