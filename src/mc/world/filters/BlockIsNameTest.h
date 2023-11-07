#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleHashStringFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class BlockIsNameTest : public ::SimpleHashStringFilterTest {
public:
    // prevent constructor by default
    BlockIsNameTest& operator=(BlockIsNameTest const&);
    BlockIsNameTest(BlockIsNameTest const&);
    BlockIsNameTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~BlockIsNameTest() = default;

    // vIndex: 2, symbol: ?evaluate@BlockIsNameTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const&) const;

    // vIndex: 4, symbol: ?getName@BlockIsNameTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
