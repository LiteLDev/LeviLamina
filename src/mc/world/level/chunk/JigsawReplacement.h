#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/StructureProcessor.h"
#include "mc/world/level/levelgen/v2/processors/StructureProcessorType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockSource;
namespace Util { class XXHash; }
namespace br::worldgen { struct StructureBlockInfo; }
namespace br::worldgen { struct StructurePlaceSettings; }
// clang-format on

namespace br::worldgen::processors {

class JigsawReplacement : public ::br::worldgen::StructureProcessor {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<::br::worldgen::StructureBlockInfo> process(
        ::IBlockSource&,
        ::BlockPos,
        ::BlockPos,
        ::br::worldgen::StructureBlockInfo const&,
        ::br::worldgen::StructureBlockInfo&&,
        ::br::worldgen::StructurePlaceSettings const&
    ) const /*override*/;

    virtual ::br::worldgen::StructureProcessorType type() const /*override*/;

    virtual void appendMetadataKey(::Util::XXHash&) const /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor>> const& INSTANCE();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace br::worldgen::processors
