/**
 * @file  MolangVersionMapping.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MolangVersionMapping.
 *
 */
class MolangVersionMapping {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGVERSIONMAPPING
public:
    class MolangVersionMapping& operator=(class MolangVersionMapping const &) = delete;
    MolangVersionMapping(class MolangVersionMapping const &) = delete;
    MolangVersionMapping() = delete;
#endif

public:
    /**
     * @symbol  ?getVersion\@MolangVersionMapping\@\@SA?BW4MolangVersion\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI static enum class MolangVersion const getVersion(class SemVersion const &);

};