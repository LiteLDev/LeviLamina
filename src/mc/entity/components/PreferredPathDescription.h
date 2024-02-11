#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

struct PreferredPathDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    PreferredPathDescription& operator=(PreferredPathDescription const&);
    PreferredPathDescription(PreferredPathDescription const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@PreferredPathDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: ??1PreferredPathDescription@@UEAA@XZ
    virtual ~PreferredPathDescription();

    // vIndex: 2, symbol: ?deserializeData@PreferredPathDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // symbol: ??0PreferredPathDescription@@QEAA@XZ
    MCAPI PreferredPathDescription();

    // NOLINTEND
};
