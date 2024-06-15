#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/FlushableEnv.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
// clang-format on

class FlushableStorageAreaEnv : public ::FlushableEnv {
public:
    // prevent constructor by default
    FlushableStorageAreaEnv& operator=(FlushableStorageAreaEnv const&);
    FlushableStorageAreaEnv(FlushableStorageAreaEnv const&);
    FlushableStorageAreaEnv();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FlushableStorageAreaEnv@@UEAA@XZ
    virtual ~FlushableStorageAreaEnv() = default;

    // vIndex: 20, symbol: ?flushToPermanentStorage@FlushableStorageAreaEnv@@UEAAXXZ
    virtual void flushToPermanentStorage();

    // symbol: ??0FlushableStorageAreaEnv@@QEAA@PEAVEnv@leveldb@@V?$shared_ptr@VFileStorageArea@Core@@@std@@@Z
    MCAPI FlushableStorageAreaEnv(leveldb::Env* env, std::shared_ptr<class Core::FileStorageArea> storageArea);

    // NOLINTEND
};
