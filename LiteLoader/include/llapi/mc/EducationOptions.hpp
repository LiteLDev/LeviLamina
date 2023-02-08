/**
 * @file  EducationOptions.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EducationOptions.
 *
 */
class EducationOptions {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDUCATIONOPTIONS
public:
    class EducationOptions& operator=(class EducationOptions const &) = delete;
    EducationOptions(class EducationOptions const &) = delete;
    EducationOptions() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EDUCATIONOPTIONS
    /**
     * @hash   1714055816
     * @symbol  ?onActiveResourcePacksChanged\@EducationOptions\@\@UEAAXAEAVResourcePackManager\@\@\@Z
     */
    MCVAPI void onActiveResourcePacksChanged(class ResourcePackManager &);
    /**
     * @hash   31045956
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~EducationOptions();
#endif
    /**
     * @hash   1175146968
     * @symbol  ??0EducationOptions\@\@QEAA\@PEAVResourcePackManager\@\@\@Z
     */
    MCAPI EducationOptions(class ResourcePackManager *);
    /**
     * @hash   1714894676
     * @symbol  ?init\@EducationOptions\@\@QEAAXAEBVLevelData\@\@\@Z
     */
    MCAPI void init(class LevelData const &);
    /**
     * @symbol  ?getPackCapability\@EducationOptions\@\@SA?AVPackCapability\@\@XZ
     */
    MCAPI static class PackCapability getPackCapability();
    /**
     * @hash   549439560
     * @symbol  ?isBaseCodeBuilderEnabled\@EducationOptions\@\@SA_NXZ
     */
    MCAPI static bool isBaseCodeBuilderEnabled();
    /**
     * @hash   -619261238
     * @symbol  ?isChemistryEnabled\@EducationOptions\@\@SA_NXZ
     */
    MCAPI static bool isChemistryEnabled();
    /**
     * @hash   1861512390
     * @symbol  ?isCodeBuilderEnabled\@EducationOptions\@\@SA_NXZ
     */
    MCAPI static bool isCodeBuilderEnabled();
    /**
     * @hash   -1201970334
     * @symbol  ?isEducationEnabled\@EducationOptions\@\@SA_NXZ
     */
    MCAPI static bool isEducationEnabled();

//private:
    /**
     * @hash   -168978043
     * @symbol  ?_getCurrentOptions\@EducationOptions\@\@CA?AV?$ServiceReference\@VEducationOptions\@\@\@\@XZ
     */
    MCAPI static class ServiceReference<class EducationOptions> _getCurrentOptions();

private:
    /**
     * @hash   1907882766
     * @symbol  ?DEFAULT_OPTION\@EducationOptions\@\@0V1\@A
     */
    MCAPI static class EducationOptions DEFAULT_OPTION;

};