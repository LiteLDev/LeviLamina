#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GetAttachPositionViews {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnkb604d8;
    ::ll::UntypedStorage<8, 24> mUnk9d4038;
    ::ll::UntypedStorage<8, 24> mUnk35c019;
    ::ll::UntypedStorage<8, 24> mUnkca2840;
    ::ll::UntypedStorage<8, 56> mUnka88592;
    ::ll::UntypedStorage<8, 56> mUnk96dd44;
    ::ll::UntypedStorage<8, 56> mUnk9a49e4;
    ::ll::UntypedStorage<8, 24> mUnk253352;
    ::ll::UntypedStorage<8, 64> mUnk97bee7;
    ::ll::UntypedStorage<8, 24> mUnkfdb20f;
    ::ll::UntypedStorage<8, 24> mUnk3b71c6;
    ::ll::UntypedStorage<8, 24> mUnk8adc02;
    // NOLINTEND

public:
    // prevent constructor by default
    GetAttachPositionViews& operator=(GetAttachPositionViews const&);
    GetAttachPositionViews();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GetAttachPositionViews(::GetAttachPositionViews&&);

    MCNAPI GetAttachPositionViews(::GetAttachPositionViews const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::GetAttachPositionViews&&);

    MCNAPI void* $ctor(::GetAttachPositionViews const&);
    // NOLINTEND
};
