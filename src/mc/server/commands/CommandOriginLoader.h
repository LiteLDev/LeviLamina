#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ICommandOriginLoader.h"

class CommandOriginLoader : public ::ICommandOriginLoader {
public:
    // prevent constructor by default
    CommandOriginLoader& operator=(CommandOriginLoader const&);
    CommandOriginLoader(CommandOriginLoader const&);
    CommandOriginLoader();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?load@CommandOriginLoader@@UEAA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@AEBVCompoundTag@@@Z
    virtual std::unique_ptr<class CommandOrigin> load(class CompoundTag const&);

    // symbol: ??1CommandOriginLoader@@UEAA@XZ
    MCVAPI ~CommandOriginLoader();

    // symbol: ??0CommandOriginLoader@@QEAA@AEAVServerLevel@@@Z
    MCAPI explicit CommandOriginLoader(class ServerLevel&);

    // symbol:
    // ?load@CommandOriginLoader@@SA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@AEBVCompoundTag@@AEAVServerLevel@@@Z
    MCAPI static std::unique_ptr<class CommandOrigin> load(class CompoundTag const&, class ServerLevel&);

    // NOLINTEND
};
