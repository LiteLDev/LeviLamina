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
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~AnimationScriptsDescription();

    // vIndex: 2
    virtual void deserializeData(struct DeserializeDataParams nonConstDeserializeDataParams);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI void deserializeData$(struct DeserializeDataParams nonConstDeserializeDataParams);

    MCAPI char const* getJsonName$() const;

    // NOLINTEND
};
