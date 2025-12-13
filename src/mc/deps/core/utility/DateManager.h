#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/Result.h"

class DateManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // DateManager inner types define
    enum class TimeZoneType : int {
        Utc   = 0,
        Local = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk38358c;
    ::ll::UntypedStorage<8, 8>  mUnka25ee2;
    ::ll::UntypedStorage<8, 8>  mUnk6da9eb;
    ::ll::UntypedStorage<8, 80> mUnkb81dc2;
    ::ll::UntypedStorage<8, 32> mUnk963c73;
    ::ll::UntypedStorage<1, 1>  mUnk79feed;
    // NOLINTEND

public:
    // prevent constructor by default
    DateManager& operator=(DateManager const&);
    DateManager(DateManager const&);
    DateManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DateManager() /*override*/ = default;

    // vIndex: 1
    virtual int64 _getUnixTime();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int
    _parseTimeZone(char const* str, uint64 len, ::DateManager::TimeZoneType* type, int* hours, int* minutes);

    MCNAPI static ::std::string getCurrentTimestampFileName();

    MCNAPI static int64 getRealTime();

    MCNAPI static ::Bedrock::Result<int64> parseImfFixdate(::std::string const& dateHeader);

    MCNAPI static bool toDateTime(
        ::std::string const&         strTime,
        ::tm*                        result,
        ::DateManager::TimeZoneType* resultType,
        int*                         resultTimeZoneMinutes
    );

    MCNAPI static int64 toEpochTime(::tm const* dateTime, ::DateManager::TimeZoneType inputType);

    MCNAPI static ::std::string
    toString(::tm const& time, ::std::string const& format, ::std::optional<::std::locale> const& locale);

    MCNAPI static ::std::string toString_DateTime(::tm const& time, ::DateManager::TimeZoneType outputType);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
