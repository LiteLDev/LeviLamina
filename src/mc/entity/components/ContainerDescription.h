#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

struct ContainerDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    ContainerDescription& operator=(ContainerDescription const&);
    ContainerDescription(ContainerDescription const&);
    ContainerDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@ContainerDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: ??1ContainerDescription@@UEAA@XZ
    virtual ~ContainerDescription();

    // vIndex: 2, symbol: ?deserializeData@ContainerDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // NOLINTEND
};
