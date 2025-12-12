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

class ActorFloatPropertyTest : public ::FilterTest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk7e2e92;
    ::ll::UntypedStorage<8, 48> mUnkb1187d;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorFloatPropertyTest& operator=(ActorFloatPropertyTest const&);
    ActorFloatPropertyTest(ActorFloatPropertyTest const&);
    ActorFloatPropertyTest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool setup(::FilterTest::Definition const& definition, ::FilterInputs const& inputs) /*override*/;

    virtual bool evaluate(::FilterContext const& context) const /*override*/;

    virtual ::std::string_view getName() const /*override*/;

    virtual ::std::optional<::std::variant<bool, int, float, ::std::string>> getValue() const /*override*/;

    virtual ::std::optional<::std::variant<bool, int, float, ::std::string>> getDomain() const /*override*/;

    virtual ::Json::Value _serializeValue() const /*override*/;

    virtual ::Json::Value _serializeDomain() const /*override*/;

    virtual ~ActorFloatPropertyTest() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $setup(::FilterTest::Definition const& definition, ::FilterInputs const& inputs);

    MCNAPI bool $evaluate(::FilterContext const& context) const;

    MCNAPI ::std::string_view $getName() const;

    MCNAPI ::std::optional<::std::variant<bool, int, float, ::std::string>> $getValue() const;

    MCNAPI ::std::optional<::std::variant<bool, int, float, ::std::string>> $getDomain() const;

    MCNAPI ::Json::Value $_serializeValue() const;

    MCNAPI ::Json::Value $_serializeDomain() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
