#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DurationFieldKeys {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk63c315;
    ::ll::UntypedStorage<8, 32> mUnk1444fb;
    ::ll::UntypedStorage<8, 32> mUnk3d9f57;
    ::ll::UntypedStorage<8, 32> mUnk2c09eb;
    ::ll::UntypedStorage<8, 32> mUnk5cd112;
    ::ll::UntypedStorage<8, 32> mUnk7c19b9;
    ::ll::UntypedStorage<8, 32> mUnkf84be7;
    ::ll::UntypedStorage<8, 32> mUnkfdbd2d;
    // NOLINTEND

public:
    // prevent constructor by default
    DurationFieldKeys& operator=(DurationFieldKeys const&);
    DurationFieldKeys(DurationFieldKeys const&);
    DurationFieldKeys();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DurationFieldKeys(::std::string days, ::std::string hours, ::std::string minutes, ::std::string seconds);

    MCNAPI DurationFieldKeys(::std::string days, ::std::string hours, ::std::string minutes, ::std::string seconds, ::std::string day, ::std::string hour, ::std::string minute, ::std::string second);

    MCNAPI ~DurationFieldKeys();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string days, ::std::string hours, ::std::string minutes, ::std::string seconds);

    MCNAPI void* $ctor(::std::string days, ::std::string hours, ::std::string minutes, ::std::string seconds, ::std::string day, ::std::string hour, ::std::string minute, ::std::string second);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
