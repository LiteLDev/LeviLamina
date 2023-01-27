/**
 * @file  ExternalFileLevelStorageSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Core.hpp"
#include "../../Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ExternalFileLevelStorageSource.
 *
 */
class ExternalFileLevelStorageSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXTERNALFILELEVELSTORAGESOURCE
public:
    class ExternalFileLevelStorageSource& operator=(class ExternalFileLevelStorageSource const &) = delete;
    ExternalFileLevelStorageSource(class ExternalFileLevelStorageSource const &) = delete;
    ExternalFileLevelStorageSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ExternalFileLevelStorageSource();
    /**
     * @hash   2136261008
     * @vftbl  1
     * @symbol  ?getName\@ExternalFileLevelStorageSource\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   -938382430
     * @vftbl  2
     * @symbol  ?getLevelData\@ExternalFileLevelStorageSource\@\@UEBA?AVLevelData\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual class LevelData getLevelData(std::string const &) const;
    /**
     * @hash   87694956
     * @vftbl  3
     * @symbol  ?getLevelData\@ExternalFileLevelStorageSource\@\@UEBA?AVResult\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVLevelData\@\@\@Z
     */
    virtual class Core::Result getLevelData(std::string const &, class LevelData &) const;
    /**
     * @hash   390220846
     * @vftbl  4
     * @symbol  ?saveLevelData\@ExternalFileLevelStorageSource\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVLevelData\@\@\@Z
     */
    virtual void saveLevelData(std::string const &, class LevelData const &);
    /**
     * @hash   1504197720
     * @vftbl  5
     * @symbol  ?getLevelList\@ExternalFileLevelStorageSource\@\@UEAAXAEAV?$vector\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@V?$allocator\@V?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void getLevelList(std::vector<class Core::PathBuffer<std::string>> &);
    /**
     * @hash   -1967612801
     * @vftbl  6
     * @symbol  ?createLevelStorage\@ExternalFileLevelStorageSource\@\@UEAA?AV?$unique_ptr\@VLevelStorage\@\@U?$default_delete\@VLevelStorage\@\@\@std\@\@\@std\@\@AEAVScheduler\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBVContentIdentity\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@AEBV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@3\@V?$not_null\@V?$NonOwnerPointer\@VLevelDbEnv\@\@\@Bedrock\@\@\@8\@V?$unique_ptr\@VLevelStorageEventing\@\@U?$default_delete\@VLevelStorageEventing\@\@\@std\@\@\@3\@\@Z
     */
    virtual std::unique_ptr<class LevelStorage> createLevelStorage(class Scheduler &, std::string const &, class ContentIdentity const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class LevelDbEnv>>, std::unique_ptr<class LevelStorageEventing>);
    /**
     * @hash   -489370248
     * @vftbl  7
     * @symbol  ?createLevelLooseStorage\@ExternalFileLevelStorageSource\@\@UEAA?AV?$unique_ptr\@VLevelLooseFileStorage\@\@U?$default_delete\@VLevelLooseFileStorage\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBVContentIdentity\@\@AEBV?$not_null\@V?$NonOwnerPointer\@$$CBVIContentKeyProvider\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    virtual std::unique_ptr<class LevelLooseFileStorage> createLevelLooseStorage(std::string const &, class ContentIdentity const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);
    /**
     * @hash   964678641
     * @vftbl  8
     * @symbol  ?isNewLevelIdAcceptable\@ExternalFileLevelStorageSource\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool isNewLevelIdAcceptable(std::string const &);
    /**
     * @hash   418470325
     * @vftbl  9
     * @symbol  ?deleteLevel\@ExternalFileLevelStorageSource\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void deleteLevel(std::string const &);
    /**
     * @hash   150319878
     * @vftbl  10
     * @symbol  ?renameLevel\@ExternalFileLevelStorageSource\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    virtual bool renameLevel(std::string const &, std::string const &);
    /**
     * @hash   1216905249
     * @vftbl  11
     * @symbol  ?renameLevel\@ExternalFileLevelStorageSource\@\@UEAAXAEAVLevelData\@\@AEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void renameLevel(class LevelData &, class Core::Path const &, std::string const &);
    /**
     * @hash   1820919028
     * @vftbl  12
     * @symbol  ?createBackupCopyOfWorld\@ExternalFileLevelStorageSource\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    virtual bool createBackupCopyOfWorld(std::string const &, std::string const &, std::string const &);
    /**
     * @vftbl  13
     * @symbol  __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @symbol  __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  15
     * @symbol  __unk_vfn_15
     */
    virtual void __unk_vfn_15();
    /**
     * @hash   1596156742
     * @vftbl  16
     * @symbol  ?isLevelMarkedForSync\@ExternalFileLevelStorageSource\@\@UEBA_NAEBVPath\@Core\@\@\@Z
     */
    virtual bool isLevelMarkedForSync(class Core::Path const &) const;
    /**
     * @hash   773409372
     * @vftbl  17
     * @symbol  ?isLevelPartiallyCopied\@ExternalFileLevelStorageSource\@\@UEBA_NAEBVPath\@Core\@\@\@Z
     */
    virtual bool isLevelPartiallyCopied(class Core::Path const &) const;
    /**
     * @hash   -1363675024
     * @vftbl  18
     * @symbol  ?getLevelDatFoundPath\@ExternalFileLevelStorageSource\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBVPath\@3\@\@Z
     */
    virtual class Core::PathBuffer<std::string> getLevelDatFoundPath(class Core::Path const &) const;
    /**
     * @hash   1235564142
     * @vftbl  19
     * @symbol  ?getBasePath\@ExternalFileLevelStorageSource\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getBasePath() const;
    /**
     * @hash   1270795610
     * @vftbl  20
     * @symbol  ?getPathToLevel\@ExternalFileLevelStorageSource\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual class Core::PathBuffer<std::string> const getPathToLevel(std::string const &) const;
    /**
     * @hash   -83543426
     * @vftbl  21
     * @symbol  ?getPathToLevelInfo\@ExternalFileLevelStorageSource\@\@UEBA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual class Core::PathBuffer<std::string> const getPathToLevelInfo(std::string const &, bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EXTERNALFILELEVELSTORAGESOURCE
    /**
     * @hash   -1297024300
     * @symbol  ?convertLevel\@ExternalFileLevelStorageSource\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAVProgressListener\@\@\@Z
     */
    MCVAPI bool convertLevel(std::string const &, class ProgressListener *);
    /**
     * @hash   883165284
     * @symbol  ?isBetaRetailLevel\@ExternalFileLevelStorageSource\@\@UEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI bool isBetaRetailLevel(std::string const &) const;
    /**
     * @hash   1832545169
     * @symbol  ?isConvertible\@ExternalFileLevelStorageSource\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI bool isConvertible(std::string const &);
    /**
     * @hash   1807653800
     * @symbol  ?requiresConversion\@ExternalFileLevelStorageSource\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI bool requiresConversion(std::string const &);
#endif
    /**
     * @hash   -1927677637
     * @symbol  ??0ExternalFileLevelStorageSource\@\@QEAA\@AEBV?$not_null\@V?$NonOwnerPointer\@VFilePathManager\@Core\@\@\@Bedrock\@\@\@gsl\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VSaveTransactionManager\@\@\@Bedrock\@\@\@2\@\@Z
     */
    MCAPI ExternalFileLevelStorageSource(class gsl::not_null<class Bedrock::NonOwnerPointer<class Core::FilePathManager>> const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class SaveTransactionManager>> const &);

};