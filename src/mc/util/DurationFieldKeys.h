#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DurationFieldKeys {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf68457;
    ::ll::UntypedStorage<8, 32> mUnkbcb79a;
    ::ll::UntypedStorage<8, 32> mUnkd5cc90;
    ::ll::UntypedStorage<8, 32> mUnk25b82e;
    ::ll::UntypedStorage<8, 32> mUnk507db7;
    ::ll::UntypedStorage<8, 32> mUnk62919f;
    ::ll::UntypedStorage<8, 32> mUnk39e877;
    ::ll::UntypedStorage<8, 32> mUnk7c5a2d;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    DurationFieldKeys& operator=(DurationFieldKeys const&);
    DurationFieldKeys(DurationFieldKeys const&);
    DurationFieldKeys();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    DurationFieldKeys(DurationFieldKeys const&);
    DurationFieldKeys();

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DurationFieldKeys(::std::string days, ::std::string hours, ::std::string minutes, ::std::string seconds);

    MCNAPI DurationFieldKeys(
        ::std::string days,
        ::std::string hours,
        ::std::string minutes,
        ::std::string seconds,
        ::std::string day,
        ::std::string hour,
        ::std::string minute,
        ::std::string second
    );

#ifdef LL_PLAT_C
    MCNAPI ::DurationFieldKeys& operator=(::DurationFieldKeys const&);
#endif

    MCNAPI ~DurationFieldKeys();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string days, ::std::string hours, ::std::string minutes, ::std::string seconds);

    MCNAPI void* $ctor(
        ::std::string days,
        ::std::string hours,
        ::std::string minutes,
        ::std::string seconds,
        ::std::string day,
        ::std::string hour,
        ::std::string minute,
        ::std::string second
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
