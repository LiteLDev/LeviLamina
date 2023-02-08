/**
 * @file  FileSystemFileAccess.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FileSystemFileAccess.
 *
 */
class FileSystemFileAccess {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILESYSTEMFILEACCESS
public:
    class FileSystemFileAccess& operator=(class FileSystemFileAccess const &) = delete;
    FileSystemFileAccess(class FileSystemFileAccess const &) = delete;
    FileSystemFileAccess() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FileSystemFileAccess();
    /**
     * @hash   -1980134291
     * @vftbl  1
     * @symbol  ?fopen\@FileSystemFileAccess\@\@UEAAPEAXAEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void * fopen(class Core::Path const &, std::string const &);
    /**
     * @hash   -1475319615
     * @vftbl  2
     * @symbol  ?fclose\@FileSystemFileAccess\@\@UEAAHPEAX\@Z
     */
    virtual int fclose(void *);
    /**
     * @hash   1178961947
     * @vftbl  3
     * @symbol  ?fseek\@FileSystemFileAccess\@\@UEAAHPEAX_JH\@Z
     */
    virtual int fseek(void *, __int64, int);
    /**
     * @hash   1881144402
     * @vftbl  4
     * @symbol  ?ftell\@FileSystemFileAccess\@\@UEAA_JPEAX\@Z
     */
    virtual __int64 ftell(void *);
    /**
     * @hash   -98777100
     * @vftbl  5
     * @symbol  ?getReadInterface\@FileSystemFileAccess\@\@UEBAPEBVIFileReadAccess\@\@XZ
     */
    virtual class IFileReadAccess const * getReadInterface() const;
    /**
     * @hash   2062031684
     * @vftbl  6
     * @symbol  ?getWriteInterface\@FileSystemFileAccess\@\@UEAAPEAVIFileWriteAccess\@\@XZ
     */
    virtual class IFileWriteAccess * getWriteInterface();
    /**
     * @hash   -1636882565
     * @vftbl  7
     * @symbol  ?unload\@FileSystemFileAccess\@\@UEAAXXZ
     */
    virtual void unload();
    /**
     * @hash   -1007155394
     * @symbol  ??0FileSystemFileAccess\@\@QEAA\@W4FileSystemMode\@\@\@Z
     */
    MCAPI FileSystemFileAccess(enum class FileSystemMode);

};