#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::ext::internal {

struct JSONSchemaValidation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::optional<double>>        mMultipleOf;
    ::ll::TypedStorage<8, 16, ::std::optional<double>>        mMinimum;
    ::ll::TypedStorage<8, 16, ::std::optional<double>>        mExclusiveMinimum;
    ::ll::TypedStorage<8, 16, ::std::optional<double>>        mMaximum;
    ::ll::TypedStorage<8, 16, ::std::optional<double>>        mExclusiveMaximum;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>        mMinLength;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>        mMaxLength;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mPattern;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mRegexFlags;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>        mMinItems;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>        mMaxItems;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>           mNoDuplicates;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>        mMinProperties;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>        mMaxProperties;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mCustomDescription;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mNonPublicConstraint;
    // NOLINTEND

public:
    // prevent constructor by default
    JSONSchemaValidation& operator=(JSONSchemaValidation const&);
    JSONSchemaValidation(JSONSchemaValidation const&);
    JSONSchemaValidation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JSONSchemaValidation(::cereal::ext::internal::JSONSchemaValidation&&);

    MCAPI ::cereal::ext::internal::JSONSchemaValidation& operator=(::cereal::ext::internal::JSONSchemaValidation&&);

    MCAPI ~JSONSchemaValidation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ext::internal::JSONSchemaValidation&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::ext::internal
