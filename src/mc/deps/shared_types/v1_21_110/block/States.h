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
            ::ll::UntypedStorage<4, 4> mUnk61dbbf;
            ::ll::UntypedStorage<4, 4> mUnk4e560b;
            // NOLINTEND

        public:
            // prevent constructor by default
            Range& operator=(Range const&);
            Range(Range const&);
            Range();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 8> mUnk4daa70;
        // NOLINTEND

    public:
        // prevent constructor by default
        IntegerRange& operator=(IntegerRange const&);
        IntegerRange(IntegerRange const&);
        IntegerRange();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkee1964;
    ::ll::UntypedStorage<8, 64> mUnkb5d772;
    ::ll::UntypedStorage<8, 64> mUnk2141a3;
    ::ll::UntypedStorage<8, 64> mUnk9ae666;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI States();

    MCNAPI States(::SharedTypes::v1_21_110::BlockDefinition::States const&);

    MCNAPI ::std::unordered_map<
        ::std::string,
        ::std::variant<
            ::std::vector<::std::string>,
            ::std::vector<bool>,
            ::std::vector<int>,
            ::SharedTypes::v1_21_110::BlockDefinition::States::IntegerRange>>
    getter() const;

    MCNAPI ::SharedTypes::v1_21_110::BlockDefinition::States&
    operator=(::SharedTypes::v1_21_110::BlockDefinition::States const&);

    MCNAPI ::SharedTypes::v1_21_110::BlockDefinition::States&
    operator=(::SharedTypes::v1_21_110::BlockDefinition::States&&);

    MCNAPI void setter(
        ::std::unordered_map<
            ::std::string,
            ::std::variant<
                ::std::vector<::std::string>,
                ::std::vector<bool>,
                ::std::vector<int>,
                ::SharedTypes::v1_21_110::BlockDefinition::States::IntegerRange>>& value
    );

    MCNAPI ~States();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SharedTypes::v1_21_110::BlockDefinition::States const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
