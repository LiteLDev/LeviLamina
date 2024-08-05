#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EncryptedProxyEnv {
public:
    // prevent constructor by default
    EncryptedProxyEnv& operator=(EncryptedProxyEnv const&);
    EncryptedProxyEnv(EncryptedProxyEnv const&);
    EncryptedProxyEnv();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EncryptedProxyEnv() = default;

    // vIndex: 1
    virtual leveldb::Status NewSequentialFile(std::string const& f, leveldb::SequentialFile** r);

    // vIndex: 2
    virtual leveldb::Status NewRandomAccessFile(std::string const& f, leveldb::RandomAccessFile** r);

    // vIndex: 3
    virtual leveldb::Status NewWritableFile(std::string const& f, leveldb::WritableFile** r);

    // vIndex: 7
    virtual leveldb::Status DeleteFileA(std::string const&);

    // vIndex: 11
    virtual leveldb::Status RenameFile(std::string const& from, std::string const& to);

    // NOLINTEND
};
