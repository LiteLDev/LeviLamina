#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FilterTest {
public:
    // FilterTest inner types declare
    // clang-format off
    struct Definition;
    // clang-format on

    // FilterTest inner types define
    struct Definition {
    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);
        Definition();

    public:
        // NOLINTBEGIN
        // symbol: ??1Definition@FilterTest@@QEAA@XZ
        MCAPI ~Definition();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    FilterTest& operator=(FilterTest const&);
    FilterTest(FilterTest const&);
    FilterTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FilterTest@@UEAA@XZ
    virtual ~FilterTest();

    // vIndex: 1, symbol: ?setup@FilterTest@@UEAA_NAEBUDefinition@1@AEBUFilterInputs@@@Z
    virtual bool setup(struct FilterTest::Definition const& definition, struct FilterInputs const& inputs);

    // vIndex: 2, symbol: ?evaluate@ActorBoolPropertyTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const = 0;

    // vIndex: 3, symbol: ?finalizeParsedValue@FilterTest@@UEAAXAEAVIWorldRegistriesProvider@@@Z
    virtual void finalizeParsedValue(class IWorldRegistriesProvider& registries);

    // vIndex: 4, symbol: ?getName@ActorBoolPropertyTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const = 0;

    // vIndex: 5, symbol: ?_serializeDomain@FilterTest@@MEBA?AVValue@Json@@XZ
    virtual class Json::Value _serializeDomain() const;

    // vIndex: 6, symbol: ?_serializeValue@ActorBoolPropertyTest@@MEBA?AVValue@Json@@XZ
    virtual class Json::Value _serializeValue() const = 0;

    // symbol: ?serialize@FilterTest@@QEBA?AVValue@Json@@XZ
    MCAPI class Json::Value serialize() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_testValuesWithOperator@FilterTest@@IEBA_N_N0@Z
    MCAPI bool _testValuesWithOperator(bool a, bool b) const;

    // symbol: ?_testValuesWithOperator@FilterTest@@IEBA_NMM@Z
    MCAPI bool _testValuesWithOperator(float a, float b) const;

    // symbol: ?_testValuesWithOperator@FilterTest@@IEBA_NHH@Z
    MCAPI bool _testValuesWithOperator(int a, int b) const;

    // NOLINTEND
};
