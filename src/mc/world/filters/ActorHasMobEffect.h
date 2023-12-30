#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorHasMobEffect : public ::FilterTest {
public:
    // prevent constructor by default
    ActorHasMobEffect& operator=(ActorHasMobEffect const&);
    ActorHasMobEffect(ActorHasMobEffect const&);
    ActorHasMobEffect();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorHasMobEffect@@UEAA@XZ
    virtual ~ActorHasMobEffect();

    // vIndex: 1, symbol: ?setup@ActorHasMobEffect@@UEAA_NAEBUDefinition@FilterTest@@AEBUFilterInputs@@@Z
    virtual bool setup(struct FilterTest::Definition const& definition, struct FilterInputs const& inputs);

    // vIndex: 2, symbol: ?evaluate@ActorHasMobEffect@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol: ?getName@ActorHasMobEffect@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // vIndex: 6, symbol: ?_serializeValue@ActorHasMobEffect@@MEBA?AVValue@Json@@XZ
    virtual class Json::Value _serializeValue() const;

    // NOLINTEND
};
