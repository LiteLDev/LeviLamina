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
    virtual ~ITrait() = default;

    virtual void applyToBlockType(::BlockType& blockType) const = 0;

    virtual void initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx) = 0;

    virtual ::std::unique_ptr<::CompoundTag> _buildNetworkTag(::cereal::ReflectionCtx const& ctx) const = 0;

    virtual ::std::string const& _getName() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace BlockTrait
