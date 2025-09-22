#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class IPositionalRandomFactory;
// clang-format on

class IRandom : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IRandom() /*override*/;

    // vIndex: 2
    virtual int nextInt() = 0;

    // vIndex: 1
    virtual int nextInt(int) = 0;

    // vIndex: 3
    virtual int64 nextLong() = 0;

    // vIndex: 4
    virtual bool nextBoolean() = 0;

    // vIndex: 5
    virtual float nextFloat() = 0;

    // vIndex: 6
    virtual double nextDouble() = 0;

    // vIndex: 7
    virtual double nextGaussianDouble() = 0;

    // vIndex: 8
    virtual void consumeCount(uint) = 0;

    // vIndex: 9
    virtual ::std::unique_ptr<::IRandom> fork() = 0;

    // vIndex: 10
    virtual ::std::unique_ptr<::IPositionalRandomFactory> forkPositional();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::std::unique_ptr<::IPositionalRandomFactory> $forkPositional();
    // NOLINTEND
};
