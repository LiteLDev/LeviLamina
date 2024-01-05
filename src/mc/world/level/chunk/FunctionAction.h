#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/IRequestAction.h"

class FunctionAction : public ::IRequestAction {
public:
    // prevent constructor by default
    FunctionAction& operator=(FunctionAction const&);
    FunctionAction(FunctionAction const&);
    FunctionAction();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FunctionAction@@UEAA@XZ
    virtual ~FunctionAction() = default;

    // vIndex: 1, symbol: ?execute@FunctionAction@@UEAAXAEAVServerLevel@@AEAVDimension@@@Z
    virtual void execute(class ServerLevel& level, class Dimension& dimension);

    // vIndex: 2, symbol: ?serialize@FunctionAction@@UEAAXAEAVCompoundTag@@@Z
    virtual void serialize(class CompoundTag& tag);

    // vIndex: 3, symbol: ??8FunctionAction@@UEBA_NAEBVIRequestAction@@@Z
    virtual bool operator==(class IRequestAction const& action) const;

    // symbol:
    // ??0FunctionAction@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@2@@Z
    MCAPI FunctionAction(std::string const& filePath, std::unique_ptr<class CommandOrigin>);

    // symbol: ?isValidTag@FunctionAction@@SA_NAEBVCompoundTag@@@Z
    MCAPI static bool isValidTag(class CompoundTag const& tag);

    // symbol:
    // ?load@FunctionAction@@SA?AV?$unique_ptr@VFunctionAction@@U?$default_delete@VFunctionAction@@@std@@@std@@AEBVCompoundTag@@AEAVICommandOriginLoader@@@Z
    MCAPI static std::unique_ptr<class FunctionAction>
    load(class CompoundTag const& tag, class ICommandOriginLoader& loader);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_printOriginInvalidError@FunctionAction@@AEAAXAEAVServerLevel@@@Z
    MCAPI void _printOriginInvalidError(class ServerLevel& level);

    // symbol: ?_printOutput@FunctionAction@@AEAAXAEAVServerLevel@@H@Z
    MCAPI void _printOutput(class ServerLevel& level, int successCount);

    // NOLINTEND
};
