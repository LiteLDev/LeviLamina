/**
 * @file  FunctionAction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FunctionAction.
 *
 */
class FunctionAction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FUNCTIONACTION
public:
    class FunctionAction& operator=(class FunctionAction const &) = delete;
    FunctionAction(class FunctionAction const &) = delete;
    FunctionAction() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FunctionAction();
    /**
     * @hash   -1599910007
     * @vftbl  1
     * @symbol  ?execute\@FunctionAction\@\@UEAAXAEAVServerLevel\@\@AEAVDimension\@\@\@Z
     */
    virtual void execute(class ServerLevel &, class Dimension &);
    /**
     * @hash   1743177300
     * @vftbl  2
     * @symbol  ?serialize\@FunctionAction\@\@UEAAXAEAVCompoundTag\@\@\@Z
     */
    virtual void serialize(class CompoundTag &);
    /**
     * @hash   -1548454165
     * @vftbl  3
     * @symbol  ??8FunctionAction\@\@UEBA_NAEAVIRequestAction\@\@\@Z
     */
    virtual bool operator==(class IRequestAction &) const;
    /**
     * @hash   542760995
     * @symbol  ??0FunctionAction\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@2\@\@Z
     */
    MCAPI FunctionAction(std::string const &, std::unique_ptr<class CommandOrigin>);
    /**
     * @hash   775544751
     * @symbol  ?isValidTag\@FunctionAction\@\@SA_NAEBVCompoundTag\@\@\@Z
     */
    MCAPI static bool isValidTag(class CompoundTag const &);
    /**
     * @hash   831779754
     * @symbol  ?load\@FunctionAction\@\@SA?AV?$unique_ptr\@VFunctionAction\@\@U?$default_delete\@VFunctionAction\@\@\@std\@\@\@std\@\@AEBVCompoundTag\@\@AEAVICommandOriginLoader\@\@\@Z
     */
    MCAPI static std::unique_ptr<class FunctionAction> load(class CompoundTag const &, class ICommandOriginLoader &);

//private:
    /**
     * @hash   2020860296
     * @symbol  ?_printOriginInvalidError\@FunctionAction\@\@AEAAXAEAVServerLevel\@\@\@Z
     */
    MCAPI void _printOriginInvalidError(class ServerLevel &);
    /**
     * @hash   -214017727
     * @symbol  ?_printOutput\@FunctionAction\@\@AEAAXAEAVServerLevel\@\@H\@Z
     */
    MCAPI void _printOutput(class ServerLevel &, int);

private:

};