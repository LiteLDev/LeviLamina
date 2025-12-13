#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/enums/DirectionId.h"

struct InputMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88>  mUnk1512af;
    ::ll::UntypedStorage<8, 80>  mUnk70cb46;
    ::ll::UntypedStorage<8, 336> mUnkef5c29;
    ::ll::UntypedStorage<8, 128> mUnk8f8fb6;
    ::ll::UntypedStorage<8, 24>  mUnk7b032e;
    ::ll::UntypedStorage<8, 24>  mUnk33b9f5;
    ::ll::UntypedStorage<8, 24>  mUnk68a542;
    // NOLINTEND

public:
    // prevent constructor by default
    InputMapping& operator=(InputMapping const&);
    InputMapping(InputMapping const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InputMapping();

    MCNAPI ::std::vector<::std::string> getButtonDifference(::InputMapping const* otherMapping) const;

    MCNAPI ::std::vector<::DirectionId> getStickDifference(::InputMapping const* otherMapping) const;

    MCNAPI ~InputMapping();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
