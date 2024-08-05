#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IRequestAction {
public:
    // IRequestAction inner types define
    enum class RequestActionType {};

public:
    // prevent constructor by default
    IRequestAction& operator=(IRequestAction const&);
    IRequestAction(IRequestAction const&);
    IRequestAction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IRequestAction();

    // vIndex: 1
    virtual void execute(class ServerLevel& level, class Dimension& dimension) = 0;

    // vIndex: 2
    virtual void serialize(class CompoundTag& tag);

    // vIndex: 3
    virtual bool operator==(class IRequestAction const& action) const;

    MCAPI explicit IRequestAction(::IRequestAction::RequestActionType const& actionType);

    MCAPI static bool isValidTag(class CompoundTag const& tag);

    // NOLINTEND
};
