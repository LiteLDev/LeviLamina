#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
namespace br::worldgen { class StructureInstance; }
namespace br::worldgen { struct Structure; }
// clang-format on

namespace br::worldgen {

struct ChunkStructureAccess {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChunkStructureAccess();

    virtual ::std::shared_ptr<::br::worldgen::StructureInstance const>
    getStructureInstance(::br::worldgen::Structure const& structure) const = 0;

    virtual void setStructureInstance(
        ::br::worldgen::Structure const&                     structure,
        ::std::shared_ptr<::br::worldgen::StructureInstance> instance
    ) = 0;

    virtual ::ChunkPos getPos() const = 0;
    // NOLINTEND
};

} // namespace br::worldgen
