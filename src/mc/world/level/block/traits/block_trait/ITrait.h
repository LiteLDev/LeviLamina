#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockType;
class CompoundTag;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace BlockTrait {

class ITrait {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITrait();

    virtual void applyToBlockType(::BlockType&) const = 0;

    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const&) const = 0;

    virtual void initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&) = 0;
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

} // namespace BlockTrait
