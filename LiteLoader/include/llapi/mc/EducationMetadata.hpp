/**
 * @file  EducationMetadata.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure EducationMetadata.
 *
 */
struct EducationMetadata {

#define AFTER_EXTRA
// Add Member There
enum class ContentType;
enum class UserType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDUCATIONMETADATA
public:
    struct EducationMetadata& operator=(struct EducationMetadata const &) = delete;
    EducationMetadata(struct EducationMetadata const &) = delete;
#endif

public:
    /**
     * @symbol  ??0EducationMetadata\@\@QEAA\@XZ
     */
    MCAPI EducationMetadata();
    /**
     * @symbol  ??1EducationMetadata\@\@QEAA\@XZ
     */
    MCAPI ~EducationMetadata();
    /**
     * @symbol  ?STRING_TO_CONTENT_TYPE\@EducationMetadata\@\@2V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ContentType\@EducationMetadata\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ContentType\@EducationMetadata\@\@\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<std::string, enum class EducationMetadata::ContentType, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, enum class EducationMetadata::ContentType>>> const STRING_TO_CONTENT_TYPE;
    /**
     * @symbol  ?STRING_TO_USER_TYPE\@EducationMetadata\@\@2V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4UserType\@EducationMetadata\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4UserType\@EducationMetadata\@\@\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<std::string, enum class EducationMetadata::UserType, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, enum class EducationMetadata::UserType>>> const STRING_TO_USER_TYPE;

};