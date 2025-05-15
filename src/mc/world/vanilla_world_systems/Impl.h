#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Experiments;
class ItemRegistryRef;
class Level;
class ServerScriptManager;
// clang-format on

namespace VanillaWorldSystems {

class Impl {
public:
    // prevent constructor by default
    Impl();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Impl(
        ::Bedrock::NonOwnerPointer<::Level> const& level,
        ::Experiments const&                       experiments,
        ::BaseGameVersion const&                   baseGameVersion,
        ::ItemRegistryRef                          itemRegistry,
        ::ServerScriptManager const*               scriptManager
    );

    MCNAPI ~Impl();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::weak_ptr<::VanillaWorldSystems::Impl>& mInstance();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<::Level> const& level,
        ::Experiments const&                       experiments,
        ::BaseGameVersion const&                   baseGameVersion,
        ::ItemRegistryRef                          itemRegistry,
        ::ServerScriptManager const*               scriptManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace VanillaWorldSystems
