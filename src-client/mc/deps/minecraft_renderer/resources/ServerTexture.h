#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/external/render_dragon/resources/ResourcePointer.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace mce { class Texture; }
// clang-format on

namespace mce {

struct ServerTexture
: public ::mce::ServerResourcePointer<
      ::std::
          variant<::std::monostate, ::mce::Texture, ::mce::ClientResourcePointer<::dragon::ResolvedTextureResource>>> {
public:
    // ServerTexture inner types define
    using ServerResource = ::mce::ServerResourcePointer<
        ::std::
            variant<::std::monostate, ::mce::Texture, ::mce::ClientResourcePointer<::dragon::ResolvedTextureResource>>>;

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
    MCAPI ServerTexture();

    MCAPI ServerTexture(::mce::ServerTexture const&);

    MCAPI explicit ServerTexture(
        ::mce::ResourcePointer<::std::variant<
            ::std::monostate,
            ::mce::Texture,
            ::mce::ClientResourcePointer<::dragon::ResolvedTextureResource>>> const&
    );

    MCAPI ServerTexture(::mce::ServerTexture&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();

    MCFOLD void* $ctor(::mce::ServerTexture const&);

    MCAPI void* $ctor(
        ::mce::ResourcePointer<::std::variant<
            ::std::monostate,
            ::mce::Texture,
            ::mce::ClientResourcePointer<::dragon::ResolvedTextureResource>>> const&
    );

    MCFOLD void* $ctor(::mce::ServerTexture&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce
