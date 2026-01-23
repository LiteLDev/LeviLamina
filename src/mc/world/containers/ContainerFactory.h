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
    MCNAPI_C static ::std::shared_ptr<::ContainerController>
    createController(::std::shared_ptr<::ContainerModel> containerModel);

    MCNAPI_C static ::FullContainerName getContainerEnumName(::std::string const& collectionName);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::FullContainerName const& INVALID_FULL_CONTAINER_ENUM_NAME();
    // NOLINTEND
};
