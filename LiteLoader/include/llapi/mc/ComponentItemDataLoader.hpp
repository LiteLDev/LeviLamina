/**
 * @file  ComponentItemDataLoader.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Puv.hpp"

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
     * @symbol ??0ComponentItemDataLoader\@\@QEAA\@PEAVComponentItem\@\@VSemVersion\@\@\@Z
     */
    MCAPI ComponentItemDataLoader(class ComponentItem *, class SemVersion);
    /**
     * @symbol ?load\@ComponentItemDataLoader\@\@QEBA?AV?$LoadResult\@UComponentItemData_v1_20\@\@\@Puv\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Puv::LoadResult<struct ComponentItemData_v1_20> load(std::string const &) const;
    /**
     * @symbol ??1ComponentItemDataLoader\@\@QEAA\@XZ
     */
    MCAPI ~ComponentItemDataLoader();

};
