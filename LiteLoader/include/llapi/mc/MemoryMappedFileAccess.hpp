/**
 * @file  MC/MemoryMappedFileAccess.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MemoryMappedFileAccess.
 *
 */
class MemoryMappedFileAccess {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MEMORYMAPPEDFILEACCESS
public:
    class MemoryMappedFileAccess& operator=(class MemoryMappedFileAccess const &) = delete;
    MemoryMappedFileAccess(class MemoryMappedFileAccess const &) = delete;
    MemoryMappedFileAccess() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MemoryMappedFileAccess();
    /**
     * @hash   505057812
     * @vftbl  1
     * @symbol ?fopen@MemoryMappedFileAccess@@UEAAPEAXAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void * fopen(class Core::Path const &, std::string const &);
    /**
     * @hash   672350650
     * @vftbl  2
     * @symbol ?fclose@MemoryMappedFileAccess@@UEAAHPEAX@Z
     */
    virtual int fclose(void *);
    /**
     * @hash   -346004220
     * @vftbl  3
     * @symbol ?fseek@MemoryMappedFileAccess@@UEAAHPEAX_JH@Z
     */
    virtual int fseek(void *, __int64, int);
    /**
     * @hash   -1535370517
     * @vftbl  4
     * @symbol ?ftell@MemoryMappedFileAccess@@UEAA_JPEAX@Z
     */
    virtual __int64 ftell(void *);
    /**
     * @hash   -112177189
     * @vftbl  5
     * @symbol ?getReadInterface@MemoryMappedFileAccess@@UEBAPEBVIFileReadAccess@@XZ
     */
    virtual class IFileReadAccess const * getReadInterface() const;
    /**
     * @hash   1181759691
     * @vftbl  6
     * @symbol ?getWriteInterface@MemoryMappedFileAccess@@UEAAPEAVIFileWriteAccess@@XZ
     */
    virtual class IFileWriteAccess * getWriteInterface();
    /**
     * @hash   898738386
     * @vftbl  7
     * @symbol ?unload@MemoryMappedFileAccess@@UEAAXXZ
     */
    virtual void unload();
    /**
     * @hash   -197016736
     * @symbol ??0MemoryMappedFileAccess@@QEAA@AEBV?$not_null@V?$NonOwnerPointer@VIFileAccess@@@Bedrock@@@gsl@@V?$unique_ptr@VFileAccessTransforms@@U?$default_delete@VFileAccessTransforms@@@std@@@std@@@Z
     */
    MCAPI MemoryMappedFileAccess(class gsl::not_null<class Bedrock::NonOwnerPointer<class IFileAccess>> const &, std::unique_ptr<class FileAccessTransforms>);
    /**
     * @hash   807493075
     * @symbol ?EMPTY_TRANSFORMS@MemoryMappedFileAccess@@2VFileAccessTransforms@@B
     */
    MCAPI static class FileAccessTransforms const EMPTY_TRANSFORMS;

};