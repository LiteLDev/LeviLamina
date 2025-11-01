#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkPos;
namespace br::worldgen { class StructureInstance; }
namespace br::worldgen { struct Structure; }
// clang-format on

namespace br::worldgen {

class StructureCache {
public:
    // StructureCache inner types declare
    // clang-format off
    struct StructurePair;
    struct StructureTempOwner;
    // clang-format on
    
    // StructureCache inner types define
    struct StructurePair {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64> mStructure;
        ::ll::TypedStorage<8, 16, ::std::weak_ptr<::br::worldgen::StructureInstance>> mInstance;
        // NOLINTEND
    
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~StructurePair();
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    
    };
    
    using StructureMap = ::std::unordered_map<::ChunkPos, ::std::vector<::br::worldgen::StructureCache::StructurePair>>;
    
    struct StructureTempOwner {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<int>> mTimers;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::br::worldgen::StructureInstance>>> mInstances;
        ::ll::TypedStorage<8, 8, ::std::shared_mutex> mMutex;
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkPos, ::std::vector<::br::worldgen::StructureCache::StructurePair>>> mCache;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex> mCacheMutex;
    ::ll::TypedStorage<8, 56, ::br::worldgen::StructureCache::StructureTempOwner> mWaitingToBeClaimed;
    ::ll::TypedStorage<4, 4, int> mGcTimer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::br::worldgen::StructureInstance const> at(::BlockPos pos) const;

    MCAPI ::std::vector<::std::vector<::std::shared_ptr<::br::worldgen::StructureInstance const>>> collectGroupByStep() const;

    MCAPI void setInstanceForStructure(::br::worldgen::Structure const& structure, ::std::shared_ptr<::br::worldgen::StructureInstance>&& instance, ::ChunkPos chunkPos);

    MCAPI void tick();
    // NOLINTEND

};

}
