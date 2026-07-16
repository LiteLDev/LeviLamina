#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct ConstraintDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::optional<double>>                                      mMultipleOf;
    ::ll::TypedStorage<8, 16, ::std::optional<double>>                                      mMinimum;
    ::ll::TypedStorage<8, 16, ::std::optional<double>>                                      mExclusiveMinimum;
    ::ll::TypedStorage<8, 16, ::std::optional<double>>                                      mMaximum;
    ::ll::TypedStorage<8, 16, ::std::optional<double>>                                      mExclusiveMaximum;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>                                      mMinLength;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>                                      mMaxLength;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                               mPattern;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                               mRegexFlags;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>                                      mMinItems;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>                                      mMaxItems;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                                         mNoDuplicates;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::cereal::internal::ConstraintDescription>> mItems;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>                                      mMinProperties;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>                                      mMaxProperties;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::cereal::internal::ConstraintDescription>> mPropertyNames;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::cereal::internal::ConstraintDescription>> mAdditionalProperties;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<int64>>>                        mEnumValues;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::optional<::cereal::internal::ConstraintDescription>>> mVariantTypes;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mCustomDescription;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mNonPublicFlag;
    // NOLINTEND

public:
    // prevent constructor by default
    ConstraintDescription& operator=(ConstraintDescription const&);
    ConstraintDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ConstraintDescription(::cereal::internal::ConstraintDescription&&);

    MCAPI ConstraintDescription(::cereal::internal::ConstraintDescription const&);

    MCAPI void merge(::cereal::internal::ConstraintDescription const& other);

    MCAPI ::cereal::internal::ConstraintDescription& operator=(::cereal::internal::ConstraintDescription&&);

    MCAPI ~ConstraintDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::internal::ConstraintDescription&&);

    MCAPI void* $ctor(::cereal::internal::ConstraintDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::internal
