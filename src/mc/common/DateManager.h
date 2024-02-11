#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class DateManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // DateManager inner types define
    enum class TimeZoneType {};

public:
    // prevent constructor by default
    DateManager& operator=(DateManager const&);
    DateManager(DateManager const&);
    DateManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DateManager@@UEAA@XZ
    virtual ~DateManager() = default;

    // symbol:
    // ?getCurrentTimestampFileName@DateManager@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI static std::string getCurrentTimestampFileName();

    // symbol: ?getRealDateTime@DateManager@@SA?AUtm@@W4TimeZoneType@1@@Z
    MCAPI static struct tm getRealDateTime(::DateManager::TimeZoneType returnType);

    // symbol: ?getRealTime@DateManager@@SA_JXZ
    MCAPI static int64 getRealTime();

    // symbol: ?toDateTime@DateManager@@SA?AUtm@@_JW4TimeZoneType@1@@Z
    MCAPI static struct tm toDateTime(int64 time, ::DateManager::TimeZoneType returnType);

    // symbol:
    // ?toString@DateManager@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUtm@@AEBV23@@Z
    MCAPI static std::string toString(struct tm const& time, std::string const& format);

    // symbol:
    // ?toString@DateManager@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEB_JW4TimeZoneType@1@AEBV23@@Z
    MCAPI static std::string
    toString(int64 const& time, ::DateManager::TimeZoneType outputType, std::string const& format);

    // symbol:
    // ?toString_DateTime@DateManager@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEB_JW4TimeZoneType@1@@Z
    MCAPI static std::string toString_DateTime(int64 const&, ::DateManager::TimeZoneType);

    // symbol:
    // ?toString_DateTime@DateManager@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUtm@@W4TimeZoneType@1@@Z
    MCAPI static std::string toString_DateTime(struct tm const&, ::DateManager::TimeZoneType);

    // NOLINTEND
};
