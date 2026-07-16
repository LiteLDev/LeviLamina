#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/secure_storage/SecureStorage.h"

// auto generated forward declare list
// clang-format off
class ISecureStorageKeySystem;
namespace Core { class Path; }
namespace Core { class PathView; }
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
        // virtual functions
        // NOLINTBEGIN
        virtual bool getData(::std::string&, ::Core::Path);

        virtual void setData(::std::string const&, ::Core::Path);

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
        virtual bool getData(::std::string&, ::Core::Path) /*override*/;

        virtual void setData(::std::string const&, ::Core::Path) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk3dbac1;
    ::ll::UntypedStorage<8, 16> mUnk8a969d;
    ::ll::UntypedStorage<8, 8>  mUnk7832e5;
    ::ll::UntypedStorage<8, 64> mUnkd32604;
    ::ll::UntypedStorage<8, 64> mUnk356a0f;
    ::ll::UntypedStorage<8, 8>  mUnkf95aee;
    ::ll::UntypedStorage<8, 8>  mUnke454b5;
    ::ll::UntypedStorage<8, 8>  mUnk2e3cf8;
    ::ll::UntypedStorage<8, 8>  mUnk2b701a;
    ::ll::UntypedStorage<8, 32> mUnkebdbd6;
    // NOLINTEND

public:
    // prevent constructor by default
    FileSecureStorage& operator=(FileSecureStorage const&);
    FileSecureStorage(FileSecureStorage const&);
    FileSecureStorage();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~FileSecureStorage() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~FileSecureStorage() /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual bool add(::std::string const&, ::std::string const&) /*override*/;
#else // LL_PLAT_C
    virtual bool add(::std::string const& key, ::std::string const& value) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual bool addOrUpdate(::std::string const&, ::std::string const&) /*override*/;
#else // LL_PLAT_C
    virtual bool addOrUpdate(::std::string const& key, ::std::string const& value) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual bool remove(::std::string const&) /*override*/;
#else // LL_PLAT_C
    virtual bool remove(::std::string const& key) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual bool get(::std::string const&, ::std::string&) /*override*/;
#else // LL_PLAT_C
    virtual bool get(::std::string const& key, ::std::string& outValue) /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileSecureStorage(
        ::Core::PathView                    settingsPath,
        ::Core::PathView                    baseSettingsPath,
        ::ISecureStorageKeySystem*          sskSystem,
        ::Core::PathView                    userDataPath,
        ::FileSecureStorage::StorageSystem* storage
    );

#ifdef LL_PLAT_C
    MCNAPI bool _init(bool expectedFailure);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Core::PathView                    settingsPath,
        ::Core::PathView                    baseSettingsPath,
        ::ISecureStorageKeySystem*          sskSystem,
        ::Core::PathView                    userDataPath,
        ::FileSecureStorage::StorageSystem* storage
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
#ifdef LL_PLAT_C
    MCNAPI bool $add(::std::string const& key, ::std::string const& value);

    MCNAPI bool $addOrUpdate(::std::string const& key, ::std::string const& value);

    MCNAPI bool $remove(::std::string const& key);

    MCNAPI bool $get(::std::string const& key, ::std::string& outValue);
#endif


    // NOLINTEND
};
