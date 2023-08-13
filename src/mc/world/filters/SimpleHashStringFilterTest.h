#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SimpleHashStringFilterTest : public ::FilterTest {

public:
    // prevent constructor by default
    SimpleHashStringFilterTest& operator=(SimpleHashStringFilterTest const&) = delete;
    SimpleHashStringFilterTest(SimpleHashStringFilterTest const&)            = delete;
    SimpleHashStringFilterTest()                                             = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIMPLEHASHSTRINGFILTERTEST
    /**
     * @symbol ?_serializeValue\@SimpleHashStringFilterTest\@\@MEBA?AVValue\@Json\@\@XZ
     */
    MCVAPI class Json::Value _serializeValue() const;
    /**
     * @symbol ?setup\@SimpleHashStringFilterTest\@\@UEAA_NAEBUDefinition\@FilterTest\@\@AEBUFilterInputs\@\@\@Z
     */
    MCVAPI bool setup(struct FilterTest::Definition const&, struct FilterInputs const&);
#endif
    // NOLINTEND
};
