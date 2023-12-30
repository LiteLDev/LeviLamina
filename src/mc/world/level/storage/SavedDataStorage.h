#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SavedData;
class LevelStorage;

class SavedDataStorage {
public:
    // prevent constructor by default
    SavedDataStorage& operator=(SavedDataStorage const&);
    SavedDataStorage(SavedDataStorage const&);
    SavedDataStorage();

    LevelStorage*                               levelStorage; // this+0x8
    std::unordered_map<std::string, SavedData*> savedDatas;   // this+0x10

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SavedDataStorage@@UEAA@XZ
    virtual ~SavedDataStorage();

    // symbol:
    // ?loadAndSet@SavedDataStorage@@QEAA_NAEAVSavedData@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool loadAndSet(class SavedData& inoutData, std::string const& id);

    // symbol: ?save@SavedDataStorage@@QEAAXXZ
    MCAPI void save();

    // symbol:
    // ?set@SavedDataStorage@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVSavedData@@@Z
    MCAPI void set(std::string const& id, class SavedData& data);

    // NOLINTEND
};
