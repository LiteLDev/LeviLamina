#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorHasEquipmentTest : public ::FilterTest {
public:
    // prevent constructor by default
    ActorHasEquipmentTest& operator=(ActorHasEquipmentTest const&);
    ActorHasEquipmentTest(ActorHasEquipmentTest const&);
    ActorHasEquipmentTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorHasEquipmentTest@@UEAA@XZ
    virtual ~ActorHasEquipmentTest();

    // vIndex: 1, symbol: ?setup@ActorHasEquipmentTest@@UEAA_NAEBUDefinition@FilterTest@@AEBUFilterInputs@@@Z
    virtual bool setup(struct FilterTest::Definition const&, struct FilterInputs const&);

    // vIndex: 2, symbol: ?evaluate@ActorHasEquipmentTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const&) const;

    // vIndex: 4, symbol: ?getName@ActorHasEquipmentTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // vIndex: 5, symbol: ?_serializeDomain@ActorHasEquipmentTest@@MEBA?AVValue@Json@@XZ
    virtual class Json::Value _serializeDomain() const;

    // vIndex: 6, symbol: ?_serializeValue@ActorHasEquipmentTest@@MEBA?AVValue@Json@@XZ
    virtual class Json::Value _serializeValue() const;

    // NOLINTEND
};
