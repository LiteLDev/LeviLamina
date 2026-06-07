#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
class Pack;
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
namespace mce { class UUID; }
// clang-format on

class RealmsUnknownPackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkfcb077;
    ::ll::UntypedStorage<1, 1> mUnk811301;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsUnknownPackSource& operator=(RealmsUnknownPackSource const&);
    RealmsUnknownPackSource(RealmsUnknownPackSource const&);
    RealmsUnknownPackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsUnknownPackSource() /*override*/;

    virtual ::PackOrigin getPackOrigin() const /*override*/;

    virtual ::PackType getPackType() const /*override*/;

    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void addPack(::std::unique_ptr<::Pack>&& pack);

    MCNAPI void clearPacks();

    MCNAPI bool removePack(::mce::UUID const& id);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
