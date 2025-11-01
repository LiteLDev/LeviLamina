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

class ActorEnumPropertyTest : public ::FilterTest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk81d065;
    ::ll::UntypedStorage<8, 48> mUnk12ddfb;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorEnumPropertyTest& operator=(ActorEnumPropertyTest const&);
    ActorEnumPropertyTest(ActorEnumPropertyTest const&);
    ActorEnumPropertyTest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool setup(::FilterTest::Definition const& definition, ::FilterInputs const& inputs) /*override*/;

    // vIndex: 2
    virtual bool evaluate(::FilterContext const& context) const /*override*/;

    // vIndex: 4
    virtual ::std::string_view getName() const /*override*/;

    // vIndex: 6
    virtual ::std::optional<::std::variant<bool, int, float, ::std::string>> getValue() const /*override*/;

    // vIndex: 5
    virtual ::std::optional<::std::variant<bool, int, float, ::std::string>> getDomain() const /*override*/;

    // vIndex: 8
    virtual ::Json::Value _serializeValue() const /*override*/;

    // vIndex: 7
    virtual ::Json::Value _serializeDomain() const /*override*/;

    // vIndex: 0
    virtual ~ActorEnumPropertyTest() /*override*/;
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
