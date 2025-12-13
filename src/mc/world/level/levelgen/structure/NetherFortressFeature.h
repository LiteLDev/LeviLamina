#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BiomeSource;
class ChunkPos;
class Dimension;
class IPreliminarySurfaceProvider;
class Random;
class StructureStart;
struct BiomeIdType;
// clang-format on

class NetherFortressFeature : public ::StructureFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb6b0cc;
    // NOLINTEND

public:
    // prevent constructor by default
    NetherFortressFeature& operator=(NetherFortressFeature const&);
    NetherFortressFeature(NetherFortressFeature const&);
    NetherFortressFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::gsl::span<::BiomeIdType const> getRequiredBiomes() const /*override*/;

    virtual bool shouldAddHardcodedSpawnAreas() const /*override*/;

    virtual bool isFeatureChunk(
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    chunkPos,
        uint                                 levelSeed,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        ::Dimension const&                   dimension
    ) /*override*/;

    virtual ::std::unique_ptr<::StructureStart> createStructureStart(
        ::Dimension&                         generator,
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    cp,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    ) /*override*/;

    virtual ~NetherFortressFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetherFortressFeature(uint& seed, ::BaseGameVersion const& baseGameVersion);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint& seed, ::BaseGameVersion const& baseGameVersion);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::gsl::span<::BiomeIdType const> $getRequiredBiomes() const;

    MCFOLD bool $shouldAddHardcodedSpawnAreas() const;

    MCAPI bool $isFeatureChunk(
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    chunkPos,
        uint                                 levelSeed,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        ::Dimension const&                   dimension
    );

    MCAPI ::std::unique_ptr<::StructureStart> $createStructureStart(
        ::Dimension&                         generator,
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    cp,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
