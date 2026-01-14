#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110::BlockDefinition {

struct States {
public:
    // States inner types declare
    // clang-format off
    struct IntegerRange;
    // clang-format on

    // States inner types define
    struct IntegerRange {
    public:
        // IntegerRange inner types declare
        // clang-format off
        struct Range;
        // clang-format on

        // IntegerRange inner types define
        struct Range {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<4, 4, int> mMin;
            ::ll::TypedStorage<4, 4, int> mMax;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 8, ::SharedTypes::v1_21_110::BlockDefinition::States::IntegerRange::Range> mRange;
        // NOLINTEND
    };

    using BooleanState = ::std::vector<bool>;

    using DataType = ::std::unordered_map<
        ::std::string,
        ::std::variant<
            ::std::vector<::std::string>,
            ::std::vector<bool>,
            ::std::vector<int>,
            ::SharedTypes::v1_21_110::BlockDefinition::States::IntegerRange>>;

    using IntegerRangeState = ::SharedTypes::v1_21_110::BlockDefinition::States::IntegerRange;

    using IntegerState = ::std::vector<int>;

    using StringState = ::std::vector<::std::string>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::vector<::std::string>>> mStringStates;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::vector<bool>>>          mBooleanStates;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::vector<int>>>           mIntegerStates;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::SharedTypes::v1_21_110::BlockDefinition::States::IntegerRange>>
        mIntegerRangeStates;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_S States();

    MCAPI_S States(::SharedTypes::v1_21_110::BlockDefinition::States const&);

    MCAPI_S ::std::unordered_map<
        ::std::string,
        ::std::variant<
            ::std::vector<::std::string>,
            ::std::vector<bool>,
            ::std::vector<int>,
            ::SharedTypes::v1_21_110::BlockDefinition::States::IntegerRange>>
    getter() const;

    MCAPI_S ::SharedTypes::v1_21_110::BlockDefinition::States&
    operator=(::SharedTypes::v1_21_110::BlockDefinition::States&&);

    MCAPI_S ::SharedTypes::v1_21_110::BlockDefinition::States&
    operator=(::SharedTypes::v1_21_110::BlockDefinition::States const&);

    MCAPI_S void setter(
        ::std::unordered_map<
            ::std::string,
            ::std::variant<
                ::std::vector<::std::string>,
                ::std::vector<bool>,
                ::std::vector<int>,
                ::SharedTypes::v1_21_110::BlockDefinition::States::IntegerRange>>& value
    );

    MCAPI_S ~States();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_S static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_S void* $ctor();

    MCAPI_S void* $ctor(::SharedTypes::v1_21_110::BlockDefinition::States const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI_S void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
