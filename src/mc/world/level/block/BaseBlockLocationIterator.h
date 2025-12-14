#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

class BaseBlockLocationIterator {
public:
    // BaseBlockLocationIterator inner types define
    using difference_type = int64;

    using iterator_category = ::std::input_iterator_tag;

    using pointer = ::BlockPos*;

    using reference = ::BlockPos;

    using value_type = ::BlockPos;

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
    virtual ~BaseBlockLocationIterator() = default;

    virtual bool operator==(::BaseBlockLocationIterator const&) const;

    virtual bool operator!=(::BaseBlockLocationIterator const&) const;

    virtual ::BaseBlockLocationIterator& operator++();

    virtual bool isValid() const = 0;

    virtual void _begin();

    virtual void _end();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_begin();

    MCFOLD void $_end();


    // NOLINTEND
};
