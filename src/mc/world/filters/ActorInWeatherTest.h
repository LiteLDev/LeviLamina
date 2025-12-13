#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
struct FilterContext;
struct FilterInputs;
namespace Json { class Value; }
// clang-format on

class ActorInWeatherTest : public ::FilterTest {
public:
    // ActorInWeatherTest inner types define
    enum class WeatherType : int {
        Undefined    = -1,
        Clear        = 0,
        Rain         = 1,
        Snow         = 2,
        Thunderstorm = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5d8074;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorInWeatherTest& operator=(ActorInWeatherTest const&);
    ActorInWeatherTest(ActorInWeatherTest const&);
    ActorInWeatherTest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool setup(::FilterTest::Definition const& definition, ::FilterInputs const& inputs) /*override*/;

    virtual bool evaluate(::FilterContext const& context) const /*override*/;

    virtual ::std::string_view getName() const /*override*/;

    virtual ::std::optional<::std::variant<bool, int, float, ::std::string>> getValue() const /*override*/;

    virtual ::Json::Value _serializeValue() const /*override*/;

    virtual ~ActorInWeatherTest() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $setup(::FilterTest::Definition const& definition, ::FilterInputs const& inputs);

    MCNAPI bool $evaluate(::FilterContext const& context) const;

    MCNAPI ::std::string_view $getName() const;

    MCNAPI ::std::optional<::std::variant<bool, int, float, ::std::string>> $getValue() const;

    MCNAPI ::Json::Value $_serializeValue() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
