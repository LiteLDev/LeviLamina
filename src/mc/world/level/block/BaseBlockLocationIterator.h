#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

class BaseBlockLocationIterator {
public:
    // BaseBlockLocationIterator inner types define
    using value_type = ::BlockPos;

    using difference_type = int64;

    using pointer = ::BlockPos*;

    using reference = ::BlockPos;

    using iterator_category = ::std::input_iterator_tag;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mMin;
    ::ll::TypedStorage<4, 12, ::BlockPos> mMax;
    ::ll::TypedStorage<4, 12, ::BlockPos> mCurrent;
    ::ll::TypedStorage<1, 1, bool>        mDone;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BaseBlockLocationIterator() = default;

    // vIndex: 1
    virtual bool operator==(::BaseBlockLocationIterator const&) const;

    // vIndex: 2
    virtual bool operator!=(::BaseBlockLocationIterator const&) const;

    // vIndex: 3
    virtual ::BaseBlockLocationIterator& operator++();

    // vIndex: 4
    virtual bool isValid() const = 0;

    // vIndex: 5
    virtual void _begin();

    // vIndex: 6
    virtual void _end();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_begin();

    MCFOLD void $_end();
    // NOLINTEND
};
