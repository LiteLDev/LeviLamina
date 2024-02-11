#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/StackString.h"
#include "mc/deps/core/secure_storage/SecureStorage.h"

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
        // vIndex: 0, symbol:
        // ?getData@StorageSystem@FileSecureStorage@@UEAA_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VPath@Core@@@Z
        virtual bool getData(std::string& output, class Core::Path path);

        // vIndex: 1, symbol:
        // ?setData@StorageSystem@FileSecureStorage@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VPath@Core@@@Z
        virtual void setData(std::string const& data, class Core::Path path);

        // vIndex: 2, symbol: __gen_??1StorageSystem@FileSecureStorage@@UEAA@XZ
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
        // vIndex: 0, symbol:
        // ?getData@FileStorageSystem@FileSecureStorage@@UEAA_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VPath@Core@@@Z
        virtual bool getData(std::string& output, class Core::Path path);

        // vIndex: 1, symbol:
        // ?setData@FileStorageSystem@FileSecureStorage@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VPath@Core@@@Z
        virtual void setData(std::string const& data, class Core::Path path);

        // vIndex: 2, symbol: __gen_??1FileStorageSystem@FileSecureStorage@@UEAA@XZ
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
    // vIndex: 0, symbol: __gen_??1FileSecureStorage@@UEAA@XZ
    virtual ~FileSecureStorage() = default;

    // vIndex: 1, symbol:
    // ?add@FileSecureStorage@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    virtual bool add(std::string const& key, std::string const& value);

    // vIndex: 2, symbol:
    // ?addOrUpdate@FileSecureStorage@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    virtual bool addOrUpdate(std::string const& key, std::string const& value);

    // vIndex: 3, symbol:
    // ?remove@FileSecureStorage@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool remove(std::string const& key);

    // vIndex: 4, symbol:
    // ?get@FileSecureStorage@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV23@@Z
    virtual bool get(std::string const& key, std::string& outValue);

    // symbol:
    // ??0FileSecureStorage@@QEAA@AEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBV?$PathBuffer@V?$StackString@D$0EAA@@Core@@@2@PEAVISecureStorageKeySystem@@AEBVPath@2@PEAVStorageSystem@0@@Z
    MCAPI FileSecureStorage(
        class Core::PathBuffer<std::string> const&,
        class Core::PathBuffer<class Core::StackString<char, 1024>> const&,
        class ISecureStorageKeySystem*,
        class Core::Path const&,
        class FileSecureStorage::StorageSystem* storage
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_init@FileSecureStorage@@IEAA_N_N@Z
    MCAPI bool _init(bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_contentKeyObfuscator@FileSecureStorage@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@0@Z
    MCAPI std::string _contentKeyObfuscator(std::string const&, std::string const& identifier);

    // symbol: ?_getSecureStorageKey@FileSecureStorage@@AEBA?AVSecureStorageKey@@XZ
    MCAPI class SecureStorageKey _getSecureStorageKey() const;

    // symbol:
    // ?_initalizeSymmetricEncyrption@FileSecureStorage@@AEAAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI void _initalizeSymmetricEncyrption(std::string& symmetricKey, bool force);

    // symbol: ?_rebuildSecureStorageFile@FileSecureStorage@@AEAAXXZ
    MCAPI void _rebuildSecureStorageFile();

    // NOLINTEND
};
