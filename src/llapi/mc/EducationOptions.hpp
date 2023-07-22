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
     * @symbol  ?onActiveResourcePacksChanged\@EducationOptions\@\@UEAAXAEAVResourcePackManager\@\@\@Z
     */
    MCVAPI void onActiveResourcePacksChanged(class ResourcePackManager &);
    /**
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~EducationOptions();
#endif
    /**
     * @symbol  ??0EducationOptions\@\@QEAA\@PEAVResourcePackManager\@\@\@Z
     */
    MCAPI EducationOptions(class ResourcePackManager *);
    /**
     * @symbol  ?init\@EducationOptions\@\@QEAAXAEBVLevelData\@\@\@Z
     */
    MCAPI void init(class LevelData const &);
    /**
     * @symbol  ?getPackCapability\@EducationOptions\@\@SA?AVPackCapability\@\@XZ
     */
    MCAPI static class PackCapability getPackCapability();
    /**
     * @symbol  ?isBaseCodeBuilderEnabled\@EducationOptions\@\@SA_NXZ
     */
    MCAPI static bool isBaseCodeBuilderEnabled();
    /**
     * @symbol  ?isChemistryEnabled\@EducationOptions\@\@SA_NXZ
     */
    MCAPI static bool isChemistryEnabled();
    /**
     * @symbol  ?isCodeBuilderEnabled\@EducationOptions\@\@SA_NXZ
     */
    MCAPI static bool isCodeBuilderEnabled();
    /**
     * @symbol  ?isEducationEnabled\@EducationOptions\@\@SA_NXZ
     */
    MCAPI static bool isEducationEnabled();

//private:
    /**
     * @symbol  ?_getCurrentOptions\@EducationOptions\@\@CA?AV?$ServiceReference\@VEducationOptions\@\@\@\@XZ
     */
    MCAPI static class ServiceReference<class EducationOptions> _getCurrentOptions();

private:
    /**
     * @symbol  ?DEFAULT_OPTION\@EducationOptions\@\@0V1\@A
     */
    MCAPI static class EducationOptions DEFAULT_OPTION;

};