#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EducationMetadata {
public:
    // EducationMetadata inner types define
    enum class ContentType {};

    enum class UserType {};

public:
    // prevent constructor by default
    EducationMetadata& operator=(EducationMetadata const&);

public:
    // NOLINTBEGIN
    MCAPI EducationMetadata();

    MCAPI EducationMetadata(struct EducationMetadata const& other);

    MCAPI ~EducationMetadata();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct EducationMetadata const& other);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI static std::unordered_map<std::string, ::EducationMetadata::ContentType> const& STRING_TO_CONTENT_TYPE();

    MCAPI static std::unordered_map<std::string, ::EducationMetadata::UserType> const& STRING_TO_USER_TYPE();

    // NOLINTEND
};
