/**
 * @file  FunctionAction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @vftbl  1
     * @symbol  ?execute\@FunctionAction\@\@UEAAXAEAVServerLevel\@\@AEAVDimension\@\@\@Z
     */
    virtual void execute(class ServerLevel &, class Dimension &);
    /**
     * @vftbl  2
     * @symbol  ?serialize\@FunctionAction\@\@UEAAXAEAVCompoundTag\@\@\@Z
     */
    virtual void serialize(class CompoundTag &);
    /**
     * @vftbl  3
     * @symbol  ??8FunctionAction\@\@UEBA_NAEAVIRequestAction\@\@\@Z
     */
    virtual bool operator==(class IRequestAction &) const;
    /**
     * @symbol  ??0FunctionAction\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@2\@\@Z
     */
    MCAPI FunctionAction(std::string const &, std::unique_ptr<class CommandOrigin>);
    /**
     * @symbol  ?isValidTag\@FunctionAction\@\@SA_NAEBVCompoundTag\@\@\@Z
     */
    MCAPI static bool isValidTag(class CompoundTag const &);
    /**
     * @symbol  ?load\@FunctionAction\@\@SA?AV?$unique_ptr\@VFunctionAction\@\@U?$default_delete\@VFunctionAction\@\@\@std\@\@\@std\@\@AEBVCompoundTag\@\@AEAVICommandOriginLoader\@\@\@Z
     */
    MCAPI static std::unique_ptr<class FunctionAction> load(class CompoundTag const &, class ICommandOriginLoader &);

//private:
    /**
     * @symbol  ?_printOriginInvalidError\@FunctionAction\@\@AEAAXAEAVServerLevel\@\@\@Z
     */
    MCAPI void _printOriginInvalidError(class ServerLevel &);
    /**
     * @symbol  ?_printOutput\@FunctionAction\@\@AEAAXAEAVServerLevel\@\@H\@Z
     */
    MCAPI void _printOutput(class ServerLevel &, int);

private:

};