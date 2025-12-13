#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
struct FilterInputs;
namespace Json { class Value; }
// clang-format on

class SimpleIntFilterTest : public ::FilterTest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8e0558;
    // NOLINTEND

public:
    // prevent constructor by default
    SimpleIntFilterTest& operator=(SimpleIntFilterTest const&);
    SimpleIntFilterTest(SimpleIntFilterTest const&);
    SimpleIntFilterTest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool setup(::FilterTest::Definition const& definition, ::FilterInputs const& inputs) /*override*/;

    virtual ::std::optional<::std::variant<bool, int, float, ::std::string>> getValue() const /*override*/;

    virtual ::Json::Value _serializeValue() const /*override*/;

    virtual ~SimpleIntFilterTest() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $setup(::FilterTest::Definition const& definition, ::FilterInputs const& inputs);

    MCNAPI ::std::optional<::std::variant<bool, int, float, ::std::string>> $getValue() const;

    MCNAPI ::Json::Value $_serializeValue() const;


    // NOLINTEND
};
