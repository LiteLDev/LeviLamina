#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class BlockStateGroup {
public:
    // prevent constructor by default
    BlockStateGroup& operator=(BlockStateGroup const&);
    BlockStateGroup(BlockStateGroup const&);

public:
    // NOLINTBEGIN
    MCAPI BlockStateGroup();

    MCAPI class BlockStateMeta const* getBlockStateFromHash(uint64 const& h) const;

    MCAPI class BlockStateMeta const* getBlockStateFromName(std::string const& name) const;

    MCAPI void registerBlockStateDefinition(struct BlockStateDefinition const& def);

    MCAPI void registerExistingBlockState(class BlockState const& state);

    MCAPI static bool loadBlockStateFromJson(
        struct BlockStateDefinition& blockState,
        std::string const&           name,
        class Json::Value const&     root
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI static int const& MAX_ENUM_SIZE();

    // NOLINTEND
};
