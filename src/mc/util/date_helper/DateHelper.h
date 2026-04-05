#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/date_helper/DurationFields.h"
#include "mc/util/date_helper/DurationFormat.h"

// auto generated forward declare list
// clang-format off
class I18n;
// clang-format on

namespace DateHelper {
// functions
// NOLINTBEGIN
MCNAPI ::std::string getDateAsFormattedString(int64 time);

MCNAPI ::std::string getDurationAsString(
    ::std::chrono::seconds       duration,
    ::DateHelper::DurationFields fields,
    ::DateHelper::DurationFormat format,
    ::I18n&                      i18n
);

MCNAPI ::std::pair<::std::string const, ::std::string const> getHourAndMinute(::std::string const& time);

MCNAPI ::std::string getHowLongAgoAsString(int64 now, int64 time);

MCNAPI ::std::string getHowLongAgoAsStringNarration(int64 now, int64 time);

MCNAPI ::std::string getTimeAltFormatAsString(int64 time);

MCNAPI ::std::string
getTimeRemainingAsString(int64 now, int64 time, uint numberOfFields, bool addRemainingStr, bool isTelemetry);

MCNAPI ::std::string getTimeSpecificFormatAsString(int64 now, int64 time);

MCNAPI ::std::string getTimestampFileName(int64 const& timestamp);

MCNAPI ::std::string removeSeconds(::std::string const& timeStr);

MCNAPI ::std::string toLocalDate(int64 time);

MCNAPI ::std::string toLocalShortDateTime(int64 time);

MCNAPI ::std::string toLocalTime(int64 time);
// NOLINTEND

} // namespace DateHelper
