#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IRequestAction {
public:
    // IRequestAction inner types define
    enum class RequestActionType : schar {
        FunctionAction           = 0x0,
        TestAction               = 0x1,
        StructureAnimationAction = 0x2,
    };

    RequestActionType mActionType;

public:
    // prevent constructor by default
    IRequestAction& operator=(IRequestAction const&) = delete;
    IRequestAction(IRequestAction const&)            = delete;
    IRequestAction()                                 = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?execute@FunctionAction@@UEAAXAEAVServerLevel@@AEAVDimension@@@Z
    virtual void execute(class ServerLevel&, class Dimension&) = 0;

    // vIndex: 2, symbol: ?serialize@IRequestAction@@UEAAXAEAVCompoundTag@@@Z
    virtual void serialize(class CompoundTag&);

    // vIndex: 3, symbol: ??8IRequestAction@@UEBA_NAEAV0@@Z
    virtual bool operator==(class IRequestAction&) const;

    // symbol: ??1IRequestAction@@UEAA@XZ
    MCVAPI ~IRequestAction();

    // symbol: ??0IRequestAction@@QEAA@AEBW4RequestActionType@0@@Z
    MCAPI IRequestAction(::IRequestAction::RequestActionType const&);

    // symbol: ?isValidTag@IRequestAction@@SA_NAEBVCompoundTag@@@Z
    MCAPI static bool isValidTag(class CompoundTag const&);

    // NOLINTEND
};
