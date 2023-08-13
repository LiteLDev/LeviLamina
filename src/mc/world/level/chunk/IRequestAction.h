#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IRequestAction {
public:
    // IRequestAction inner types define
    enum class RequestActionType : char {
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
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@FunctionAction\@\@UEAAXAEAVServerLevel\@\@AEAVDimension\@\@\@Z
     */
    virtual void execute(class ServerLevel&, class Dimension&) = 0;
    /**
     * @vftbl 2
     * @symbol ?serialize\@IRequestAction\@\@UEAAXAEAVCompoundTag\@\@\@Z
     */
    virtual void serialize(class CompoundTag&);
    /**
     * @vftbl 3
     * @symbol ??8IRequestAction\@\@UEBA_NAEAV0\@\@Z
     */
    virtual bool operator==(class IRequestAction&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IREQUESTACTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IRequestAction();
#endif
    /**
     * @symbol ??0IRequestAction\@\@QEAA\@AEBW4RequestActionType\@0\@\@Z
     */
    MCAPI IRequestAction(enum class IRequestAction::RequestActionType const&);
    /**
     * @symbol ?isValidTag\@IRequestAction\@\@SA_NAEBVCompoundTag\@\@\@Z
     */
    MCAPI static bool isValidTag(class CompoundTag const&);
    // NOLINTEND
};
