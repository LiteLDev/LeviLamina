/**
 * @file  VolumeComponentFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VolumeComponentFactory.
 *
 */
class VolumeComponentFactory {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOLUMECOMPONENTFACTORY
public:
    class VolumeComponentFactory& operator=(class VolumeComponentFactory const &) = delete;
    VolumeComponentFactory(class VolumeComponentFactory const &) = delete;
#endif

public:
    /**
     * @symbol  ??0VolumeComponentFactory\@\@QEAA\@XZ
     */
    MCAPI VolumeComponentFactory();
    /**
     * @symbol  ?registerVolumeComponentDefinitions\@VolumeComponentFactory\@\@QEAAX_N\@Z
     */
    MCAPI void registerVolumeComponentDefinitions(bool);

};