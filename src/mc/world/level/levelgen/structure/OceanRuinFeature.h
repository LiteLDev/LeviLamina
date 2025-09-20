#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BiomeSource;
class BlockPos;
class ChunkPos;
class Dimension;
class HashedString;
class IPreliminarySurfaceProvider;
class OceanMonumentFeature;
class Random;
class StructureStart;
struct BiomeIdType;
// clang-format on

class OceanRuinFeature : public ::StructureFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk6293aa;
    ::ll::UntypedStorage<4, 4>  mUnk41ecdf;
    ::ll::UntypedStorage<4, 4>  mUnk3ed8b4;
    ::ll::UntypedStorage<8, 24> mUnk93efb0;
    ::ll::UntypedStorage<8, 8>  mUnk539693;
    // NOLINTEND

public:
    // prevent constructor by default
    OceanRuinFeature& operator=(OceanRuinFeature const&);
    OceanRuinFeature(OceanRuinFeature const&);
    OceanRuinFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::gsl::span<::BiomeIdType const> getRequiredBiomes() const /*override*/;

    // vIndex: 4
    virtual bool getNearestGeneratedFeature(
        ::Dimension&                           dimension,
        ::BiomeSource const&                   biomeSource,
        ::BlockPos const&                      origin,
        ::BlockPos&                            pos,
        ::IPreliminarySurfaceProvider const&   preliminarySurfaceLevel,
        bool                                   mustBeInNewChunks,
        ::std::optional<::HashedString> const& biomeTag
    ) /*override*/;

    // vIndex: 5
    virtual bool isFeatureChunk(
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    lc,
        uint                                 levelSeed,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        ::Dimension const&                   dimension
    ) /*override*/;

    // vIndex: 6
    virtual ::std::unique_ptr<::StructureStart> createStructureStart(
        ::Dimension&                         generator,
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    lc,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    ) /*override*/;

    // vIndex: 0
    virtual ~OceanRuinFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OceanRuinFeature(::OceanMonumentFeature& monument, uint seed, ::BaseGameVersion const& baseGameVersion);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OceanMonumentFeature& monument, uint seed, ::BaseGameVersion const& baseGameVersion);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::gsl::span<::BiomeIdType const> $getRequiredBiomes() const;

    MCAPI bool $getNearestGeneratedFeature(
        ::Dimension&                           dimension,
        ::BiomeSource const&                   biomeSource,
        ::BlockPos const&                      origin,
        ::BlockPos&                            pos,
        ::IPreliminarySurfaceProvider const&   preliminarySurfaceLevel,
        bool                                   mustBeInNewChunks,
        ::std::optional<::HashedString> const& biomeTag
    );

    MCAPI bool $isFeatureChunk(
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    lc,
        uint                                 levelSeed,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        ::Dimension const&                   dimension
    );

    MCAPI ::std::unique_ptr<::StructureStart> $createStructureStart(
        ::Dimension&                         generator,
        ::BiomeSource const&                 biomeSource,
        ::Random&                            random,
        ::ChunkPos const&                    lc,
        ::IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
