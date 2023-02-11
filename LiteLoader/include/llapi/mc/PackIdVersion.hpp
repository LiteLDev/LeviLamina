/**
 * @file  PackIdVersion.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "SemVersion.hpp"
#include "ResourcePack.hpp"
#undef BEFORE_EXTRA

/**
 * @brief MC structure PackIdVersion.
 *
 */
struct PackIdVersion {

#define AFTER_EXTRA
// Add Member There
public:
    mce::UUID mUUID;
    SemVersion mVersion;
    PackType mType;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKIDVERSION
public:
    struct PackIdVersion& operator=(struct PackIdVersion const &) = delete;
#endif

public:
    /**
     * @hash   1746203520
     * @symbol  ??0PackIdVersion\@\@QEAA\@XZ
     */
    MCAPI PackIdVersion();
    /**
     * @hash   -74408375
     * @symbol  ??0PackIdVersion\@\@QEAA\@AEBVUUID\@mce\@\@AEBVSemVersion\@\@W4PackType\@\@\@Z
     */
    MCAPI PackIdVersion(class mce::UUID const &, class SemVersion const &, enum class PackType);
    /**
     * @hash   241318869
     * @symbol  ??0PackIdVersion\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI PackIdVersion(struct PackIdVersion const &);
    /**
     * @hash   -744773594
     * @symbol  ?asString\@PackIdVersion\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string asString() const;
    /**
     * @hash   -222773780
     * @symbol  ??9PackIdVersion\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator!=(struct PackIdVersion const &) const;
    /**
     * @hash   -1021878776
     * @symbol  ??MPackIdVersion\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator<(struct PackIdVersion const &) const;
    /**
     * @hash   -1489326296
     * @symbol  ??4PackIdVersion\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct PackIdVersion & operator=(struct PackIdVersion &&);
    /**
     * @hash   -1493335929
     * @symbol  ??8PackIdVersion\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct PackIdVersion const &) const;
    /**
     * @hash   -1182267186
     * @symbol  ?satisfies\@PackIdVersion\@\@QEBA_NAEBU1\@\@Z
     */
    MCAPI bool satisfies(struct PackIdVersion const &) const;
    /**
     * @hash   1617546576
     * @symbol  ??1PackIdVersion\@\@QEAA\@XZ
     */
    MCAPI ~PackIdVersion();

};