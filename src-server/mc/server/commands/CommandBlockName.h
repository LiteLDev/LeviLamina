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
    LLNDAPI std::string const& getBlockName() const;
    LLNDAPI std::string getDescriptionId() const;

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::CommandBlockNameResult resolveBlock(int data) const;

    MCAPI ::CommandBlockNameResult
    resolveBlock(::std::vector<::BlockStateCommandParam> const& states, ::CommandOutput& output) const;
    // NOLINTEND
};
