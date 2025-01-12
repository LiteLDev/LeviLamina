#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ChunkViewSource;
// clang-format on

class CommandArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk9867c4;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandArea& operator=(CommandArea const&);
    CommandArea(CommandArea const&);
    CommandArea();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CommandArea(::std::unique_ptr<::ChunkViewSource> commandSource);

    MCAPI ::BlockSource& getDimensionBlockSource();

    MCAPI ~CommandArea();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::std::unique_ptr<::ChunkViewSource> commandSource);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
