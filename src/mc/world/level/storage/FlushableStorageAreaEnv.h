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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk35823d;
    // NOLINTEND

public:
    // prevent constructor by default
    FlushableStorageAreaEnv& operator=(FlushableStorageAreaEnv const&);
    FlushableStorageAreaEnv(FlushableStorageAreaEnv const&);
    FlushableStorageAreaEnv();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FlushableStorageAreaEnv() /*override*/ = default;

    virtual void flushToPermanentStorage() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FlushableStorageAreaEnv(::leveldb::Env* env, ::std::shared_ptr<::Core::FileStorageArea> storageArea);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::leveldb::Env* env, ::std::shared_ptr<::Core::FileStorageArea> storageArea);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $flushToPermanentStorage();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
