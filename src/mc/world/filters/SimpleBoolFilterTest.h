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
    SimpleBoolFilterTest& operator=(SimpleBoolFilterTest const&) = delete;
    SimpleBoolFilterTest(SimpleBoolFilterTest const&)            = delete;
    SimpleBoolFilterTest()                                       = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIMPLEBOOLFILTERTEST
    /**
     * @symbol ?_serializeValue\@SimpleBoolFilterTest\@\@MEBA?AVValue\@Json\@\@XZ
     */
    MCVAPI class Json::Value _serializeValue() const;
    /**
     * @symbol ?setup\@SimpleBoolFilterTest\@\@UEAA_NAEBUDefinition\@FilterTest\@\@AEBUFilterInputs\@\@\@Z
     */
    MCVAPI bool setup(struct FilterTest::Definition const&, struct FilterInputs const&);
#endif
    // NOLINTEND
};
