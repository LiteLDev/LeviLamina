/**
 * @file  BlockComponentGroupDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockComponentGroupDescription.
 *
 */
struct BlockComponentGroupDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOMPONENTGROUPDESCRIPTION
public:
    struct BlockComponentGroupDescription& operator=(struct BlockComponentGroupDescription const &) = delete;
#endif

public:
    /**
     * @symbol  ??0BlockComponentGroupDescription\@\@QEAA\@XZ
     */
    MCAPI BlockComponentGroupDescription();
    /**
     * @symbol  ??0BlockComponentGroupDescription\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI BlockComponentGroupDescription(struct BlockComponentGroupDescription const &);
    /**
     * @symbol  ??0BlockComponentGroupDescription\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI BlockComponentGroupDescription(struct BlockComponentGroupDescription &&);
    /**
     * @symbol  ?foreachDescription\@BlockComponentGroupDescription\@\@QEBAXV?$function\@$$A6AXAEBUBlockComponentDescription\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void foreachDescription(class std::function<void (struct BlockComponentDescription const &)>) const;
    /**
     * @symbol  ?getComponentDescription\@BlockComponentGroupDescription\@\@QEBAPEAUBlockComponentDescription\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct BlockComponentDescription * getComponentDescription(std::string const &) const;
    /**
     * @symbol  ??4BlockComponentGroupDescription\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct BlockComponentGroupDescription & operator=(struct BlockComponentGroupDescription &&);
    /**
     * @symbol  ??1BlockComponentGroupDescription\@\@QEAA\@XZ
     */
    MCAPI ~BlockComponentGroupDescription();

};