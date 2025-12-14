#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

// auto generated forward declare list
// clang-format off
class BiomeRegistry;
class BiomeSource;
class IPreliminarySurfaceProvider;
// clang-format on

class RuinedPortalStart : public ::StructureStart {
public:
    // prevent constructor by default
    RuinedPortalStart();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string_view getStructureName() const /*override*/;

    virtual ~RuinedPortalStart() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RuinedPortalStart(
        ::BiomeRegistry&                     registry,
        ::BiomeSource const&                 source,
        int                                  chunkX,
        int                                  chunkZ,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::BiomeRegistry&                     registry,
        ::BiomeSource const&                 source,
        int                                  chunkX,
        int                                  chunkZ,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string_view $getStructureName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
