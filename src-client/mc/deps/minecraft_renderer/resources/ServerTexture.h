#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/core/checked_resource_service/ResourcePointer.h"
#include "mc/deps/core/checked_resource_service/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct ResolvedTextureResource; }
namespace mce { class Texture; }
// clang-format on

namespace mce {

struct ServerTexture
: public ::mce::ServerResourcePointer<
      ::std::
          variant<::std::monostate, ::mce::Texture, ::mce::ClientResourcePointer<::dragon::ResolvedTextureResource>>> {
public:
    // prevent constructor by default
    ServerTexture& operator=(ServerTexture const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerTexture() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerTexture();

    MCNAPI ServerTexture(::mce::ServerTexture const&);

    MCNAPI explicit ServerTexture(
        ::mce::ResourcePointer<::std::variant<
            ::std::monostate,
            ::mce::Texture,
            ::mce::ClientResourcePointer<::dragon::ResolvedTextureResource>>> const&
    );

    MCNAPI ServerTexture(::mce::ServerTexture&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::mce::ServerTexture const&);

    MCNAPI void* $ctor(
        ::mce::ResourcePointer<::std::variant<
            ::std::monostate,
            ::mce::Texture,
            ::mce::ClientResourcePointer<::dragon::ResolvedTextureResource>>> const&
    );

    MCNAPI void* $ctor(::mce::ServerTexture&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce
