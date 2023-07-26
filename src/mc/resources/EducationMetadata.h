#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EducationMetadata {
public:
    // EducationMetadata inner types declare
    // clang-format off

    // clang-format on

    // EducationMetadata inner types define
    enum class ContentType {};

    enum class UserType {};

public:
    // prevent constructor by default
    EducationMetadata& operator=(EducationMetadata const&) = delete;

public:
    /**
     * @symbol ??0EducationMetadata\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI EducationMetadata(struct EducationMetadata const&); // NOLINT
    /**
     * @symbol ??0EducationMetadata\@\@QEAA\@XZ
     */
    MCAPI EducationMetadata(); // NOLINT
    /**
     * @symbol ??1EducationMetadata\@\@QEAA\@XZ
     */
    MCAPI ~EducationMetadata(); // NOLINT
    /**
     * @symbol
     * ?STRING_TO_CONTENT_TYPE\@EducationMetadata\@\@2V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ContentType\@EducationMetadata\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ContentType\@EducationMetadata\@\@\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<
        std::string,
        enum class EducationMetadata::ContentType,
        struct std::hash<std::string>,
        struct std::equal_to<std::string>,
        class std::allocator<struct std::pair<std::string const, enum class EducationMetadata::ContentType>>> const
        STRING_TO_CONTENT_TYPE; // NOLINT
    /**
     * @symbol
     * ?STRING_TO_USER_TYPE\@EducationMetadata\@\@2V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4UserType\@EducationMetadata\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4UserType\@EducationMetadata\@\@\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<
        std::string,
        enum class EducationMetadata::UserType,
        struct std::hash<std::string>,
        struct std::equal_to<std::string>,
        class std::allocator<struct std::pair<std::string const, enum class EducationMetadata::UserType>>> const
        STRING_TO_USER_TYPE; // NOLINT
};
