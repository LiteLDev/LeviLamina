#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/secure_storage/SecureStorage.h"
#include "mc/deps/core/string/StackString.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class FileSecureStorage : public ::SecureStorage {
public:
    // FileSecureStorage inner types declare
    // clang-format off
    class StorageSystem;
    class FileStorageSystem;
    // clang-format on

    // FileSecureStorage inner types define
    class StorageSystem {
    public:
        // prevent constructor by default
        StorageSystem& operator=(StorageSystem const&);
        StorageSystem(StorageSystem const&);
        StorageSystem();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual bool getData(std::string& output, class Core::Path path);

        // vIndex: 1
        virtual void setData(std::string const& data, class Core::Path path);

        // vIndex: 2
        virtual ~StorageSystem() = default;

        // NOLINTEND
    };

    class FileStorageSystem : public ::FileSecureStorage::StorageSystem {
    public:
        // prevent constructor by default
        FileStorageSystem& operator=(FileStorageSystem const&);
        FileStorageSystem(FileStorageSystem const&);
        FileStorageSystem();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual bool getData(std::string& output, class Core::Path path);

        // vIndex: 1
        virtual void setData(std::string const& data, class Core::Path path);

        // vIndex: 2
        virtual ~FileStorageSystem() = default;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    FileSecureStorage& operator=(FileSecureStorage const&);
    FileSecureStorage(FileSecureStorage const&);
    FileSecureStorage();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileSecureStorage() = default;

    // vIndex: 1
    virtual bool add(std::string const& key, std::string const& value);

    // vIndex: 2
    virtual bool addOrUpdate(std::string const& key, std::string const& value);

    // vIndex: 3
    virtual bool remove(std::string const& key);

    // vIndex: 4
    virtual bool get(std::string const& key, std::string& outValue);

    MCAPI FileSecureStorage(
        class Core::PathBuffer<std::string> const&                         settingsPath,
        class Core::PathBuffer<class Core::StackString<char, 1024>> const& baseSettingsPath,
        class ISecureStorageKeySystem*                                     sskSystem,
        class Core::Path const&                                            userDataPath,
        class FileSecureStorage::StorageSystem*                            storage
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _init(bool expectedFailure);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::string _contentKeyObfuscator(std::string const& codedData, std::string const& identifier);

    MCAPI class SecureStorageKey _getSecureStorageKey() const;

    MCAPI void _initalizeSymmetricEncyrption(std::string& symmetricKey, bool force);

    MCAPI void _rebuildSecureStorageFile();

    // NOLINTEND
};
