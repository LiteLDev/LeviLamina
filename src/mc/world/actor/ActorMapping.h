#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorMapping {

public:
    // prevent constructor by default
    ActorMapping& operator=(ActorMapping const&) = delete;
    ActorMapping(ActorMapping const&)            = delete;
    ActorMapping()                               = delete;

public:
    /**
     * @symbol
     * ??0ActorMapping\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCAPI ActorMapping(std::string const&, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol ??0ActorMapping\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI ActorMapping(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?getMappingName\@ActorMapping\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ActorTypeNamespaceRules\@\@\@Z
     */
    MCAPI std::string getMappingName(enum class ActorTypeNamespaceRules) const; // NOLINT
    /**
     * @symbol ??1ActorMapping\@\@QEAA\@XZ
     */
    MCAPI ~ActorMapping(); // NOLINT
};
