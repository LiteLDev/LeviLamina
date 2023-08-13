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
    class FileStorageSystem;
    class StorageSystem;
    // clang-format on

    // FileSecureStorage inner types define

    class StorageSystem {

    public:
        // prevent constructor by default
        StorageSystem& operator=(StorageSystem const&) = delete;
        StorageSystem(StorageSystem const&)            = delete;
        StorageSystem()                                = delete;

    public:
        // NOLINTBEGIN
        /**
         * @vftbl 0
         * @symbol
         * ?getData\@StorageSystem\@FileSecureStorage\@\@UEAA_NAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VPath\@Core\@\@\@Z
         */
        virtual bool getData(std::string&, class Core::Path);
        /**
         * @vftbl 1
         * @symbol
         * ?setData\@StorageSystem\@FileSecureStorage\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VPath\@Core\@\@\@Z
         */
        virtual void setData(std::string const&, class Core::Path);
        // NOLINTEND
    };

    class FileStorageSystem : public ::FileSecureStorage::StorageSystem {

    public:
        // prevent constructor by default
        FileStorageSystem& operator=(FileStorageSystem const&) = delete;
        FileStorageSystem(FileStorageSystem const&)            = delete;
        FileStorageSystem()                                    = delete;

    public:
        // NOLINTBEGIN
        /**
         * @vftbl 0
         * @symbol
         * ?getData\@FileStorageSystem\@FileSecureStorage\@\@UEAA_NAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VPath\@Core\@\@\@Z
         */
        virtual bool getData(std::string&, class Core::Path);
        /**
         * @vftbl 1
         * @symbol
         * ?setData\@FileStorageSystem\@FileSecureStorage\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@VPath\@Core\@\@\@Z
         */
        virtual void setData(std::string const&, class Core::Path);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    FileSecureStorage& operator=(FileSecureStorage const&) = delete;
    FileSecureStorage(FileSecureStorage const&)            = delete;
    FileSecureStorage()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?add\@FileSecureStorage\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    virtual bool add(std::string const&, std::string const&);
    /**
     * @vftbl 2
     * @symbol
     * ?addOrUpdate\@FileSecureStorage\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    virtual bool addOrUpdate(std::string const&, std::string const&);
    /**
     * @vftbl 3
     * @symbol
     * ?remove\@FileSecureStorage\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool remove(std::string const&);
    /**
     * @vftbl 4
     * @symbol
     * ?get\@FileSecureStorage\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV23\@\@Z
     */
    virtual bool get(std::string const&, std::string&);
    /**
     * @symbol
     * ??0FileSecureStorage\@\@QEAA\@AEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBV?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@2\@PEAVISecureStorageKeySystem\@\@AEBVPath\@2\@PEAVStorageSystem\@0\@\@Z
     */
    MCAPI
    FileSecureStorage(class Core::PathBuffer<std::string> const&, class Core::PathBuffer<class Core::StackString<char, 1024>> const&, class ISecureStorageKeySystem*, class Core::Path const&, class FileSecureStorage::StorageSystem*);
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_init\@FileSecureStorage\@\@IEAA_N_N\@Z
     */
    MCAPI bool _init(bool);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_contentKeyObfuscator\@FileSecureStorage\@\@AEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@0\@Z
     */
    MCAPI std::string _contentKeyObfuscator(std::string const&, std::string const&);
    /**
     * @symbol ?_getSecureStorageKey\@FileSecureStorage\@\@AEBA?AVSecureStorageKey\@\@XZ
     */
    MCAPI class SecureStorageKey _getSecureStorageKey() const;
    /**
     * @symbol
     * ?_initalizeSymmetricEncyrption\@FileSecureStorage\@\@AEAAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void _initalizeSymmetricEncyrption(std::string&, bool);
    /**
     * @symbol ?_rebuildSecureStorageFile\@FileSecureStorage\@\@AEAAXXZ
     */
    MCAPI void _rebuildSecureStorageFile();
    // NOLINTEND
};
