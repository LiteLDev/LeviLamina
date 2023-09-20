/**
 * @file  ComponentItemMenuCategoryData_v1_20_20.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct ComponentItemMenuCategoryData_v1_20_20 {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPONENTITEMMENUCATEGORYDATA_V1_20_20
public:
    ComponentItemMenuCategoryData_v1_20_20() = delete;
#endif

public:
    /**
     * @symbol ??0ComponentItemMenuCategoryData_v1_20_20\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ComponentItemMenuCategoryData_v1_20_20(struct ComponentItemMenuCategoryData_v1_20_20 const &);
    /**
     * @symbol ??4ComponentItemMenuCategoryData_v1_20_20\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct ComponentItemMenuCategoryData_v1_20_20 & operator=(struct ComponentItemMenuCategoryData_v1_20_20 &&);
    /**
     * @symbol ??4ComponentItemMenuCategoryData_v1_20_20\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ComponentItemMenuCategoryData_v1_20_20 & operator=(struct ComponentItemMenuCategoryData_v1_20_20 const &);
    /**
     * @symbol ??1ComponentItemMenuCategoryData_v1_20_20\@\@QEAA\@XZ
     */
    MCAPI ~ComponentItemMenuCategoryData_v1_20_20();
    /**
     * @symbol ?FIRST_VERSION\@ComponentItemMenuCategoryData_v1_20_20\@\@2VSemVersion\@\@B
     */
    MCAPI static class SemVersion const FIRST_VERSION;
    /**
     * @symbol ?LAST_VERSION\@ComponentItemMenuCategoryData_v1_20_20\@\@2VSemVersion\@\@B
     */
    MCAPI static class SemVersion const LAST_VERSION;
    /**
     * @symbol ?bindType\@ComponentItemMenuCategoryData_v1_20_20\@\@SAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static void bindType(struct cereal::ReflectionCtx &);

};