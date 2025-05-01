#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class Dimension;
class Random;
// clang-format on

class AncientCityStart : public ::StructureStart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkda1791;
    // NOLINTEND

public:
    // prevent constructor by default
    AncientCityStart& operator=(AncientCityStart const&);
    AncientCityStart(AncientCityStart const&);
    AncientCityStart();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AncientCityStart() /*override*/ = default;

    // vIndex: 2
    virtual bool isValid() const /*override*/;

    // vIndex: 4
    virtual ::std::string_view getStructureName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AncientCityStart(
        ::Dimension&         dimension,
        ::BiomeSource const& biomeSource,
        ::Random&            random,
        int                  chunkX,
        int                  chunkZ
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::Dimension& dimension, ::BiomeSource const& biomeSource, ::Random& random, int chunkX, int chunkZ);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
