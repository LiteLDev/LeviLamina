#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IPositionalRandomFactory.h"

class SimplePositionalRandomFactory : public ::IPositionalRandomFactory {
public:
    // prevent constructor by default
    SimplePositionalRandomFactory& operator=(SimplePositionalRandomFactory const&);
    SimplePositionalRandomFactory(SimplePositionalRandomFactory const&);
    SimplePositionalRandomFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SimplePositionalRandomFactory() = default;

    // vIndex: 1
    virtual std::unique_ptr<class IRandom> forBlockPos(class BlockPos const& blockPos) const;

    // vIndex: 2
    virtual std::unique_ptr<class IRandom> forString(std::string const& string) const;

    MCAPI explicit SimplePositionalRandomFactory(int64 seed);

    MCAPI class SimpleRandom forBlockPosImpl(class BlockPos const& blockPos) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(int64 seed);

    MCAPI std::unique_ptr<class IRandom> forBlockPos$(class BlockPos const& blockPos) const;

    MCAPI std::unique_ptr<class IRandom> forString$(std::string const& string) const;

    // NOLINTEND
};
