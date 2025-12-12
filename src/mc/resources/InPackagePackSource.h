#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
// clang-format on

class InPackagePackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk3f8820;
    ::ll::UntypedStorage<1, 1>  mUnk5a812f;
    ::ll::UntypedStorage<1, 1>  mUnkf76cd7;
    // NOLINTEND

public:
    // prevent constructor by default
    InPackagePackSource& operator=(InPackagePackSource const&);
    InPackagePackSource(InPackagePackSource const&);
    InPackagePackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InPackagePackSource() /*override*/ = default;

    virtual ::PackOrigin getPackOrigin() const /*override*/;

    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&& options) /*override*/;

    virtual ::PackType getPackType() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PackOrigin $getPackOrigin() const;

    MCNAPI ::PackSourceLoadResult $_loadImpl(::PackSourceLoadOptions&& options);

    MCNAPI ::PackType $getPackType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
