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

namespace Realms {

class RealmsServicePackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf14443;
    ::ll::UntypedStorage<1, 1> mUnk32d08d;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsServicePackSource& operator=(RealmsServicePackSource const&);
    RealmsServicePackSource(RealmsServicePackSource const&);
    RealmsServicePackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RealmsServicePackSource() /*override*/ = default;

    // vIndex: 2
    virtual ::PackOrigin getPackOrigin() const /*override*/;

    // vIndex: 3
    virtual ::PackType getPackType() const /*override*/;

    // vIndex: 5
    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PackOrigin $getPackOrigin() const;

    MCNAPI ::PackType $getPackType() const;

    MCNAPI ::PackSourceLoadResult $_loadImpl(::PackSourceLoadOptions&&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
