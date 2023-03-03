/**
 * @file  IRequestAction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IRequestAction.
 *
 */
class IRequestAction {

#define AFTER_EXTRA
// Add Member There
public:
enum class RequestActionType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IREQUESTACTION
public:
    class IRequestAction& operator=(class IRequestAction const &) = delete;
    IRequestAction(class IRequestAction const &) = delete;
    IRequestAction() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~IRequestAction();
    /**
     * @vftbl  1
     * @symbol  ?execute\@TestAction\@\@UEAAXAEAVServerLevel\@\@AEAVDimension\@\@\@Z
     */
    virtual void execute(class ServerLevel &, class Dimension &) = 0;
    /**
     * @vftbl  2
     * @symbol  ?serialize\@IRequestAction\@\@UEAAXAEAVCompoundTag\@\@\@Z
     */
    virtual void serialize(class CompoundTag &);
    /**
     * @vftbl  3
     * @symbol  ??8IRequestAction\@\@UEBA_NAEAV0\@\@Z
     */
    virtual bool operator==(class IRequestAction &) const;
    /**
     * @symbol  ??0IRequestAction\@\@QEAA\@AEBW4RequestActionType\@0\@\@Z
     */
    MCAPI IRequestAction(enum class IRequestAction::RequestActionType const &);
    /**
     * @symbol  ?isValidTag\@IRequestAction\@\@SA_NAEBVCompoundTag\@\@\@Z
     */
    MCAPI static bool isValidTag(class CompoundTag const &);

};