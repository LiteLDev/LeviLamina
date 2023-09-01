#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class CommandBlockDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    CommandBlockDescription& operator=(CommandBlockDescription const&) = delete;
    CommandBlockDescription(CommandBlockDescription const&)            = delete;
    CommandBlockDescription()                                          = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@CommandBlockDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@CommandBlockDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1CommandBlockDescription@@UEAA@XZ
    MCVAPI ~CommandBlockDescription();

    // NOLINTEND
};
