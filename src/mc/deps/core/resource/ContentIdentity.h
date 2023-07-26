#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ContentIdentity {

public:
    /**
     * @symbol ??0ContentIdentity\@\@QEAA\@XZ
     */
    MCAPI ContentIdentity(); // NOLINT
    /**
     * @symbol ??0ContentIdentity\@\@QEAA\@AEBVUUID\@mce\@\@\@Z
     */
    MCAPI ContentIdentity(class mce::UUID const&); // NOLINT
    /**
     * @symbol ??0ContentIdentity\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ContentIdentity(class ContentIdentity&&); // NOLINT
    /**
     * @symbol ??0ContentIdentity\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ContentIdentity(class ContentIdentity const&); // NOLINT
    /**
     * @symbol
     * ?asString\@ContentIdentity\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string asString() const; // NOLINT
    /**
     * @symbol ?getAsUUID\@ContentIdentity\@\@QEBAAEBVUUID\@mce\@\@XZ
     */
    MCAPI class mce::UUID const& getAsUUID() const; // NOLINT
    /**
     * @symbol ?isValid\@ContentIdentity\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const; // NOLINT
    /**
     * @symbol ??9ContentIdentity\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class ContentIdentity const&) const; // NOLINT
    /**
     * @symbol ??4ContentIdentity\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ContentIdentity& operator=(class ContentIdentity const&); // NOLINT
    /**
     * @symbol ??4ContentIdentity\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ContentIdentity& operator=(class ContentIdentity&&); // NOLINT
    /**
     * @symbol ??8ContentIdentity\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class ContentIdentity const&) const; // NOLINT
    /**
     * @symbol
     * ?fromString\@ContentIdentity\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class ContentIdentity fromString(std::string const&); // NOLINT
    /**
     * @symbol ?EMPTY\@ContentIdentity\@\@2V1\@A
     */
    MCAPI static class ContentIdentity EMPTY; // NOLINT
};
