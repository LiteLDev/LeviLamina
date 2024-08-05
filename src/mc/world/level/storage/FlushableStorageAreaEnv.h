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
    // vIndex: 0
    virtual ~FlushableStorageAreaEnv() = default;

    // vIndex: 20
    virtual void flushToPermanentStorage();

    MCAPI FlushableStorageAreaEnv(leveldb::Env* env, std::shared_ptr<class Core::FileStorageArea> storageArea);

    // NOLINTEND
};
