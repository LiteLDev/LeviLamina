#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"

class BaseGameVersion {
public:
    class SemVersion mSemVersion;
    bool             mNeverCompatible;
    // NOLINTBEGIN
    // symbol: ??0BaseGameVersion@@QEAA@XZ
    MCAPI BaseGameVersion();

    // symbol: ??0BaseGameVersion@@QEAA@AEBV0@@Z
    MCAPI BaseGameVersion(class BaseGameVersion const& rhs);

    // symbol: ??0BaseGameVersion@@QEAA@AEBVSemVersion@@@Z
    MCAPI explicit BaseGameVersion(class SemVersion const& semVersion);

    // symbol: ??0BaseGameVersion@@QEAA@GII@Z
    MCAPI BaseGameVersion(ushort major, uint minor, uint patch);

    // symbol: ?asSemVersion@BaseGameVersion@@QEBAAEBVSemVersion@@XZ
    MCAPI class SemVersion const& asSemVersion() const;

    // symbol: ?asString@BaseGameVersion@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& asString() const;

    // symbol: ?getMajor@BaseGameVersion@@QEBAGXZ
    MCAPI ushort getMajor() const;

    // symbol: ?getMinor@BaseGameVersion@@QEBAGXZ
    MCAPI ushort getMinor() const;

    // symbol: ?getPatch@BaseGameVersion@@QEBAGXZ
    MCAPI ushort getPatch() const;

    // symbol: ?isAnyVersion@BaseGameVersion@@QEBA_NXZ
    MCAPI bool isAnyVersion() const;

    // symbol: ?isCompatibleWith@BaseGameVersion@@QEBA_NAEBV1@@Z
    MCAPI bool isCompatibleWith(class BaseGameVersion const& baseGameVersion) const;

    // symbol: ?isNeverCompatible@BaseGameVersion@@QEBA_NXZ
    MCAPI bool isNeverCompatible() const;

    // symbol: ?isValid@BaseGameVersion@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ??9BaseGameVersion@@QEBA_NAEBV0@@Z
    MCAPI bool operator!=(class BaseGameVersion const& rhs) const;

    // symbol: ??MBaseGameVersion@@QEBA_NAEBV0@@Z
    MCAPI bool operator<(class BaseGameVersion const& rhs) const;

    // symbol: ??NBaseGameVersion@@QEBA_NAEBV0@@Z
    MCAPI bool operator<=(class BaseGameVersion const& rhs) const;

    // symbol: ??4BaseGameVersion@@QEAAAEAV0@AEBV0@@Z
    MCAPI class BaseGameVersion& operator=(class BaseGameVersion const&);

    // symbol: ??8BaseGameVersion@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class BaseGameVersion const& rhs) const;

    // symbol: ??OBaseGameVersion@@QEBA_NAEBV0@@Z
    MCAPI bool operator>(class BaseGameVersion const& rhs) const;

    // symbol: ??PBaseGameVersion@@QEBA_NAEBV0@@Z
    MCAPI bool operator>=(class BaseGameVersion const& rhs) const;

    // symbol: ??1BaseGameVersion@@QEAA@XZ
    MCAPI ~BaseGameVersion();

    // symbol:
    // ?fromString@BaseGameVersion@@SA?AW4MatchType@SemVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV1@@Z
    MCAPI static ::SemVersion::MatchType fromString(std::string const& source, class BaseGameVersion& output);

    // symbol: ?ANY@BaseGameVersion@@2V1@B
    MCAPI static class BaseGameVersion const ANY;

    // symbol: ?EMPTY@BaseGameVersion@@2V1@B
    MCAPI static class BaseGameVersion const EMPTY;

    // symbol: ?INCOMPATIBLE@BaseGameVersion@@2V1@B
    MCAPI static class BaseGameVersion const INCOMPATIBLE;

    // NOLINTEND
};
