#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/WeightedRandomList.h"
#include "mc/world/actor/spawn_category/Type.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IDataInput;
class IDataOutput;
class StructureStart;
namespace br::worldgen { class StructureInstance; }
namespace br::worldgen { struct SpawnerData; }
// clang-format on

class LevelChunkVolumeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk8f23ab;
    ::ll::UntypedStorage<8, 24>  mUnk7498ed;
    ::ll::UntypedStorage<8, 768> mUnk22597b;
    ::ll::UntypedStorage<4, 12>  mUnk208a3f;
    ::ll::UntypedStorage<4, 12>  mUnke69cd4;
    ::ll::UntypedStorage<8, 8>   mUnk6d5f5c;
    ::ll::UntypedStorage<8, 8>   mUnkf41575;
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

    MCAPI void addStructure(::StructureStart const& start);

    MCAPI void addStructureReference(::std::shared_ptr<::br::worldgen::StructureInstance const> instance);

    MCAPI void addStructureReference(::StructureStart const& start);

    MCAPI void deserializeAabbVolumes(::IDataInput& stream);

    MCAPI void deserializeHardcodedSpawners(::IDataInput& stream);

    MCAPI ::std::optional<::WeightedRandomList<::br::worldgen::SpawnerData>>
    dynamicMobsAt(::BlockPos pos, ::SpawnCategory::Type category) const;

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
