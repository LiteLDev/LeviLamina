#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/StructureProcessor.h"
#include "mc/world/level/levelgen/v2/processors/StructureProcessorType.h"
#include "mc/world/level/levelgen/v2/providers/IntProvider.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockSource;
namespace Util { class XXHash; }
namespace br::worldgen { struct StructureBlockInfo; }
namespace br::worldgen { struct StructurePlaceSettings; }
// clang-format on

namespace br::worldgen::processors {

class Capped : public ::br::worldgen::StructureProcessor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>> mDelegate;
    ::ll::TypedStorage<8, 32, ::IntProvider>                                                                mLimit;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::vector<::br::worldgen::StructureBlockInfo> finalize(
        ::IBlockSource&,
        ::BlockPos,
        ::BlockPos,
        ::std::vector<::br::worldgen::StructureBlockInfo> const&,
        ::std::vector<::br::worldgen::StructureBlockInfo>&&,
        ::br::worldgen::StructurePlaceSettings const&
    ) const /*override*/;

    virtual ::br::worldgen::StructureProcessorType type() const /*override*/;

    virtual void appendMetadataKey(::Util::XXHash&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace br::worldgen::processors
