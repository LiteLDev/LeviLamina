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
    // vIndex: 0
    virtual ~FilterTest();

    // vIndex: 1
    virtual bool setup(struct FilterTest::Definition const& definition, struct FilterInputs const& inputs);

    // vIndex: 2
    virtual bool evaluate(struct FilterContext const& context) const = 0;

    // vIndex: 3
    virtual void finalizeParsedValue(class IWorldRegistriesProvider& registries);

    // vIndex: 4
    virtual std::string_view getName() const = 0;

    // vIndex: 5
    virtual class Json::Value _serializeDomain() const;

    // vIndex: 6
    virtual class Json::Value _serializeValue() const = 0;

    MCAPI class Json::Value serialize() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _testValuesWithOperator(bool a, bool b) const;

    MCAPI bool _testValuesWithOperator(float a, float b) const;

    MCAPI bool _testValuesWithOperator(int a, int b) const;

    // NOLINTEND
};
