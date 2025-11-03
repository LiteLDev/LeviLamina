#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/server/commands/CommandRationalRange.h"

struct HasPropertyFilter {
public:
    // HasPropertyFilter inner types define
    using ValueVariant = ::std::variant<::CommandRationalRange, bool, ::std::string>;

    using OptionalValueVariant = ::std::optional<::std::variant<::CommandRationalRange, bool, ::std::string>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> mPropertyName;
    ::ll::TypedStorage<1, 1, bool>            mInverted;
    ::ll::TypedStorage<8, 48, ::std::optional<::std::variant<::CommandRationalRange, bool, ::std::string>>> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    HasPropertyFilter(HasPropertyFilter const&);
    HasPropertyFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HasPropertyFilter(::HasPropertyFilter&&);

    MCAPI ::HasPropertyFilter& operator=(::HasPropertyFilter const&);

    MCAPI ~HasPropertyFilter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::HasPropertyFilter&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
