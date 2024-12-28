#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockStateCommandParam;
class CommandBlockNameResult;
class CommandOutput;
// clang-format on

class CommandBlockName {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mBlockNameHash;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandBlockName& operator=(CommandBlockName const&);
    CommandBlockName(CommandBlockName const&);
    CommandBlockName();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CommandBlockName(uint64 blockNameHash);

    MCAPI ::std::string getDescriptionId() const;

    MCAPI explicit operator uint64() const;

    MCAPI ::CommandBlockNameResult resolveBlock(int data) const;

    MCAPI ::CommandBlockNameResult
    resolveBlock(::std::vector<::BlockStateCommandParam> const& states, ::CommandOutput& output) const;

    MCAPI ::CommandBlockNameResult
    resolveBlock(::std::vector<::BlockStateCommandParam> const& states, int data, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint64 blockNameHash);
    // NOLINTEND
};
