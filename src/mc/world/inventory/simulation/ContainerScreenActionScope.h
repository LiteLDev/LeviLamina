#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerScreenActionScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk713e28;
    ::ll::UntypedStorage<8, 8>  mUnk5ab914;
    ::ll::UntypedStorage<8, 24> mUnk807903;
    ::ll::UntypedStorage<8, 56> mUnk2c02bf;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerScreenActionScope& operator=(ContainerScreenActionScope const&);
    ContainerScreenActionScope(ContainerScreenActionScope const&);
    ContainerScreenActionScope();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContainerScreenActionScope();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
