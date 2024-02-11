#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSaver.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class BasicSaver; }
// clang-format on

class NBTSaver : public ::cereal::BasicSaver {
public:
    // prevent constructor by default
    NBTSaver& operator=(NBTSaver const&);
    NBTSaver(NBTSaver const&);
    NBTSaver();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1NBTSaver@@UEAA@XZ
    virtual ~NBTSaver();

    // symbol: ?getSavedCompoundTag@NBTSaver@@QEAA?AVCompoundTag@@XZ
    MCAPI class CompoundTag getSavedCompoundTag();

    // symbol: ?getSavedTag@NBTSaver@@QEAA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class Tag> getSavedTag();

    // NOLINTEND
};
