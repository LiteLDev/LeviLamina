/**
 * @file  FileSecureStorage.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FileSecureStorage.
 *
 */
class FileSecureStorage {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILESECURESTORAGE
public:
    class FileSecureStorage& operator=(class FileSecureStorage const &) = delete;
    FileSecureStorage(class FileSecureStorage const &) = delete;
    FileSecureStorage() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FileSecureStorage();
    /**
     * @hash   -1860497758
     * @vftbl  1
     * @symbol  ?add\@FileSecureStorage\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    virtual bool add(std::string const &, std::string const &);
    /**
     * @hash   1991040366
     * @vftbl  2
     * @symbol  ?addOrUpdate\@FileSecureStorage\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    virtual bool addOrUpdate(std::string const &, std::string const &);
    /**
     * @hash   1768321335
     * @vftbl  3
     * @symbol  ?remove\@FileSecureStorage\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool remove(std::string const &);
    /**
     * @hash   -1735455638
     * @vftbl  4
     * @symbol  ?get\@FileSecureStorage\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV23\@\@Z
     */
    virtual bool get(std::string const &, std::string &);
    /**
     * @hash   -29864892
     * @symbol  ??0FileSecureStorage\@\@QEAA\@AEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBV?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@2\@PEAVISecureStorageKeySystem\@\@AEBVPath\@2\@PEAVStorageSystem\@0\@\@Z
     */
    MCAPI FileSecureStorage(class Core::PathBuffer<std::string> const &, class Core::PathBuffer<class Core::StackString<char, 1024>> const &, class ISecureStorageKeySystem *, class Core::Path const &, class FileSecureStorage::StorageSystem *);

//protected:
    /**
     * @hash   -2063420608
     * @symbol  ?_init\@FileSecureStorage\@\@IEAA_N_N\@Z
     */
    MCAPI bool _init(bool);

//private:
    /**
     * @hash   174205869
     * @symbol  ?_contentKeyObfuscator\@FileSecureStorage\@\@AEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@0\@Z
     */
    MCAPI std::string _contentKeyObfuscator(std::string const &, std::string const &);
    /**
     * @hash   1537320563
     * @symbol  ?_getSecureStorageKey\@FileSecureStorage\@\@AEBA?AVSecureStorageKey\@\@XZ
     */
    MCAPI class SecureStorageKey _getSecureStorageKey() const;
    /**
     * @hash   -579297913
     * @symbol  ?_initalizeSymmetricEncyrption\@FileSecureStorage\@\@AEAAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI void _initalizeSymmetricEncyrption(std::string &, bool);
    /**
     * @hash   -1583791752
     * @symbol  ?_rebuildSecureStorageFile\@FileSecureStorage\@\@AEAAXXZ
     */
    MCAPI void _rebuildSecureStorageFile();

protected:

private:

};