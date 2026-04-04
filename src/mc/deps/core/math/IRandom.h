#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IPositionalRandomFactory;
// clang-format on

class IRandom {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IRandom() = default;

    virtual int nextInt() = 0;

    virtual int nextInt(int n) = 0;

    virtual int64 nextLong() = 0;

    virtual bool nextBoolean() = 0;

    virtual float nextFloat() = 0;

    virtual double nextDouble() = 0;

    virtual double nextGaussianDouble() = 0;

    virtual void consumeCount(uint count) = 0;

    virtual ::std::unique_ptr<::IRandom> fork() = 0;

    virtual ::std::unique_ptr<::IPositionalRandomFactory> forkPositional();

    virtual bool chance(int likeliness, int possibilities);

    virtual bool chanceOneIn(int possibilities);

    virtual bool chanceAllButOneIn(int possibilities);

    virtual bool chanceFloatLessThan(float probability);

    virtual bool chanceFloatLessOrEqual(float probability);

    virtual bool chanceFloatGreaterThan(float improbability);

    virtual bool chanceFloatGreaterOrEqual(float improbability);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& ChanceFloatGreaterThan_MinExcessiveImprobability();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::std::unique_ptr<::IPositionalRandomFactory> $forkPositional();

    MCAPI bool $chance(int likeliness, int possibilities);

    MCAPI bool $chanceOneIn(int possibilities);

    MCAPI bool $chanceAllButOneIn(int possibilities);

    MCAPI bool $chanceFloatLessThan(float probability);

    MCAPI bool $chanceFloatLessOrEqual(float probability);

    MCAPI bool $chanceFloatGreaterThan(float improbability);

    MCAPI bool $chanceFloatGreaterOrEqual(float improbability);


    // NOLINTEND
};
