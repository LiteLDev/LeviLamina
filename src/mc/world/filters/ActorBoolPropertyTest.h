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

class ActorBoolPropertyTest : public ::FilterTest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkd44aea;
    ::ll::UntypedStorage<8, 48> mUnkd0515d;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorBoolPropertyTest& operator=(ActorBoolPropertyTest const&);
    ActorBoolPropertyTest(ActorBoolPropertyTest const&);
    ActorBoolPropertyTest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool setup(::FilterTest::Definition const&, ::FilterInputs const&) /*override*/;

    virtual bool evaluate(::FilterContext const&) const /*override*/;

    virtual ::std::string_view getName() const /*override*/;

    virtual ::std::optional<::std::variant<bool, int, float, ::std::string>> getValue() const /*override*/;

    virtual ::std::optional<::std::variant<bool, int, float, ::std::string>> getDomain() const /*override*/;

    virtual ::Json::Value _serializeValue() const /*override*/;

    virtual ::Json::Value _serializeDomain() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
