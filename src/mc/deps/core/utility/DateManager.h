#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

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
    // vIndex: 0
    virtual ~DateManager() = default;

    MCAPI static std::string getCurrentTimestampFileName();

    MCAPI static struct tm getRealDateTime(::DateManager::TimeZoneType returnType);

    MCAPI static int64 getRealTime();

    MCAPI static struct tm toDateTime(int64 time, ::DateManager::TimeZoneType returnType);

    MCAPI static std::string toString(struct tm const& time, std::string const& format);

    MCAPI static std::string
    toString(int64 const& time, ::DateManager::TimeZoneType outputType, std::string const& format);

    MCAPI static std::string toString_DateTime(int64 const& time, ::DateManager::TimeZoneType outputType);

    MCAPI static std::string toString_DateTime(struct tm const& time, ::DateManager::TimeZoneType outputType);

    // NOLINTEND
};
