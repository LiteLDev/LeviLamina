#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class IPreliminarySurfaceProvider;
// clang-format on

namespace RandomScatteredLargeFeatureDetails {

class ScatteredFeatureStart : public ::StructureStart {
public:
    // ScatteredFeatureStart inner types define
    enum class Type : int {
        JunglePyramid = 0,
        SwamplandHut  = 1,
        DesertPyramid = 2,
        Igloo         = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::RandomScatteredLargeFeatureDetails::ScatteredFeatureStart::Type> type;
    // NOLINTEND

public:
    // prevent constructor by default
    ScatteredFeatureStart();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual int getMaxYSpawnOffset() const /*override*/;

    // vIndex: 4
    virtual ::std::string_view getStructureName() const /*override*/;

    // vIndex: 0
    virtual ~ScatteredFeatureStart() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScatteredFeatureStart(
        ::BiomeSource const&                 source,
        short                                seaLevel,
        int                                  chunkX,
        int                                  chunkZ,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::BiomeSource const&                 source,
        short                                seaLevel,
        int                                  chunkX,
        int                                  chunkZ,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getMaxYSpawnOffset() const;

    MCAPI ::std::string_view $getStructureName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace RandomScatteredLargeFeatureDetails
