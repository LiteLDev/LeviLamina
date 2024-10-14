#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerType.h"
#include "mc/world/SimpleContainer.h"

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void setItem$(int slot, class ItemStack const& item);

    // NOLINTEND
};
