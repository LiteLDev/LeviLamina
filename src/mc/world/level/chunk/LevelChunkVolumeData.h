#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkPos;
class IDataInput;
class StructureSpawnRegistry;
class StructureStart;
namespace br { class LevelChunkDataRegistry; }
namespace br::worldgen { class StructureInstance; }
// clang-format on

class LevelChunkVolumeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::br::worldgen::StructureInstance const>>> mStructures;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::br::worldgen::StructureInstance const>>>
                                                              mStructureReferences;
    ::ll::TypedStorage<8, 768, ::br::LevelChunkDataRegistry>  mDataRegistry;
    ::ll::TypedStorage<4, 12, ::BlockPos>                     mMin;
    ::ll::TypedStorage<4, 12, ::BlockPos>                     mMax;
    ::ll::TypedStorage<8, 8, ::ChunkPos>                      mChunkPos;
    ::ll::TypedStorage<8, 8, ::StructureSpawnRegistry const&> mStructureSpawnRegistry;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addStructure(::std::shared_ptr<::br::worldgen::StructureInstance const> instance);

    MCFOLD void addStructure(::StructureStart const& start);

    MCAPI void addStructureReference(::std::shared_ptr<::br::worldgen::StructureInstance const> instance);

    MCFOLD void addStructureReference(::StructureStart const& start);

    MCAPI void deserializeAabbVolumes(::IDataInput& stream);

    MCAPI void deserializeHardcodedSpawners(::IDataInput& stream);

    MCAPI ::std::vector<::BlockPos> structureSpawnPos() const;

    MCAPI ~LevelChunkVolumeData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
