#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/SimpleContainer.h"

class PlayerUIContainer : public ::SimpleContainer {
public:
    // prevent constructor by default
    PlayerUIContainer& operator=(PlayerUIContainer const&);
    PlayerUIContainer(PlayerUIContainer const&);
    PlayerUIContainer();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PlayerUIContainer@@UEAA@XZ
    virtual ~PlayerUIContainer();

    // vIndex: 25, symbol: __unk_vfn_25
    virtual void __unk_vfn_25();

    // vIndex: 26, symbol: __unk_vfn_26
    virtual void __unk_vfn_26();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // symbol: ??0PlayerUIContainer@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NH@Z
    MCAPI PlayerUIContainer(std::string const&, bool, int);

    // symbol: ?load@PlayerUIContainer@@QEAAXAEBVListTag@@AEBVSemVersion@@@Z
    MCAPI void load(class ListTag const&, class SemVersion const&);

    // symbol: ?save@PlayerUIContainer@@QEBA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class ListTag> save() const;

    // NOLINTEND
};
