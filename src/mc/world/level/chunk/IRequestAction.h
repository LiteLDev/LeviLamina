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
    // vIndex: 0, symbol: ??1IRequestAction@@UEAA@XZ
    virtual ~IRequestAction();

    // vIndex: 1, symbol: ?execute@StructureAnimationAction@@UEAAXAEAVServerLevel@@AEAVDimension@@@Z
    virtual void execute(class ServerLevel&, class Dimension&) = 0;

    // vIndex: 2, symbol: ?serialize@IRequestAction@@UEAAXAEAVCompoundTag@@@Z
    virtual void serialize(class CompoundTag&);

    // vIndex: 3, symbol: ??8IRequestAction@@UEBA_NAEAV0@@Z
    virtual bool operator==(class IRequestAction&) const;

    // symbol: ??0IRequestAction@@QEAA@AEBW4RequestActionType@0@@Z
    MCAPI explicit IRequestAction(::IRequestAction::RequestActionType const&);

    // symbol: ?isValidTag@IRequestAction@@SA_NAEBVCompoundTag@@@Z
    MCAPI static bool isValidTag(class CompoundTag const&);

    // NOLINTEND
};
