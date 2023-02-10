/**
 * @file  CommandVersion.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandVersion.
 *
 */
class CommandVersion {

#define AFTER_EXTRA
    // Add Member There
public:
    int mFrom = 1, mTo = 0x7FFFFFFF;
    CommandVersion(){};

#define DISABLE_CONSTRUCTOR_PREVENTION_COMMANDVERSION
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDVERSION
public:
    class CommandVersion& operator=(class CommandVersion const &) = delete;
    CommandVersion(class CommandVersion const &) = delete;
    CommandVersion() = delete;
#endif

public:
    /**
     * @hash   -882288591
     * @symbol  ??0CommandVersion\@\@QEAA\@HH\@Z
     */
    MCAPI CommandVersion(int, int);
    /**
     * @hash   297499475
     * @symbol  ?covers\@CommandVersion\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool covers(class CommandVersion const &) const;
    /**
     * @hash   1544419364
     * @symbol  ?getSemVersionFromCommandVersion\@CommandVersion\@\@QEBA?AVSemVersion\@\@XZ
     */
    MCAPI class SemVersion getSemVersionFromCommandVersion() const;
    /**
     * @hash   842693849
     * @symbol  ?isCompatible\@CommandVersion\@\@QEBA_NH\@Z
     */
    MCAPI bool isCompatible(int) const;
    /**
     * @hash   798722537
     * @symbol  ?CurrentVersion\@CommandVersion\@\@2HB
     */
    MCAPI static int const CurrentVersion;
    /**
     * @symbol  ?getSemVersionFromCommandVersion\@CommandVersion\@\@SA?AVSemVersion\@\@H\@Z
     */
    MCAPI static class SemVersion getSemVersionFromCommandVersion(int);
    /**
     * @hash   -600503355
     * @symbol  ?getVersionMapping\@CommandVersion\@\@SA?BW4CurrentCmdVersion\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI static enum class CurrentCmdVersion const getVersionMapping(class SemVersion const &);

};