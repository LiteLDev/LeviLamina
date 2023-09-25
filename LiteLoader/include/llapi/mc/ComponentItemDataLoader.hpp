/**
 * @file  ComponentItemDataLoader.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ComponentItemDataLoader {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPONENTITEMDATALOADER
public:
    class ComponentItemDataLoader& operator=(class ComponentItemDataLoader const &) = delete;
    ComponentItemDataLoader(class ComponentItemDataLoader const &) = delete;
    ComponentItemDataLoader() = delete;
#endif

public:
    /**
     * @symbol ??0ComponentItemDataLoader\@\@QEAA\@PEAVComponentItem\@\@VSemVersion\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI ComponentItemDataLoader(class ComponentItem *, class SemVersion, struct cereal::ReflectionCtx &);
    /**
     * @symbol ??1ComponentItemDataLoader\@\@QEAA\@XZ
     */
    MCAPI ~ComponentItemDataLoader();

};
