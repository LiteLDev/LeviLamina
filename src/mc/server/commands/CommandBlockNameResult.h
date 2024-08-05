#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandBlockNameResult {
public:
    // CommandBlockNameResult inner types define
    enum class Result {};

public:
    // prevent constructor by default
    CommandBlockNameResult& operator=(CommandBlockNameResult const&);
    CommandBlockNameResult(CommandBlockNameResult const&);
    CommandBlockNameResult();

public:
    // NOLINTBEGIN
    MCAPI CommandBlockNameResult(class HashedString const& originalName, class Block const* block, bool);

    MCAPI class Block const* getBlock() const;

    MCAPI ::CommandBlockNameResult::Result getResult() const;

    MCAPI bool isComplexAlias() const;

    MCAPI bool isSameBlock(class Block const& rhs, bool) const;

    MCAPI ~CommandBlockNameResult();

    // NOLINTEND
};
