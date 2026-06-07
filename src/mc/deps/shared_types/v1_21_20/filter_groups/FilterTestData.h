#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20 {

struct FilterTestData {
public:
    // FilterTestData inner types define
    using ParamVariant = ::std::variant<bool, int, float, ::std::string>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                    mTest;
    ::ll::TypedStorage<8, 48, ::std::optional<::std::variant<bool, int, float, ::std::string>>> mSubject;
    ::ll::TypedStorage<8, 48, ::std::optional<::std::variant<bool, int, float, ::std::string>>> mOperator;
    ::ll::TypedStorage<8, 48, ::std::optional<::std::variant<bool, int, float, ::std::string>>> mDomain;
    ::ll::TypedStorage<8, 48, ::std::optional<::std::variant<bool, int, float, ::std::string>>> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    FilterTestData& operator=(FilterTestData const&);
    FilterTestData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FilterTestData(::SharedTypes::v1_21_20::FilterTestData&&);

    MCAPI FilterTestData(::SharedTypes::v1_21_20::FilterTestData const&);

    MCAPI ::SharedTypes::v1_21_20::FilterTestData& operator=(::SharedTypes::v1_21_20::FilterTestData&&);

    MCAPI ~FilterTestData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_20::FilterTestData&&);

    MCAPI void* $ctor(::SharedTypes::v1_21_20::FilterTestData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
