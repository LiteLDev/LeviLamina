#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IRequestAction {
public:
    // IRequestAction inner types declare
    // clang-format off

    // clang-format on

    // IRequestAction inner types define
    enum class RequestActionType {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IREQUESTACTION
public:
    IRequestAction& operator=(IRequestAction const&) = delete;
    IRequestAction(IRequestAction const&)            = delete;
    IRequestAction()                                 = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@TestAction\@\@UEAAXAEAVServerLevel\@\@AEAVDimension\@\@\@Z
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
};
