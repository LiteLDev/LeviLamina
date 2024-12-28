#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/AppConfigData.h"

class EduConfigDataWrapper : public ::AppConfigData<::EduConfigDataWrapper> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk1d4e43;
    ::ll::UntypedStorage<8, 8>  mUnk40d783;
    ::ll::UntypedStorage<1, 1>  mUnke1342c;
    ::ll::UntypedStorage<8, 32> mUnk81fcaa;
    // NOLINTEND

public:
    // prevent constructor by default
    EduConfigDataWrapper& operator=(EduConfigDataWrapper const&);
    EduConfigDataWrapper(EduConfigDataWrapper const&);
    EduConfigDataWrapper();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EduConfigDataWrapper() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
