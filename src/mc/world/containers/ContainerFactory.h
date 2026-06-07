#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ContainerController;
class ContainerManagerModel;
class ContainerModel;
class IContainerManager;
class Player;
struct FullContainerName;
// clang-format on

class ContainerFactory {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::std::weak_ptr<::IContainerManager> _getPlayerContainerManager(::Player& player);

    MCAPI static void
    _setPlayerContainerManagerModel(::Player& player, ::std::shared_ptr<::ContainerManagerModel> containerManagerModel);

    MCAPI static ::std::shared_ptr<::ContainerController>
    createController(::std::shared_ptr<::ContainerModel> containerModel);

    MCAPI static ::FullContainerName getContainerEnumName(::std::string const& collectionName);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::FullContainerName const& INVALID_FULL_CONTAINER_ENUM_NAME();
    // NOLINTEND
};
