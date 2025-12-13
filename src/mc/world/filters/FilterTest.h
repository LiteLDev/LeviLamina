#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IWorldRegistriesProvider;
struct FilterContext;
struct FilterInputs;
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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkba715e;
        ::ll::UntypedStorage<8, 32> mUnk1e4808;
        ::ll::UntypedStorage<8, 8>  mUnkedef7d;
        ::ll::UntypedStorage<8, 8>  mUnke70633;
        ::ll::UntypedStorage<8, 8>  mUnk411256;
        ::ll::UntypedStorage<8, 8>  mUnkf594ea;
        ::ll::UntypedStorage<8, 64> mUnka344a1;
        // NOLINTEND

    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);
        Definition();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Definition();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk20eb73;
    ::ll::UntypedStorage<2, 2> mUnk995088;
    // NOLINTEND

public:
    // prevent constructor by default
    FilterTest& operator=(FilterTest const&);
    FilterTest(FilterTest const&);
    FilterTest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FilterTest() = default;

    // vIndex: 1
    virtual bool setup(::FilterTest::Definition const& definition, ::FilterInputs const& inputs);

    // vIndex: 2
    virtual bool evaluate(::FilterContext const&) const = 0;

    // vIndex: 3
    virtual void finalizeParsedValue(::IWorldRegistriesProvider& registries);

    // vIndex: 4
    virtual ::std::string_view getName() const = 0;

    // vIndex: 5
    virtual ::std::optional<::std::variant<bool, int, float, ::std::string>> getDomain() const;

    // vIndex: 6
    virtual ::std::optional<::std::variant<bool, int, float, ::std::string>> getValue() const = 0;

    // vIndex: 7
    virtual ::Json::Value _serializeDomain() const;

    // vIndex: 8
    virtual ::Json::Value _serializeValue() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _testValuesWithOperator(float a, float b) const;

    MCNAPI bool _testValuesWithOperator(bool a, bool b) const;

    MCNAPI ::Json::Value serialize() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $setup(::FilterTest::Definition const& definition, ::FilterInputs const& inputs);

    MCNAPI void $finalizeParsedValue(::IWorldRegistriesProvider& registries);

    MCNAPI ::std::optional<::std::variant<bool, int, float, ::std::string>> $getDomain() const;

    MCNAPI ::Json::Value $_serializeDomain() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
