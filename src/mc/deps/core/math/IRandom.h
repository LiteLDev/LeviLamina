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
    virtual ~IRandom() /*override*/;

    virtual int nextInt() = 0;

    virtual int nextInt(int) = 0;

    virtual int64 nextLong() = 0;

    virtual bool nextBoolean() = 0;

    virtual float nextFloat() = 0;

    virtual double nextDouble() = 0;

    virtual double nextGaussianDouble() = 0;

    virtual void consumeCount(uint) = 0;

    virtual ::std::unique_ptr<::IRandom> fork() = 0;

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
