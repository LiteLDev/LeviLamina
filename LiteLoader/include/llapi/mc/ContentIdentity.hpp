/**
 * @file  MC/ContentIdentity.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1864169484
     * @symbol ??0ContentIdentity@@QEAA@AEBVUUID@mce@@@Z
     */
    MCAPI ContentIdentity(class mce::UUID const &);
    /**
     * @hash   -1563969129
     * @symbol ??0ContentIdentity@@QEAA@$$QEAV0@@Z
     */
    MCAPI ContentIdentity(class ContentIdentity &&);
    /**
     * @hash   -1939735487
     * @symbol ??0ContentIdentity@@QEAA@AEBV0@@Z
     */
    MCAPI ContentIdentity(class ContentIdentity const &);
    /**
     * @hash   203165491
     * @symbol ??0ContentIdentity@@QEAA@XZ
     */
    MCAPI ContentIdentity();
    /**
     * @hash   -188038784
     * @symbol ?asString@ContentIdentity@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string asString() const;
    /**
     * @hash   1580764376
     * @symbol ?getAsUUID@ContentIdentity@@QEBAAEBVUUID@mce@@XZ
     */
    MCAPI class mce::UUID const & getAsUUID() const;
    /**
     * @hash   1718624272
     * @symbol ?isValid@ContentIdentity@@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @hash   1530416549
     * @symbol ??9ContentIdentity@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator!=(class ContentIdentity const &) const;
    /**
     * @hash   1356885372
     * @symbol ??4ContentIdentity@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class ContentIdentity & operator=(class ContentIdentity const &);
    /**
     * @hash   -1989065326
     * @symbol ??4ContentIdentity@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class ContentIdentity & operator=(class ContentIdentity &&);
    /**
     * @hash   -1500605280
     * @symbol ??8ContentIdentity@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class ContentIdentity const &) const;
    /**
     * @hash   1142775601
     * @symbol ?EMPTY@ContentIdentity@@2V1@A
     */
    MCAPI static class ContentIdentity EMPTY;
    /**
     * @hash   -1225028761
     * @symbol ?fromString@ContentIdentity@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static class ContentIdentity fromString(std::string const &);

};