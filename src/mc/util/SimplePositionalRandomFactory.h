#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IPositionalRandomFactory.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IRandom;
class SimpleRandom;
// clang-format on

class SimplePositionalRandomFactory : public ::IPositionalRandomFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk264730;
    // NOLINTEND

public:
    // prevent constructor by default
    SimplePositionalRandomFactory& operator=(SimplePositionalRandomFactory const&);
    SimplePositionalRandomFactory(SimplePositionalRandomFactory const&);
    SimplePositionalRandomFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::unique_ptr<::IRandom> forBlockPos(::BlockPos const& blockPos) const /*override*/;

    // vIndex: 2
    virtual ::std::unique_ptr<::IRandom> forString(::std::string const& string) const /*override*/;

    // vIndex: 0
    virtual ~SimplePositionalRandomFactory() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SimplePositionalRandomFactory(int64 seed);

    MCAPI ::SimpleRandom forBlockPosImpl(::BlockPos const& blockPos) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int64 seed);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::IRandom> $forBlockPos(::BlockPos const& blockPos) const;

    MCAPI ::std::unique_ptr<::IRandom> $forString(::std::string const& string) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
