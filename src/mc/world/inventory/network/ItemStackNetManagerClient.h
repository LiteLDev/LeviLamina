#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/TypedClientNetId.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/inventory/network/ItemStackNetManagerBase.h"

class ItemStackNetManagerClient : public ::ItemStackNetManagerBase {
public:
    // prevent constructor by default
    ItemStackNetManagerClient& operator=(ItemStackNetManagerClient const&);
    ItemStackNetManagerClient(ItemStackNetManagerClient const&);
    ItemStackNetManagerClient();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ItemStackNetManagerClient@@UEAA@XZ
    virtual ~ItemStackNetManagerClient() = default;

    // NOLINTEND
};
