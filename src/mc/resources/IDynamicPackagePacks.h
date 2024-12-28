#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/resources/IInPackagePacks.h"

class IDynamicPackagePacks : public ::IInPackagePacks {
public:
    // prevent constructor by default
    IDynamicPackagePacks& operator=(IDynamicPackagePacks const&);
    IDynamicPackagePacks(IDynamicPackagePacks const&);
    IDynamicPackagePacks();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void setDynamicPackageRoot(::Core::PathBuffer<::std::string>) = 0;

    // vIndex: 0
    virtual ~IDynamicPackagePacks() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
