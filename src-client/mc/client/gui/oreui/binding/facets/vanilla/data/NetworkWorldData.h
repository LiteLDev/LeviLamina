#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/world/WorldPingStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct NetworkWorldInfo;
namespace OreUI { class IResourceAllowList; }
// clang-format on

namespace OreUI {

struct NetworkWorldData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>          id;
    ::ll::TypedStorage<8, 32, ::std::string>          name;
    ::ll::TypedStorage<8, 32, ::std::string>          description;
    ::ll::TypedStorage<8, 32, ::std::string>          address;
    ::ll::TypedStorage<8, 32, ::std::string>          msgOfTheDay;
    ::ll::TypedStorage<4, 4, int>                     port;
    ::ll::TypedStorage<8, 32, ::std::string>          ping;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath> imagePath;
    ::ll::TypedStorage<4, 4, ::WorldPingStatus>       pingStatus;
    ::ll::TypedStorage<4, 4, int>                     playerCount;
    ::ll::TypedStorage<4, 4, int>                     capacity;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkWorldData& operator=(NetworkWorldData const&);
    NetworkWorldData(NetworkWorldData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetworkWorldData();

    MCAPI NetworkWorldData(::OreUI::NetworkWorldData&&);

    MCAPI ~NetworkWorldData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::OreUI::NetworkWorldData fromExternalServerWorld(::NetworkWorldInfo const& networkWorldInfo);

    MCAPI static ::OreUI::NetworkWorldData fromThirdPartyWorld(
        ::NetworkWorldInfo const&                                  networkWorldInfo,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::OreUI::NetworkWorldData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
