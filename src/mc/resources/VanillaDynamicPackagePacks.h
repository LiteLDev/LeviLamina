#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/resources/IDynamicPackagePacks.h"
#include "mc/resources/IInPackagePacks.h"

class VanillaDynamicPackagePacks : public ::IDynamicPackagePacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb5e3f8;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaDynamicPackagePacks& operator=(VanillaDynamicPackagePacks const&);
    VanillaDynamicPackagePacks(VanillaDynamicPackagePacks const&);
    VanillaDynamicPackagePacks();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void setDynamicPackageRoot(::Core::PathBuffer<::std::string>) /*override*/;

    // vIndex: 1
    virtual ::std::vector<::IInPackagePacks::MetaData> getPacks(::PackType) const /*override*/;

    // vIndex: 0
    virtual ~VanillaDynamicPackagePacks() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
