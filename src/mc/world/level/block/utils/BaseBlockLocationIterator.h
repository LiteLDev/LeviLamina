#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BaseBlockLocationIterator {
public:
    // prevent constructor by default
    BaseBlockLocationIterator(BaseBlockLocationIterator const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BaseBlockLocationIterator@@UEAA@XZ
    virtual ~BaseBlockLocationIterator() = default;

    // vIndex: 1, symbol: ??EBaseBlockLocationIterator@@UEAA?AV0@H@Z
    virtual class BaseBlockLocationIterator operator++(int);

    // vIndex: 2, symbol: ??EBaseBlockLocationIterator@@UEAAAEAV0@XZ
    virtual class BaseBlockLocationIterator& operator++();

    // vIndex: 3, symbol: ?_begin@BaseBlockLocationIterator@@MEAAXXZ
    virtual void _begin();

    // vIndex: 4, symbol: ?_end@BaseBlockLocationIterator@@MEAAXXZ
    virtual void _end();

    // symbol: ?done@BaseBlockLocationIterator@@QEBA_NXZ
    MCAPI bool done() const;

    // symbol: ??DBaseBlockLocationIterator@@QEBA?AVBlockPos@@XZ
    MCAPI class BlockPos operator*() const;

    // symbol: ?reset@BaseBlockLocationIterator@@QEAAXXZ
    MCAPI void reset();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0BaseBlockLocationIterator@@IEAA@XZ
    MCAPI BaseBlockLocationIterator();

    // symbol: ??0BaseBlockLocationIterator@@IEAA@AEBVBlockPos@@0_N@Z
    MCAPI BaseBlockLocationIterator(class BlockPos const& min, class BlockPos const& max, bool begin);

    // symbol: ??4BaseBlockLocationIterator@@IEAAAEAV0@AEBV0@@Z
    MCAPI class BaseBlockLocationIterator& operator=(class BaseBlockLocationIterator const& other);

    // NOLINTEND
};
