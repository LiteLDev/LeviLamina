#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SimpleFloatFilterTest {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMPLEFLOATFILTERTEST
public:
    SimpleFloatFilterTest& operator=(SimpleFloatFilterTest const&) = delete;
    SimpleFloatFilterTest(SimpleFloatFilterTest const&)            = delete;
    SimpleFloatFilterTest()                                        = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIMPLEFLOATFILTERTEST
    /**
     * @symbol ?_serializeValue\@SimpleFloatFilterTest\@\@MEBA?AVValue\@Json\@\@XZ
     */
    MCVAPI class Json::Value _serializeValue() const;
    /**
     * @symbol ?setup\@SimpleFloatFilterTest\@\@UEAA_NAEBUDefinition\@FilterTest\@\@AEBUFilterInputs\@\@\@Z
     */
    MCVAPI bool setup(struct FilterTest::Definition const&, struct FilterInputs const&);
#endif
};
