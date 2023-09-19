#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class AnimationScriptsDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    AnimationScriptsDescription& operator=(AnimationScriptsDescription const&);
    AnimationScriptsDescription(AnimationScriptsDescription const&);
    AnimationScriptsDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getJsonName@AnimationScriptsDescription@@UEBAPEBDXZ
    virtual char const* getJsonName() const;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?deserializeData@AnimationScriptsDescription@@UEAAXUDeserializeDataParams@@@Z
    virtual void deserializeData(struct DeserializeDataParams);

    // symbol: ??1AnimationScriptsDescription@@UEAA@XZ
    MCVAPI ~AnimationScriptsDescription();

    // NOLINTEND
};
