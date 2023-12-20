#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/TagRegistry.h"
#include "mc/common/wrapper/IDType.h"
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SimpleTagIDFilterTest : public ::FilterTest {
public:
    // prevent constructor by default
    SimpleTagIDFilterTest& operator=(SimpleTagIDFilterTest const&);
    SimpleTagIDFilterTest(SimpleTagIDFilterTest const&);
    SimpleTagIDFilterTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SimpleTagIDFilterTest@@UEAA@XZ
    virtual ~SimpleTagIDFilterTest() = default;

    // symbol:
    // ?updateCachedIDValue@SimpleTagIDFilterTest@@QEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$TagRegistry@U?$IDType@UBiomeTagIDType@@@@U?$IDType@UBiomeTagSetIDType@@@@@@@Z
    MCAPI void
    updateCachedIDValue(std::string const&, class TagRegistry<struct IDType<struct BiomeTagIDType>, struct IDType<struct BiomeTagSetIDType>> const&)
        const;

    // NOLINTEND
};
