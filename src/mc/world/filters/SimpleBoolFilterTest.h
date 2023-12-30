#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SimpleBoolFilterTest : public ::FilterTest {
public:
    // prevent constructor by default
    SimpleBoolFilterTest& operator=(SimpleBoolFilterTest const&);
    SimpleBoolFilterTest(SimpleBoolFilterTest const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SimpleBoolFilterTest@@UEAA@XZ
    virtual ~SimpleBoolFilterTest() = default;

    // vIndex: 1, symbol: ?setup@SimpleBoolFilterTest@@UEAA_NAEBUDefinition@FilterTest@@AEBUFilterInputs@@@Z
    virtual bool setup(struct FilterTest::Definition const& definition, struct FilterInputs const& inputs);

    // vIndex: 6, symbol: ?_serializeValue@SimpleBoolFilterTest@@MEBA?AVValue@Json@@XZ
    virtual class Json::Value _serializeValue() const;

    // symbol: ??0SimpleBoolFilterTest@@QEAA@XZ
    MCAPI SimpleBoolFilterTest();

    // NOLINTEND
};
