/**
 * @file  FeatureTypeVersion.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct FeatureTypeVersion {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATURETYPEVERSION
public:
    struct FeatureTypeVersion& operator=(struct FeatureTypeVersion const &) = delete;
    FeatureTypeVersion(struct FeatureTypeVersion const &) = delete;
    FeatureTypeVersion() = delete;
#endif

public:
    /**
     * @symbol ??0FeatureTypeVersion\@\@QEAA\@VSemVersion\@\@_N\@Z
     */
    MCAPI FeatureTypeVersion(class SemVersion, bool);
    /**
     * @symbol ??4FeatureTypeVersion\@\@QEAAXAEBU0\@\@Z
     */
    MCAPI void operator=(struct FeatureTypeVersion const &);
    /**
     * @symbol ??1FeatureTypeVersion\@\@QEAA\@XZ
     */
    MCAPI ~FeatureTypeVersion();

};