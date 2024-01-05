#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorFloatPropertyTest : public ::FilterTest {
public:
    // prevent constructor by default
    ActorFloatPropertyTest& operator=(ActorFloatPropertyTest const&);
    ActorFloatPropertyTest(ActorFloatPropertyTest const&);
    ActorFloatPropertyTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorFloatPropertyTest@@UEAA@XZ
    virtual ~ActorFloatPropertyTest();

    // vIndex: 1, symbol: ?setup@ActorFloatPropertyTest@@UEAA_NAEBUDefinition@FilterTest@@AEBUFilterInputs@@@Z
    virtual bool setup(struct FilterTest::Definition const& definition, struct FilterInputs const& inputs);

    // vIndex: 2, symbol: ?evaluate@ActorFloatPropertyTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol: ?getName@ActorFloatPropertyTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // vIndex: 5, symbol: ?_serializeDomain@ActorFloatPropertyTest@@MEBA?AVValue@Json@@XZ
    virtual class Json::Value _serializeDomain() const;

    // vIndex: 6, symbol: ?_serializeValue@ActorFloatPropertyTest@@MEBA?AVValue@Json@@XZ
    virtual class Json::Value _serializeValue() const;

    // NOLINTEND
};
