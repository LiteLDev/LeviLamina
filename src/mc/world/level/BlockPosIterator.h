#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

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
        ::ll::UntypedStorage<4, 12> mUnke77ff1;
        ::ll::UntypedStorage<4, 12> mUnka91ee5;
        ::ll::UntypedStorage<4, 4>  mUnk17b8ba;
        ::ll::UntypedStorage<4, 12> mUnk7b4ad6;
        ::ll::UntypedStorage<4, 4>  mUnk7e4212;
        ::ll::UntypedStorage<4, 4>  mUnkdf6d11;
        ::ll::UntypedStorage<4, 4>  mUnkc161ae;
        ::ll::UntypedStorage<1, 1>  mUnk89cbf6;
        ::ll::UntypedStorage<1, 1>  mUnk4c5f40;
        // NOLINTEND

    public:
        // prevent constructor by default
        FromCenter& operator=(FromCenter const&);
        FromCenter(FromCenter const&);
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
        ::ll::UntypedStorage<4, 56> mUnk2c5c9b;
        // NOLINTEND

    public:
        // prevent constructor by default
        ManhattanDistance& operator=(ManhattanDistance const&);
        ManhattanDistance(ManhattanDistance const&);
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
    ::ll::UntypedStorage<4, 12> mUnk23564d;
    ::ll::UntypedStorage<4, 12> mUnk402960;
    ::ll::UntypedStorage<4, 12> mUnkac9ddc;
    ::ll::UntypedStorage<1, 1>  mUnk962628;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPosIterator& operator=(BlockPosIterator const&);
    BlockPosIterator(BlockPosIterator const&);
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
