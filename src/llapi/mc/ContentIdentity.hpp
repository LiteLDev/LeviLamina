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
     * @symbol  ??0ContentIdentity\@\@QEAA\@AEBVUUID\@mce\@\@\@Z
     */
    MCAPI ContentIdentity(class mce::UUID const &);
    /**
     * @symbol  ??0ContentIdentity\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ContentIdentity(class ContentIdentity &&);
    /**
     * @symbol  ??0ContentIdentity\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ContentIdentity(class ContentIdentity const &);
    /**
     * @symbol  ??0ContentIdentity\@\@QEAA\@XZ
     */
    MCAPI ContentIdentity();
    /**
     * @symbol  ?asString\@ContentIdentity\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string asString() const;
    /**
     * @symbol  ?getAsUUID\@ContentIdentity\@\@QEBAAEBVUUID\@mce\@\@XZ
     */
    MCAPI class mce::UUID const & getAsUUID() const;
    /**
     * @symbol  ?isValid\@ContentIdentity\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol  ??9ContentIdentity\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class ContentIdentity const &) const;
    /**
     * @symbol  ??4ContentIdentity\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ContentIdentity & operator=(class ContentIdentity const &);
    /**
     * @symbol  ??4ContentIdentity\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ContentIdentity & operator=(class ContentIdentity &&);
    /**
     * @symbol  ??8ContentIdentity\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class ContentIdentity const &) const;
    /**
     * @symbol  ?EMPTY\@ContentIdentity\@\@2V1\@A
     */
    MCAPI static class ContentIdentity EMPTY;
    /**
     * @symbol  ?fromString\@ContentIdentity\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class ContentIdentity fromString(std::string const &);

};