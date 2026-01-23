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
                ::SharedTypes::v1_21_110::BlockDefinition::States::IntegerRange>>
            mValues;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Values();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    using BooleanState = ::std::vector<bool>;

    using DataType = ::std::unordered_map<
        ::std::string,
        ::std::variant<
            ::std::vector<::std::string>,
            ::std::vector<bool>,
            ::std::vector<int>,
            ::SharedTypes::v1_21_110::BlockDefinition::States::Values>>;

    using IntegerRangeState = ::SharedTypes::v1_21_110::BlockDefinition::States::IntegerRange;

    using IntegerState = ::std::vector<int>;

    using StatesVariant = ::std::variant<
        ::std::vector<::std::string>,
        ::std::vector<bool>,
        ::std::vector<int>,
        ::SharedTypes::v1_21_110::BlockDefinition::States::Values>;

    using StringState = ::std::vector<::std::string>;

    using ValuesState = ::SharedTypes::v1_21_110::BlockDefinition::States::Values;

    using ValuesVariant = ::std::variant<
        ::std::vector<::std::string>,
        ::std::vector<bool>,
        ::std::vector<int>,
        ::SharedTypes::v1_21_110::BlockDefinition::States::IntegerRange>;

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
    MCAPI States();

    MCAPI States(::SharedTypes::v1_21_110::BlockDefinition::States const&);

    MCAPI ::std::unordered_map<
        ::std::string,
        ::std::variant<
            ::std::vector<::std::string>,
            ::std::vector<bool>,
            ::std::vector<int>,
            ::SharedTypes::v1_21_110::BlockDefinition::States::Values>>
    getter() const;

    MCAPI ::SharedTypes::v1_21_110::BlockDefinition::States&
    operator=(::SharedTypes::v1_21_110::BlockDefinition::States&&);

    MCAPI ::SharedTypes::v1_21_110::BlockDefinition::States&
    operator=(::SharedTypes::v1_21_110::BlockDefinition::States const&);

    MCAPI void setter(
        ::std::unordered_map<
            ::std::string,
            ::std::variant<
                ::std::vector<::std::string>,
                ::std::vector<bool>,
                ::std::vector<int>,
                ::SharedTypes::v1_21_110::BlockDefinition::States::Values>>& value
    );

    MCAPI ~States();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_21_110::BlockDefinition::States const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
