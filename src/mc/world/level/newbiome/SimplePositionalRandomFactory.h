#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/math/IPositionalRandomFactory.h"

class SimplePositionalRandomFactory : public ::IPositionalRandomFactory {
public:
    // prevent constructor by default
    SimplePositionalRandomFactory& operator=(SimplePositionalRandomFactory const&);
    SimplePositionalRandomFactory(SimplePositionalRandomFactory const&);
    SimplePositionalRandomFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SimplePositionalRandomFactory@@UEAA@XZ
    virtual ~SimplePositionalRandomFactory() = default;

    // vIndex: 1, symbol:
    // ?forBlockPos@SimplePositionalRandomFactory@@UEBA?AV?$unique_ptr@VIRandom@@U?$default_delete@VIRandom@@@std@@@std@@AEBVBlockPos@@@Z
    virtual std::unique_ptr<class IRandom> forBlockPos(class BlockPos const& blockPos) const;

    // vIndex: 2, symbol:
    // ?forString@SimplePositionalRandomFactory@@UEBA?AV?$unique_ptr@VIRandom@@U?$default_delete@VIRandom@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    virtual std::unique_ptr<class IRandom> forString(std::string const& string) const;

    // symbol: ??0SimplePositionalRandomFactory@@QEAA@_J@Z
    MCAPI explicit SimplePositionalRandomFactory(int64 seed);

    // symbol: ?forBlockPosImpl@SimplePositionalRandomFactory@@QEBA?AVSimpleRandom@@AEBVBlockPos@@@Z
    MCAPI class SimpleRandom forBlockPosImpl(class BlockPos const& blockPos) const;

    // NOLINTEND
};
