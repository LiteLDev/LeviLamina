#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorInWeatherTest : public ::FilterTest {
public:
    // prevent constructor by default
    ActorInWeatherTest& operator=(ActorInWeatherTest const&);
    ActorInWeatherTest(ActorInWeatherTest const&);
    ActorInWeatherTest();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorInWeatherTest() = default;

    // vIndex: 1
    virtual bool setup(struct FilterTest::Definition const& definition, struct FilterInputs const& inputs);

    // vIndex: 2
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4
    virtual std::string_view getName() const;

    // vIndex: 6
    virtual class Json::Value _serializeValue() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI class Json::Value _serializeValue$() const;

    MCAPI bool evaluate$(struct FilterContext const& context) const;

    MCAPI std::string_view getName$() const;

    MCAPI bool setup$(struct FilterTest::Definition const& definition, struct FilterInputs const& inputs);

    // NOLINTEND
};
