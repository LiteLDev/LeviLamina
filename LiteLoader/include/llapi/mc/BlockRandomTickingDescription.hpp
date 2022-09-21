/**
 * @file  MC/BlockRandomTickingDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockRandomTickingDescription.
 *
 */
struct BlockRandomTickingDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKRANDOMTICKINGDESCRIPTION
public:
    struct BlockRandomTickingDescription& operator=(struct BlockRandomTickingDescription const &) = delete;
    BlockRandomTickingDescription(struct BlockRandomTickingDescription const &) = delete;
    BlockRandomTickingDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockRandomTickingDescription();
    /**
     * @hash   -669169838
     * @vftbl  1
     * @symbol ?getName@BlockRandomTickingDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   780481586
     * @vftbl  2
     * @symbol ?initializeComponent@BlockRandomTickingDescription@@UEBAXAEAVEntityContext@@@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @hash   1402173159
     * @symbol ?NameID@BlockRandomTickingDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const NameID;
    /**
     * @hash   -831649793
     * @symbol ?bindType@BlockRandomTickingDescription@@SAXXZ
     */
    MCAPI static void bindType();

};