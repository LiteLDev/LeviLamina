#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorBoolPropertyTest : public ::FilterTest {
public:
    // prevent constructor by default
    ActorBoolPropertyTest& operator=(ActorBoolPropertyTest const&);
    ActorBoolPropertyTest(ActorBoolPropertyTest const&);
    ActorBoolPropertyTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorBoolPropertyTest@@UEAA@XZ
    virtual ~ActorBoolPropertyTest();

    // vIndex: 1, symbol: ?setup@ActorBoolPropertyTest@@UEAA_NAEBUDefinition@FilterTest@@AEBUFilterInputs@@@Z
    virtual bool setup(struct FilterTest::Definition const& definition, struct FilterInputs const& inputs);

    // vIndex: 2, symbol: ?evaluate@ActorBoolPropertyTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol: ?getName@ActorBoolPropertyTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // vIndex: 5, symbol: ?_serializeDomain@ActorBoolPropertyTest@@MEBA?AVValue@Json@@XZ
    virtual class Json::Value _serializeDomain() const;

    // vIndex: 6, symbol: ?_serializeValue@ActorBoolPropertyTest@@MEBA?AVValue@Json@@XZ
    virtual class Json::Value _serializeValue() const;

    // NOLINTEND
};
