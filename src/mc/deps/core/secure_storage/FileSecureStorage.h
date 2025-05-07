#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/secure_storage/SecureStorage.h"
#include "mc/deps/core/string/BasicStackString.h"

// auto generated forward declare list
// clang-format off
class ISecureStorageKeySystem;
class SecureStorageKey;
namespace Core { class Path; }
// clang-format on

class FileSecureStorage : public ::SecureStorage {
public:
    // FileSecureStorage inner types declare
    // clang-format off
    class FileStorageSystem;
    class StorageSystem;
    // clang-format on

    // FileSecureStorage inner types define
    class StorageSystem {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual bool getData(::std::string&, ::Core::Path);

        // vIndex: 1
        virtual void setData(::std::string const&, ::Core::Path);

        // vIndex: 2
        virtual ~StorageSystem() = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    class FileStorageSystem : public ::FileSecureStorage::StorageSystem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 80> mUnkabc774;
        // NOLINTEND

    public:
        // prevent constructor by default
        FileStorageSystem& operator=(FileStorageSystem const&);
        FileStorageSystem(FileStorageSystem const&);
        FileStorageSystem();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual bool getData(::std::string& output, ::Core::Path path) /*override*/;

        // vIndex: 1
        virtual void setData(::std::string const& data, ::Core::Path path) /*override*/;

        // vIndex: 2
        virtual ~FileStorageSystem() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI bool $getData(::std::string& output, ::Core::Path path);

        MCNAPI void $setData(::std::string const& data, ::Core::Path path);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk3dbac1;
    ::ll::UntypedStorage<8, 16> mUnk8a969d;
    ::ll::UntypedStorage<8, 8>  mUnk7832e5;
    ::ll::UntypedStorage<8, 64> mUnk691ea8;
    ::ll::UntypedStorage<8, 64> mUnk36a680;
    ::ll::UntypedStorage<8, 8>  mUnkf95aee;
    ::ll::UntypedStorage<8, 8>  mUnk7dfe40;
    ::ll::UntypedStorage<8, 8>  mUnkd82ddc;
    ::ll::UntypedStorage<8, 8>  mUnk9dc477;
    ::ll::UntypedStorage<8, 32> mUnk9ecaf6;
    // NOLINTEND

public:
    // prevent constructor by default
    FileSecureStorage& operator=(FileSecureStorage const&);
    FileSecureStorage(FileSecureStorage const&);
    FileSecureStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileSecureStorage() /*override*/;

    // vIndex: 1
    virtual bool add(::std::string const& key, ::std::string const& value) /*override*/;

    // vIndex: 2
    virtual bool addOrUpdate(::std::string const& key, ::std::string const& value) /*override*/;

    // vIndex: 3
    virtual bool remove(::std::string const& key) /*override*/;

    // vIndex: 4
    virtual bool get(::std::string const& key, ::std::string& outValue) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileSecureStorage(
        ::Core::PathBuffer<::std::string> const&                        settingsPath,
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& sskSystem,
        ::ISecureStorageKeySystem*                                      baseSettingsPath,
        ::Core::Path const&                                             userDataPath,
        ::FileSecureStorage::StorageSystem*                             storage
    );

    MCNAPI ::std::string _contentKeyObfuscator(::std::string const& codedData, ::std::string const& identifier);

    MCNAPI ::SecureStorageKey _getSecureStorageKey() const;

    MCNAPI bool _init(bool expectedFailure);

    MCNAPI void _initalizeSymmetricEncyrption(::std::string& symmetricKey, bool force);

    MCNAPI void _rebuildSecureStorageFile();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Core::PathBuffer<::std::string> const&                        settingsPath,
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& sskSystem,
        ::ISecureStorageKeySystem*                                      baseSettingsPath,
        ::Core::Path const&                                             userDataPath,
        ::FileSecureStorage::StorageSystem*                             storage
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $add(::std::string const& key, ::std::string const& value);

    MCNAPI bool $addOrUpdate(::std::string const& key, ::std::string const& value);

    MCNAPI bool $remove(::std::string const& key);

    MCNAPI bool $get(::std::string const& key, ::std::string& outValue);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
