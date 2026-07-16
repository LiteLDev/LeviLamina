#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct States {
public:
    // States inner types declare
    // clang-format off
    struct IntegerRange;
    struct Values;
    // clang-format on

    // States inner types define
    struct IntegerRange {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mMin;
        ::ll::TypedStorage<4, 4, int> mMax;
        // NOLINTEND
    };

    struct Values {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            40,
            ::std::variant<
                ::std::vector<::std::string>,
                ::std::vector<bool>,
                ::std::vector<int>,
                ::SharedTypes::v1_26_20::BlockDefinition::States::IntegerRange>>
            mValues;
        // NOLINTEND
    };

    using BooleanState = ::std::vector<bool>;

    using DataType = ::std::unordered_map<
        ::std::string,
        ::std::variant<
            ::std::vector<::std::string>,
            ::std::vector<bool>,
            ::std::vector<int>,
            ::SharedTypes::v1_26_20::BlockDefinition::States::Values>>;

    using IntegerRangeState = ::SharedTypes::v1_26_20::BlockDefinition::States::IntegerRange;

    using IntegerState = ::std::vector<int>;

    using StatesVariant = ::std::variant<
        ::std::vector<::std::string>,
        ::std::vector<bool>,
        ::std::vector<int>,
        ::SharedTypes::v1_26_20::BlockDefinition::States::Values>;

    using StringState = ::std::vector<::std::string>;

    using ValuesState = ::SharedTypes::v1_26_20::BlockDefinition::States::Values;

    using ValuesVariant = ::std::variant<
        ::std::vector<::std::string>,
        ::std::vector<bool>,
        ::std::vector<int>,
        ::SharedTypes::v1_26_20::BlockDefinition::States::IntegerRange>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::vector<::std::string>>> mStringStates;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::vector<bool>>>          mBooleanStates;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::vector<int>>>           mIntegerStates;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::SharedTypes::v1_26_20::BlockDefinition::States::IntegerRange>>
        mIntegerRangeStates;
    // NOLINTEND

public:
    // prevent constructor by default
    States(States const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI States();

    MCAPI ::SharedTypes::v1_26_20::BlockDefinition::States&
    operator=(::SharedTypes::v1_26_20::BlockDefinition::States&&);

    MCAPI ::SharedTypes::v1_26_20::BlockDefinition::States&
    operator=(::SharedTypes::v1_26_20::BlockDefinition::States const&);

    MCAPI ~States();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
