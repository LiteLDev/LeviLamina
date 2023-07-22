/**
 * @file  ActorMapping.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure ActorMapping.
 *
 */
struct ActorMapping {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORMAPPING
public:
    struct ActorMapping& operator=(struct ActorMapping const &) = delete;
    ActorMapping(struct ActorMapping const &) = delete;
    ActorMapping() = delete;
#endif

public:
    /**
     * @symbol  ??0ActorMapping\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI ActorMapping(std::string const &, std::string const &);
    /**
     * @symbol  ??0ActorMapping\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCAPI ActorMapping(std::string const &, std::string const &, std::string const &);
    /**
     * @symbol  ?getMappingName\@ActorMapping\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ActorTypeNamespaceRules\@\@\@Z
     */
    MCAPI std::string getMappingName(enum class ActorTypeNamespaceRules) const;
    /**
     * @symbol  ??1ActorMapping\@\@QEAA\@XZ
     */
    MCAPI ~ActorMapping();

};