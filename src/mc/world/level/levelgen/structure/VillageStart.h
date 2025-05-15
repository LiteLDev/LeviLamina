#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class Dimension;
class IPreliminarySurfaceProvider;
class Random;
// clang-format on

class VillageStart : public ::StructureStart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mValid;
    // NOLINTEND

public:
    // prevent constructor by default
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
    // member functions
    // NOLINTBEGIN
    MCNAPI VillageStart(
        ::Dimension&                         generator,
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        int                                  chunkX,
        int                                  chunkZ,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Dimension&                         generator,
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        int                                  chunkX,
        int                                  chunkZ,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    );
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
