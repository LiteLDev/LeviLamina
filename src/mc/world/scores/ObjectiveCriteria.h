#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/ObjectiveRenderType.h"

class ObjectiveCriteria {
public:
    // prevent constructor by default
    ObjectiveCriteria& operator=(ObjectiveCriteria const&);
    ObjectiveCriteria(ObjectiveCriteria const&);
    ObjectiveCriteria();

public:
    // NOLINTBEGIN
    MCAPI ObjectiveCriteria(std::string const& name, bool readOnly, ::ObjectiveRenderType renderType);

    MCAPI std::string const& getName() const;

    MCAPI bool isReadOnly() const;

    MCAPI static std::unique_ptr<class ObjectiveCriteria> deserialize(class CompoundTag const& dataTag);

    MCAPI static std::unique_ptr<class CompoundTag> serialize(class ObjectiveCriteria const& toSave);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(std::string const& name, bool readOnly, ::ObjectiveRenderType renderType);

    // NOLINTEND
};
