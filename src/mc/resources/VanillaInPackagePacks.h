#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/resources/IInPackagePacks.h"

class VanillaInPackagePacks : public ::IInPackagePacks {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::vector<::IInPackagePacks::MetaData> getPacks(::PackType packType) const /*override*/;

    virtual ~VanillaInPackagePacks() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::vector<::IInPackagePacks::MetaData> $getPacks(::PackType packType) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
