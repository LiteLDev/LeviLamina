#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorHasAnySlotEmptyTest : public ::FilterTest {
public:
    // prevent constructor by default
    ActorHasAnySlotEmptyTest& operator=(ActorHasAnySlotEmptyTest const&);
    ActorHasAnySlotEmptyTest(ActorHasAnySlotEmptyTest const&);
    ActorHasAnySlotEmptyTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorHasAnySlotEmptyTest@@UEAA@XZ
    virtual ~ActorHasAnySlotEmptyTest();

    // vIndex: 1, symbol: ?setup@ActorHasAnySlotEmptyTest@@UEAA_NAEBUDefinition@FilterTest@@AEBUFilterInputs@@@Z
    virtual bool setup(struct FilterTest::Definition const& definition, struct FilterInputs const& inputs);

    // vIndex: 2, symbol: ?evaluate@ActorHasAnySlotEmptyTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol: ?getName@ActorHasAnySlotEmptyTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // vIndex: 6, symbol: ?_serializeValue@ActorHasAnySlotEmptyTest@@MEBA?AVValue@Json@@XZ
    virtual class Json::Value _serializeValue() const;

    // NOLINTEND
};
