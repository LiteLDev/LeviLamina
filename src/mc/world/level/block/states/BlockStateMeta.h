#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"

// auto generated forward declare list
// clang-format off
class BlockState;
// clang-format on

class BlockStateMeta {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk950d25;
    ::ll::UntypedStorage<8, 8>   mUnk7ff3df;
    ::ll::UntypedStorage<8, 128> mUnk564759;
    ::ll::UntypedStorage<8, 8>   mUnk83d225;
    ::ll::UntypedStorage<8, 32>  mUnke3cd6e;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockStateMeta& operator=(BlockStateMeta const&);
    BlockStateMeta(BlockStateMeta const&);
    BlockStateMeta();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool const getBool(int index) const;

    MCAPI uint64 getID() const;

    MCAPI int const getInt(int index) const;

    MCAPI ::std::string const& getName() const;

    MCAPI ::BlockState const& getState() const;

    MCAPI ::std::string const& getString(int index) const;

    MCAPI ::Tag::Type const getType() const;

    MCAPI int indexOf(uint64 const& h) const;
    // NOLINTEND
};
