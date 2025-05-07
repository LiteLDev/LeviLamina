#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class Dimension;
class Random;
// clang-format on

class EndCityStart : public ::StructureStart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkbd36dc;
    // NOLINTEND

public:
    // prevent constructor by default
    EndCityStart& operator=(EndCityStart const&);
    EndCityStart(EndCityStart const&);
    EndCityStart();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EndCityStart() /*override*/ = default;

    // vIndex: 2
    virtual bool isValid() const /*override*/;

    // vIndex: 4
    virtual ::std::string_view getStructureName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _create(::Dimension& dimension, ::Random& random, ::ChunkPos const& pos);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int getYPositionForFeature(::ChunkPos const& pos, ::Dimension& dimension);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isValid() const;

    MCNAPI ::std::string_view $getStructureName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
