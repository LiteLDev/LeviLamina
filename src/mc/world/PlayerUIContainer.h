#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/SimpleContainer.h"

class PlayerUIContainer : public ::SimpleContainer {
public:
    // prevent constructor by default
    PlayerUIContainer& operator=(PlayerUIContainer const&);
    PlayerUIContainer(PlayerUIContainer const&);
    PlayerUIContainer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerUIContainer();

    MCAPI PlayerUIContainer(std::string const& name, bool customName, int size);

    MCAPI void load(class ListTag const& inventoryList, class SemVersion const& version);

    MCAPI std::unique_ptr<class ListTag> save() const;

    // NOLINTEND
};
