#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ContentIdentity {

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ContentIdentity\@\@QEAA\@XZ
     */
    MCAPI ContentIdentity();
    /**
     * @symbol ??0ContentIdentity\@\@QEAA\@AEBVUUID\@mce\@\@\@Z
     */
    MCAPI ContentIdentity(class mce::UUID const&);
    /**
     * @symbol ??0ContentIdentity\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ContentIdentity(class ContentIdentity&&);
    /**
     * @symbol ??0ContentIdentity\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ContentIdentity(class ContentIdentity const&);
    /**
     * @symbol
     * ?asString\@ContentIdentity\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string asString() const;
    /**
     * @symbol ?getAsUUID\@ContentIdentity\@\@QEBAAEBVUUID\@mce\@\@XZ
     */
    MCAPI class mce::UUID const& getAsUUID() const;
    /**
     * @symbol ?isValid\@ContentIdentity\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ??9ContentIdentity\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class ContentIdentity const&) const;
    /**
     * @symbol ??4ContentIdentity\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ContentIdentity& operator=(class ContentIdentity const&);
    /**
     * @symbol ??4ContentIdentity\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ContentIdentity& operator=(class ContentIdentity&&);
    /**
     * @symbol ??8ContentIdentity\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class ContentIdentity const&) const;
    /**
     * @symbol
     * ?fromString\@ContentIdentity\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class ContentIdentity fromString(std::string const&);
    /**
     * @symbol ?EMPTY\@ContentIdentity\@\@2V1\@A
     */
    MCAPI static class ContentIdentity EMPTY;
    // NOLINTEND
};
