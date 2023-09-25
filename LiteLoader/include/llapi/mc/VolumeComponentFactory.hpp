/**
 * @file  VolumeComponentFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"
#include "EntityComponentFactoryCereal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VolumeComponentFactory.
 *
 */
class VolumeComponentFactory : public EntityComponentFactoryCereal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOLUMECOMPONENTFACTORY
public:
    class VolumeComponentFactory& operator=(class VolumeComponentFactory const &) = delete;
    VolumeComponentFactory(class VolumeComponentFactory const &) = delete;
    VolumeComponentFactory() = delete;
#endif

public:
    /**
     * @symbol ??0VolumeComponentFactory\@\@QEAA\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI VolumeComponentFactory(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?registerVolumeComponentDefinitions\@VolumeComponentFactory\@\@QEAAX_N\@Z
     */
    MCAPI void registerVolumeComponentDefinitions(bool);

};
