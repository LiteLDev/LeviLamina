#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/WeightedRandomList.h"
#include "mc/world/actor/spawn_category/Type.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/chunk/LevelChunkDataRegistry.h"

// auto generated forward declare list
// clang-format off
class IDataInput;
class IDataOutput;
class StructureSpawnRegistry;
class StructureStart;
class Vec3;
namespace br::worldgen { class StructureInstance; }
namespace br::worldgen { struct SpawnerData; }
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
    // prevent constructor by default
    LevelChunkVolumeData& operator=(LevelChunkVolumeData const&);
    LevelChunkVolumeData(LevelChunkVolumeData const&);
    LevelChunkVolumeData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addStructure(::std::shared_ptr<::br::worldgen::StructureInstance const> instance);

    MCFOLD void addStructure(::StructureStart const& start);

    MCAPI void addStructureReference(::std::shared_ptr<::br::worldgen::StructureInstance const> instance);

    MCFOLD void addStructureReference(::StructureStart const& start);

    MCAPI void deserializeAabbVolumes(::IDataInput& stream);

    MCAPI void deserializeHardcodedSpawners(::IDataInput& stream);

    MCAPI ::std::optional<::WeightedRandomList<::br::worldgen::SpawnerData>>
    dynamicMobsAt(::BlockPos pos, ::SpawnCategory::Type category) const;

    MCAPI ::std::vector<::std::string> getStructuresAt(::Vec3 position) const;

    MCAPI ::std::optional<::WeightedRandomList<::br::worldgen::SpawnerData>>
    mobsAt(::BlockPos pos, ::SpawnCategory::Type category) const;

    MCAPI bool serializeAabbVolumes(::IDataOutput& stream) const;

    MCAPI ::std::vector<::BlockPos> structureSpawnPos() const;

    MCAPI ~LevelChunkVolumeData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
