/**
 * @file  CommandVersion.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
    int Min = 1, Max = 0x7FFFFFFF;
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
     * @hash   -305258063
     * @symbol ??0CommandVersion@@QEAA@HH@Z
     */
    MCAPI CommandVersion(int, int);
    /**
     * @hash   874530003
     * @symbol ?covers@CommandVersion@@QEBA_NAEBV1@@Z
     */
    MCAPI bool covers(class CommandVersion const &) const;
    /**
     * @hash   1425029097
     * @symbol ?isCompatible@CommandVersion@@QEBA_NH@Z
     */
    MCAPI bool isCompatible(int) const;
    /**
     * @hash   -175016479
     * @symbol ?CurrentVersion@CommandVersion@@2HB
     */
    MCAPI static int const CurrentVersion;
    /**
     * @hash   -23826475
     * @symbol ?getVersionMapping@CommandVersion@@SA?BW4CurrentCmdVersion@@AEBVSemVersion@@@Z
     */
    MCAPI static enum class CurrentCmdVersion const getVersionMapping(class SemVersion const &);

};