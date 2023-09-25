/**
 * @file  ComponentItemData_v1_20_30.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct ComponentItemData_v1_20_30 {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPONENTITEMDATA_V1_20_30
public:
    struct ComponentItemData_v1_20_30& operator=(struct ComponentItemData_v1_20_30 const &) = delete;
    ComponentItemData_v1_20_30() = delete;
#endif

public:
    /**
     * @symbol ??0ComponentItemData_v1_20_30\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ComponentItemData_v1_20_30(struct ComponentItemData_v1_20_30 const &);
    /**
     * @symbol ??1ComponentItemData_v1_20_30\@\@QEAA\@XZ
     */
    MCAPI ~ComponentItemData_v1_20_30();
    /**
     * @symbol ?FIRST_VERSION\@ComponentItemData_v1_20_30\@\@2VSemVersion\@\@B
     */
    MCAPI static class SemVersion const FIRST_VERSION;
    /**
     * @symbol ?LAST_VERSION\@ComponentItemData_v1_20_30\@\@2VSemVersion\@\@B
     */
    MCAPI static class SemVersion const LAST_VERSION;
    /**
     * @symbol ?bindType\@ComponentItemData_v1_20_30\@\@SAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static void bindType(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?upgrade\@ComponentItemData_v1_20_30\@\@SA?AU1\@AEAUComponentItemData_v1_20_20\@\@\@Z
     */
    MCAPI static struct ComponentItemData_v1_20_30 upgrade(struct ComponentItemData_v1_20_20 &);

};