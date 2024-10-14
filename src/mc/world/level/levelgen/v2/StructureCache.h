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
    class StructureTempOwner;
    // clang-format on

    // StructureCache inner types define
    struct StructurePair {
    public:
        uchar filler[24];

        // prevent constructor by default
        StructurePair& operator=(StructurePair const&);
        StructurePair(StructurePair const&);
        StructurePair();

    public:
        // NOLINTBEGIN
        MCAPI ~StructurePair();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };
    std::unordered_map<ChunkPos, std::vector<br::worldgen::StructureCache::StructurePair>> unordered_map;
    uchar                                                                                  unk_64[8];

    class StructureTempOwner {
    public:
        // prevent constructor by default
        StructureTempOwner& operator=(StructureTempOwner const&);
        StructureTempOwner(StructureTempOwner const&);
        StructureTempOwner();

    public:
        // NOLINTBEGIN
        MCAPI ~StructureTempOwner();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    StructureCache& operator=(StructureCache const&);
    StructureCache(StructureCache const&);

public:
    // NOLINTBEGIN
    MCAPI StructureCache();

    MCAPI std::shared_ptr<class br::worldgen::StructureInstance const> at(class BlockPos pos) const;

    MCAPI std::vector<std::vector<std::shared_ptr<class br::worldgen::StructureInstance const>>>
          collectGroupByStep() const;

    MCAPI void setInstanceForStructure(
        struct br::worldgen::Structure const&                    structure,
        std::shared_ptr<class br::worldgen::StructureInstance>&& instance,
        class ChunkPos                                           chunkPos
    );

    MCAPI void tick();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace br::worldgen
