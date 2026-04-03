#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/traits/block_trait/ITrait.h"

// auto generated forward declare list
// clang-format off
class BlockType;
class CompoundTag;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace BlockTrait {

class MultiBlock : public ::BlockTrait::ITrait {
public:
    // MultiBlock inner types declare
    // clang-format off
    struct EnabledStates;
    // clang-format on

    // MultiBlock inner types define
    struct EnabledStates {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mEnableMultiBlockState;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void
        fromStringVector(::BlockTrait::MultiBlock::EnabledStates& instance, ::std::vector<::std::string> const& states);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::BlockTrait::MultiBlock::EnabledStates> mStates;
    ::ll::TypedStorage<1, 1, uchar>                                   mDirection;
    ::ll::TypedStorage<1, 1, uchar>                                   mPartCount;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const&) /*override*/;

    virtual void applyToBlockType(::BlockType& blockType) const /*override*/;

    virtual ::std::unique_ptr<::CompoundTag> _buildNetworkTag(::cereal::ReflectionCtx const&) const /*override*/;

    virtual ::std::string const& _getName() const /*override*/;

    virtual ~MultiBlock() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCFOLD static ::std::string const& getName();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const&);

    MCAPI void $applyToBlockType(::BlockType& blockType) const;

    MCAPI ::std::unique_ptr<::CompoundTag> $_buildNetworkTag(::cereal::ReflectionCtx const&) const;

    MCFOLD ::std::string const& $_getName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockTrait
