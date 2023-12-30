#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/mce/UUID.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ContentIdentity {
public:
    mce::UUID uuid;
    bool      valid;
    // NOLINTBEGIN
    // symbol: ??0ContentIdentity@@QEAA@XZ
    MCAPI ContentIdentity();

    // symbol: ??0ContentIdentity@@QEAA@$$QEAV0@@Z
    MCAPI ContentIdentity(class ContentIdentity&&);

    // symbol: ??0ContentIdentity@@QEAA@AEBV0@@Z
    MCAPI ContentIdentity(class ContentIdentity const&);

    // symbol: ??0ContentIdentity@@QEAA@AEBVUUID@mce@@@Z
    MCAPI explicit ContentIdentity(class mce::UUID const& uuid);

    // symbol: ?asString@ContentIdentity@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string asString() const;

    // symbol: ?getAsUUID@ContentIdentity@@QEBAAEBVUUID@mce@@XZ
    MCAPI class mce::UUID const& getAsUUID() const;

    // symbol: ?isValid@ContentIdentity@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ??9ContentIdentity@@QEBA_NAEBV0@@Z
    MCAPI bool operator!=(class ContentIdentity const& rhs) const;

    // symbol: ??4ContentIdentity@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class ContentIdentity& operator=(class ContentIdentity&& rhs);

    // symbol: ??4ContentIdentity@@QEAAAEAV0@AEBV0@@Z
    MCAPI class ContentIdentity& operator=(class ContentIdentity const& rhs);

    // symbol: ??8ContentIdentity@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class ContentIdentity const& rhs) const;

    // symbol: ?fromString@ContentIdentity@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class ContentIdentity fromString(std::string const& uuidString);

    // symbol: ?EMPTY@ContentIdentity@@2V1@A
    MCAPI static class ContentIdentity EMPTY;

    // NOLINTEND
};
