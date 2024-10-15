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
    MCAPI CommandBlockNameResult(class HashedString const& originalName, class Block const* block, bool isComplexAlias);

    MCAPI class Block const* getBlock() const;

    MCAPI ::CommandBlockNameResult::Result getResult() const;

    MCAPI bool isComplexAlias() const;

    MCAPI bool isSameBlock(class Block const& rhs, bool onlyCompareBlockLegacy) const;

    MCAPI ~CommandBlockNameResult();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class HashedString const& originalName, class Block const* block, bool isComplexAlias);

    MCAPI void dtor$();

    // NOLINTEND
};
