/**
 * @file  ContentIdentity.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ContentIdentity.
 *
 */
class ContentIdentity {

#define AFTER_EXTRA
// Add Member There
public:
    mce::UUID uuid;
    bool valid{};
#undef AFTER_EXTRA
public:
    /**
     * @hash   -1115189148
     * @symbol  ??0ContentIdentity\@\@QEAA\@AEBVUUID\@mce\@\@\@Z
     */
    MCAPI ContentIdentity(class mce::UUID const &);
    /**
     * @hash   -814988793
     * @symbol  ??0ContentIdentity\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ContentIdentity(class ContentIdentity &&);
    /**
     * @hash   -1190755151
     * @symbol  ??0ContentIdentity\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ContentIdentity(class ContentIdentity const &);
    /**
     * @hash   780549667
     * @symbol  ??0ContentIdentity\@\@QEAA\@XZ
     */
    MCAPI ContentIdentity();
    /**
     * @hash   560941552
     * @symbol  ?asString\@ContentIdentity\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string asString() const;
    /**
     * @hash   1677387160
     * @symbol  ?getAsUUID\@ContentIdentity\@\@QEBAAEBVUUID\@mce\@\@XZ
     */
    MCAPI class mce::UUID const & getAsUUID() const;
    /**
     * @hash   1823703856
     * @symbol  ?isValid\@ContentIdentity\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @hash   -2015570411
     * @symbol  ??9ContentIdentity\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class ContentIdentity const &) const;
    /**
     * @hash   2105865708
     * @symbol  ??4ContentIdentity\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ContentIdentity & operator=(class ContentIdentity const &);
    /**
     * @hash   -1240084990
     * @symbol  ??4ContentIdentity\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ContentIdentity & operator=(class ContentIdentity &&);
    /**
     * @hash   -751624944
     * @symbol  ??8ContentIdentity\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class ContentIdentity const &) const;
    /**
     * @hash   1959979249
     * @symbol  ?EMPTY\@ContentIdentity\@\@2V1\@A
     */
    MCAPI static class ContentIdentity EMPTY;
    /**
     * @hash   -476048425
     * @symbol  ?fromString\@ContentIdentity\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class ContentIdentity fromString(std::string const &);

};