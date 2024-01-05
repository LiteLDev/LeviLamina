#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorEnumPropertyTest : public ::FilterTest {
public:
    // prevent constructor by default
    ActorEnumPropertyTest& operator=(ActorEnumPropertyTest const&);
    ActorEnumPropertyTest(ActorEnumPropertyTest const&);
    ActorEnumPropertyTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorEnumPropertyTest@@UEAA@XZ
    virtual ~ActorEnumPropertyTest();

    // vIndex: 1, symbol: ?setup@ActorEnumPropertyTest@@UEAA_NAEBUDefinition@FilterTest@@AEBUFilterInputs@@@Z
    virtual bool setup(struct FilterTest::Definition const& definition, struct FilterInputs const& inputs);

    // vIndex: 2, symbol: ?evaluate@ActorEnumPropertyTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol: ?getName@ActorEnumPropertyTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // vIndex: 5, symbol: ?_serializeDomain@ActorEnumPropertyTest@@MEBA?AVValue@Json@@XZ
    virtual class Json::Value _serializeDomain() const;

    // vIndex: 6, symbol: ?_serializeValue@ActorEnumPropertyTest@@MEBA?AVValue@Json@@XZ
    virtual class Json::Value _serializeValue() const;

    // NOLINTEND
};
