#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
struct BiomeTintCache;
struct BlockBakedMaterialDataComponent;
namespace ClientBlockPipeline { struct IResolvedTint; }
namespace mce { class Color; }
// clang-format on

namespace ClientBlockPipeline {

class ITintResolver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITintResolver();

    virtual ::mce::Color _get(::Block const&, ::BlockPos const&, ::TintMethod, ::BiomeTintCache*) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::ClientBlockPipeline::IResolvedTint>
    get(::Block const&                           block,
        ::BlockBakedMaterialDataComponent const& bakedMaterialData,
        ::BlockPos const&                        relativePos,
        ::BiomeTintCache*                        biomeTintCache);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
