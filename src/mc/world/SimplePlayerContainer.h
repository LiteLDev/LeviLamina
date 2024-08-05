#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/SimpleContainer.h"
#include "mc/world/containers/ContainerType.h"

class SimplePlayerContainer : public ::SimpleContainer {
public:
    // prevent constructor by default
    SimplePlayerContainer& operator=(SimplePlayerContainer const&);
    SimplePlayerContainer(SimplePlayerContainer const&);
    SimplePlayerContainer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SimplePlayerContainer() = default;

    // vIndex: 12
    virtual void setItem(int slot, class ItemStack const& item);

    MCAPI SimplePlayerContainer(
        class Player&      player,
        std::string const& name,
        bool               customName,
        int                size,
        ::ContainerType    containerType
    );

    // NOLINTEND
};
