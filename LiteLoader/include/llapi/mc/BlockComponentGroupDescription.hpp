/**
 * @file  MC/BlockComponentGroupDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1898063209
     * @symbol ??0BlockComponentGroupDescription@@QEAA@XZ
     */
    MCAPI BlockComponentGroupDescription();
    /**
     * @hash   478157887
     * @symbol ??0BlockComponentGroupDescription@@QEAA@AEBU0@@Z
     */
    MCAPI BlockComponentGroupDescription(struct BlockComponentGroupDescription const &);
    /**
     * @hash   -450233913
     * @symbol ??0BlockComponentGroupDescription@@QEAA@$$QEAU0@@Z
     */
    MCAPI BlockComponentGroupDescription(struct BlockComponentGroupDescription &&);
    /**
     * @hash   229855885
     * @symbol ?foreachDescription@BlockComponentGroupDescription@@QEBAXV?$function@$$A6AXAEBUBlockComponentDescription@@@Z@std@@@Z
     */
    MCAPI void foreachDescription(class std::function<void (struct BlockComponentDescription const &)>) const;
    /**
     * @hash   -1258570620
     * @symbol ?getComponentDescription@BlockComponentGroupDescription@@QEBAPEAUBlockComponentDescription@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI struct BlockComponentDescription * getComponentDescription(std::string const &) const;
    /**
     * @hash   -424497666
     * @symbol ??4BlockComponentGroupDescription@@QEAAAEAU0@$$QEAU0@@Z
     */
    MCAPI struct BlockComponentGroupDescription & operator=(struct BlockComponentGroupDescription &&);
    /**
     * @hash   76441191
     * @symbol ??1BlockComponentGroupDescription@@QEAA@XZ
     */
    MCAPI ~BlockComponentGroupDescription();

};