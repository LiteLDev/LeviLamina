#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FunctionAction {

public:
    // prevent constructor by default
    FunctionAction& operator=(FunctionAction const&) = delete;
    FunctionAction(FunctionAction const&)            = delete;
    FunctionAction()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?execute\@FunctionAction\@\@UEAAXAEAVServerLevel\@\@AEAVDimension\@\@\@Z
     */
    virtual void execute(class ServerLevel&, class Dimension&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?serialize\@FunctionAction\@\@UEAAXAEAVCompoundTag\@\@\@Z
     */
    virtual void serialize(class CompoundTag&); // NOLINT
    /**
     * @vftbl 3
     * @symbol ??8FunctionAction\@\@UEBA_NAEAVIRequestAction\@\@\@Z
     */
    virtual bool operator==(class IRequestAction&) const; // NOLINT
    /**
     * @symbol
     * ??0FunctionAction\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@2\@\@Z
     */
    MCAPI FunctionAction(std::string const&, std::unique_ptr<class CommandOrigin>); // NOLINT
    /**
     * @symbol ?isValidTag\@FunctionAction\@\@SA_NAEBVCompoundTag\@\@\@Z
     */
    MCAPI static bool isValidTag(class CompoundTag const&); // NOLINT
    /**
     * @symbol
     * ?load\@FunctionAction\@\@SA?AV?$unique_ptr\@VFunctionAction\@\@U?$default_delete\@VFunctionAction\@\@\@std\@\@\@std\@\@AEBVCompoundTag\@\@AEAVICommandOriginLoader\@\@\@Z
     */
    MCAPI static std::unique_ptr<class FunctionAction>
    load(class CompoundTag const&, class ICommandOriginLoader&); // NOLINT

    // private:
    /**
     * @symbol ?_printOriginInvalidError\@FunctionAction\@\@AEAAXAEAVServerLevel\@\@\@Z
     */
    MCAPI void _printOriginInvalidError(class ServerLevel&); // NOLINT
    /**
     * @symbol ?_printOutput\@FunctionAction\@\@AEAAXAEAVServerLevel\@\@H\@Z
     */
    MCAPI void _printOutput(class ServerLevel&, int); // NOLINT

private:
};
