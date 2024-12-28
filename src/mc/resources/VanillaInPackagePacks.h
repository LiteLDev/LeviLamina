#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/resources/IInPackagePacks.h"

class VanillaInPackagePacks : public ::IInPackagePacks {
public:
    // prevent constructor by default
    VanillaInPackagePacks& operator=(VanillaInPackagePacks const&);
    VanillaInPackagePacks(VanillaInPackagePacks const&);
    VanillaInPackagePacks();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::vector<::IInPackagePacks::MetaData> getPacks(::PackType) const /*override*/;

    // vIndex: 0
    virtual ~VanillaInPackagePacks() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::vector<::IInPackagePacks::MetaData> $getPacks(::PackType) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
