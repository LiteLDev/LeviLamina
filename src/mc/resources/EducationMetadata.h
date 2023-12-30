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
    // symbol: ??0EducationMetadata@@QEAA@XZ
    MCAPI EducationMetadata();

    // symbol: ??0EducationMetadata@@QEAA@AEBU0@@Z
    MCAPI EducationMetadata(struct EducationMetadata const& other);

    // symbol: ??1EducationMetadata@@QEAA@XZ
    MCAPI ~EducationMetadata();

    // symbol:
    // ?STRING_TO_CONTENT_TYPE@EducationMetadata@@2V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ContentType@EducationMetadata@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ContentType@EducationMetadata@@@std@@@2@@std@@B
    MCAPI static std::unordered_map<std::string, ::EducationMetadata::ContentType> const STRING_TO_CONTENT_TYPE;

    // symbol:
    // ?STRING_TO_USER_TYPE@EducationMetadata@@2V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4UserType@EducationMetadata@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4UserType@EducationMetadata@@@std@@@2@@std@@B
    MCAPI static std::unordered_map<std::string, ::EducationMetadata::UserType> const STRING_TO_USER_TYPE;

    // NOLINTEND
};
