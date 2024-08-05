#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BaseBlockLocationIterator {
public:
    // prevent constructor by default
    BaseBlockLocationIterator& operator=(BaseBlockLocationIterator const&);
    BaseBlockLocationIterator(BaseBlockLocationIterator const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BaseBlockLocationIterator() = default;

    // vIndex: 1
    virtual class BaseBlockLocationIterator& operator++();

    // vIndex: 2
    virtual bool isValid() const = 0;

    // vIndex: 3
    virtual void _begin();

    // vIndex: 4
    virtual void _end();

    MCAPI bool done() const;

    MCAPI bool operator!=(class BaseBlockLocationIterator const& rhs);

    MCAPI class BlockPos operator*() const;

    MCAPI void reset();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI BaseBlockLocationIterator();

    MCAPI BaseBlockLocationIterator(class BlockPos const& min, class BlockPos const& max, bool begin);

    // NOLINTEND
};
