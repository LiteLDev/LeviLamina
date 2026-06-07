#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace mce { class Texture; }
// clang-format on

namespace mce {

struct ClientTexture
: public ::mce::ClientResourcePointer<
      ::std::
          variant<::std::monostate, ::mce::Texture, ::mce::ClientResourcePointer<::dragon::ResolvedTextureResource>>> {
public:
    // ClientTexture inner types define
    using ClientResource = ::mce::ClientResourcePointer<
        ::std::
            variant<::std::monostate, ::mce::Texture, ::mce::ClientResourcePointer<::dragon::ResolvedTextureResource>>>;

public:
    // prevent constructor by default
    ClientTexture();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ClientTexture(
        ::mce::ClientResourcePointer<::std::variant<
            ::std::monostate,
            ::mce::Texture,
            ::mce::ClientResourcePointer<::dragon::ResolvedTextureResource>>>&& inner
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::mce::ClientResourcePointer<::std::variant<
            ::std::monostate,
            ::mce::Texture,
            ::mce::ClientResourcePointer<::dragon::ResolvedTextureResource>>>&& inner
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce
