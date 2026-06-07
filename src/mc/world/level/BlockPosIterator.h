#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

class BlockPosIterator {
public:
    // BlockPosIterator inner types declare
    // clang-format off
    class FromCenter;
    class ManhattanDistance;
    // clang-format on

    // BlockPosIterator inner types define
    class FromCenter {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos> mOrigin;
        ::ll::TypedStorage<4, 12, ::BlockPos> mReach;
        ::ll::TypedStorage<4, 4, int>         mMaxDepth;
        ::ll::TypedStorage<4, 12, ::BlockPos> mCurrentPos;
        ::ll::TypedStorage<4, 4, int>         mCurrentDepth;
        ::ll::TypedStorage<4, 4, int>         mMaxX;
        ::ll::TypedStorage<4, 4, int>         mMaxY;
        ::ll::TypedStorage<1, 1, bool>        mZMirror;
        ::ll::TypedStorage<1, 1, bool>        mDone;
        // NOLINTEND

    public:
        // prevent constructor by default
        FromCenter();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI FromCenter(::BlockPos const& pos, ::BlockPos const& reach);

        MCAPI ::BlockPosIterator::FromCenter begin() const;

        MCAPI ::BlockPosIterator::FromCenter end() const;

        MCFOLD bool operator!=(::BlockPosIterator::FromCenter const& other) const;

        MCFOLD ::BlockPos const& operator*();

        MCAPI ::BlockPosIterator::FromCenter& operator++();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::BlockPos const& pos, ::BlockPos const& reach);
        // NOLINTEND
    };

    class ManhattanDistance {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 56, ::BlockPosIterator::FromCenter> mFromCenter;
        // NOLINTEND

    public:
        // prevent constructor by default
        ManhattanDistance();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ManhattanDistance(::BlockPos const& pos, int distance);

        MCAPI ::BlockPosIterator::ManhattanDistance begin() const;

        MCAPI ::BlockPosIterator::ManhattanDistance end() const;

        MCFOLD bool operator!=(::BlockPosIterator::ManhattanDistance const& other) const;

        MCFOLD ::BlockPos const& operator*();

        MCAPI ::BlockPosIterator::ManhattanDistance& operator++();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::BlockPos const& pos, int distance);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos const> mMinCorner;
    ::ll::TypedStorage<4, 12, ::BlockPos const> mMaxCorner;
    ::ll::TypedStorage<4, 12, ::BlockPos>       mCurrentPos;
    ::ll::TypedStorage<1, 1, bool>              mDone;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPosIterator();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockPosIterator(::BlockPos const& a, ::BlockPos const& b);

    MCAPI ::BlockPosIterator begin() const;

    MCAPI ::BlockPosIterator end() const;

    MCAPI bool operator!=(::BlockPosIterator const& other) const;

    MCFOLD ::BlockPos const& operator*();

    MCAPI ::BlockPosIterator& operator++();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& a, ::BlockPos const& b);
    // NOLINTEND
};
