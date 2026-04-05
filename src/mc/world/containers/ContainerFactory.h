#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ContainerController;
class ContainerModel;
struct FullContainerName;
// clang-format on

class ContainerFactory {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
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
