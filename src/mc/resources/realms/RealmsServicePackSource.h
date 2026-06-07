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
    virtual ~RealmsServicePackSource() /*override*/ = default;

    virtual ::PackOrigin getPackOrigin() const /*override*/;

    virtual ::PackType getPackType() const /*override*/;

    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI int64 getRealmId() const;

    MCNAPI void setPackContent(::std::vector<::gsl::not_null<::std::shared_ptr<::Pack>>>&& servicePackContent);
#endif
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

} // namespace Realms
