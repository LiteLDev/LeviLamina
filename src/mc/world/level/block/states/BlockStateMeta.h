#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"

class BlockStateMeta {
public:
    // prevent constructor by default
    BlockStateMeta& operator=(BlockStateMeta const&);
    BlockStateMeta(BlockStateMeta const&);
    BlockStateMeta();

public:
    // NOLINTBEGIN
    MCAPI BlockStateMeta(class BlockState const& blockState, struct BlockStateDefinition const& def);

    MCAPI bool const getBool(int index) const;

    MCAPI uint64 getID() const;

    MCAPI int const getInt(int index) const;

    MCAPI std::string const& getName() const;

    MCAPI class BlockState const& getState() const;

    MCAPI std::string const& getString(int) const;

    MCAPI ::Tag::Type const getType() const;

    MCAPI int indexOf(uint64 const& h) const;

    // NOLINTEND
};
