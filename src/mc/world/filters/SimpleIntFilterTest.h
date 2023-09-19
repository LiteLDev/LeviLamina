#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SimpleIntFilterTest : public ::FilterTest {
public:
    // prevent constructor by default
    SimpleIntFilterTest& operator=(SimpleIntFilterTest const&);
    SimpleIntFilterTest(SimpleIntFilterTest const&);
    SimpleIntFilterTest();

public:
    // NOLINTBEGIN
    // symbol: ?_serializeValue@SimpleIntFilterTest@@MEBA?AVValue@Json@@XZ
    MCVAPI class Json::Value _serializeValue() const;

    // symbol: ?setup@SimpleIntFilterTest@@UEAA_NAEBUDefinition@FilterTest@@AEBUFilterInputs@@@Z
    MCVAPI bool setup(struct FilterTest::Definition const&, struct FilterInputs const&);

    // NOLINTEND
};
