#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorHasPropertyTest : public ::FilterTest {
public:
    // prevent constructor by default
    ActorHasPropertyTest& operator=(ActorHasPropertyTest const&);
    ActorHasPropertyTest(ActorHasPropertyTest const&);
    ActorHasPropertyTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorHasPropertyTest@@UEAA@XZ
    virtual ~ActorHasPropertyTest();

    // vIndex: 1, symbol: ?setup@ActorHasPropertyTest@@UEAA_NAEBUDefinition@FilterTest@@AEBUFilterInputs@@@Z
    virtual bool setup(struct FilterTest::Definition const& definition, struct FilterInputs const& inputs);

    // vIndex: 2, symbol: ?evaluate@ActorHasPropertyTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol: ?getName@ActorHasPropertyTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // vIndex: 6, symbol: ?_serializeValue@ActorHasPropertyTest@@MEBA?AVValue@Json@@XZ
    virtual class Json::Value _serializeValue() const;

    // NOLINTEND
};
