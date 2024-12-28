#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDType.h"
#include "mc/util/TagRegistry.h"
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
struct BiomeTagIDType;
struct BiomeTagSetIDType;
struct FilterInputs;
namespace Json { class Value; }
// clang-format on

class SimpleTagIDFilterTest : public ::FilterTest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb87619;
    ::ll::UntypedStorage<8, 48> mUnk8ca676;
    // NOLINTEND

public:
    // prevent constructor by default
    SimpleTagIDFilterTest& operator=(SimpleTagIDFilterTest const&);
    SimpleTagIDFilterTest(SimpleTagIDFilterTest const&);
    SimpleTagIDFilterTest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool setup(::FilterTest::Definition const& definition, ::FilterInputs const& inputs) /*override*/;

    // vIndex: 6
    virtual ::Json::Value _serializeValue() const /*override*/;

    // vIndex: 0
    virtual ~SimpleTagIDFilterTest() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void updateCachedIDValue(
        ::std::string const&                                                            tag,
        ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>> const& tagRegistry
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $setup(::FilterTest::Definition const& definition, ::FilterInputs const& inputs);

    MCAPI ::Json::Value $_serializeValue() const;
    // NOLINTEND
};
