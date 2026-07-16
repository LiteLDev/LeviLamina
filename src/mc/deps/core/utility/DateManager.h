#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
struct ScheduledCallback;
// clang-format on

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
    ::ll::UntypedStorage<8, 32> mUnk8d6b0a;
    ::ll::UntypedStorage<1, 1>  mUnk79feed;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    DateManager& operator=(DateManager const&);
    DateManager(DateManager const&);
    DateManager();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    DateManager& operator=(DateManager const&);
    DateManager(DateManager const&);

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DateManager() /*override*/ = default;

    virtual int64 _getUnixTime();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI DateManager();

    MCNAPI void _sendScheduledCallbacks();

    MCNAPI void registerScheduledCallback(::ScheduledCallback callback) const;

    MCNAPI ::std::string toString(::DateManager::TimeZoneType outputType, ::std::string const& format) const;
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string getCurrentTimestampFileName();

    MCNAPI static int64 getRealTime();

    MCNAPI static ::Bedrock::Result<int64> parseImfFixdate(::std::string const& dateHeader);

#ifdef LL_PLAT_C
    MCNAPI static bool toDateTime(
        ::std::string const&         strTime,
        ::tm*                        result,
        ::DateManager::TimeZoneType* resultType,
        int*                         resultTimeZoneMinutes
    );
#endif

    MCNAPI static bool toEpochTime(
        ::std::string const&         strTime,
        int64*                       result,
        ::DateManager::TimeZoneType* resultType,
        int*                         resultTimeZoneMinutes
    );

    MCNAPI static int64 toEpochTime(::tm const* dateTime, ::DateManager::TimeZoneType inputType);

    MCNAPI static ::std::string
    toString(::tm const& time, ::std::string const& format, ::std::optional<::std::locale> const& locale);

#ifdef LL_PLAT_C
    MCNAPI static ::std::string toString_Date(::tm const& time);
#endif

    MCNAPI static ::std::string toString_DateTime(::tm const& time, ::DateManager::TimeZoneType outputType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI int64 $_getUnixTime();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
