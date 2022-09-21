/**
 * @file  MC/EducationOptions.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1456384808
     * @symbol ?onActiveResourcePacksChanged@EducationOptions@@UEAAXAEAVResourcePackManager@@@Z
     */
    MCVAPI void onActiveResourcePacksChanged(class ResourcePackManager &);
    /**
     * @hash   -226625052
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EducationOptions();
#endif
    /**
     * @hash   917537464
     * @symbol ??0EducationOptions@@QEAA@PEAVResourcePackManager@@@Z
     */
    MCAPI EducationOptions(class ResourcePackManager *);
    /**
     * @hash   1457223668
     * @symbol ?init@EducationOptions@@QEAAXAEBVLevelData@@@Z
     */
    MCAPI void init(class LevelData const &);
    /**
     * @hash   1148272959
     * @symbol ?CHEMISTRY_ENABLED@EducationOptions@@2V?$basic_string_span@$$CBD$0?0@gsl@@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const CHEMISTRY_ENABLED;
    /**
     * @hash   291768552
     * @symbol ?isBaseCodeBuilderEnabled@EducationOptions@@SA_NXZ
     */
    MCAPI static bool isBaseCodeBuilderEnabled();
    /**
     * @hash   -876932246
     * @symbol ?isChemistryEnabled@EducationOptions@@SA_NXZ
     */
    MCAPI static bool isChemistryEnabled();
    /**
     * @hash   1603841382
     * @symbol ?isCodeBuilderEnabled@EducationOptions@@SA_NXZ
     */
    MCAPI static bool isCodeBuilderEnabled();
    /**
     * @hash   -1459641342
     * @symbol ?isEducationEnabled@EducationOptions@@SA_NXZ
     */
    MCAPI static bool isEducationEnabled();

//private:
    /**
     * @hash   -426649051
     * @symbol ?_getCurrentOptions@EducationOptions@@CA?AV?$ServiceReference@VEducationOptions@@@@XZ
     */
    MCAPI static class ServiceReference<class EducationOptions> _getCurrentOptions();

private:
    /**
     * @hash   797397294
     * @symbol ?DEFAULT_OPTION@EducationOptions@@0V1@A
     */
    MCAPI static class EducationOptions DEFAULT_OPTION;

};