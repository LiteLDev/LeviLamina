#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/ObjectiveRenderType.h"

class ObjectiveCriteria {
public:
    enum class ObjectiveRenderType : uchar {
        Integer = 0x0,
        Hearts  = 0x1,
    };

    std::string const         mName;
    bool const                mReadOnly;
    ObjectiveRenderType const mRenderType;

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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
