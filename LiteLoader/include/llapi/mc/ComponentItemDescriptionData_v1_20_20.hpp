/**
 * @file  ComponentItemDescriptionData_v1_20_20.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct ComponentItemDescriptionData_v1_20_20 {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPONENTITEMDESCRIPTIONDATA_V1_20_20
public:
    ComponentItemDescriptionData_v1_20_20(struct ComponentItemDescriptionData_v1_20_20 const &) = delete;
    ComponentItemDescriptionData_v1_20_20() = delete;
#endif

public:
    /**
     * @symbol ??0ComponentItemDescriptionData_v1_20_20\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ComponentItemDescriptionData_v1_20_20(struct ComponentItemDescriptionData_v1_20_20 &&);
    /**
     * @symbol ??4ComponentItemDescriptionData_v1_20_20\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct ComponentItemDescriptionData_v1_20_20 & operator=(struct ComponentItemDescriptionData_v1_20_20 &&);
    /**
     * @symbol ??4ComponentItemDescriptionData_v1_20_20\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ComponentItemDescriptionData_v1_20_20 & operator=(struct ComponentItemDescriptionData_v1_20_20 const &);
    /**
     * @symbol ??1ComponentItemDescriptionData_v1_20_20\@\@QEAA\@XZ
     */
    MCAPI ~ComponentItemDescriptionData_v1_20_20();
    /**
     * @symbol ?FIRST_VERSION\@ComponentItemDescriptionData_v1_20_20\@\@2VSemVersion\@\@B
     */
    MCAPI static class SemVersion const FIRST_VERSION;
    /**
     * @symbol ?LAST_VERSION\@ComponentItemDescriptionData_v1_20_20\@\@2VSemVersion\@\@B
     */
    MCAPI static class SemVersion const LAST_VERSION;
    /**
     * @symbol ?bindType\@ComponentItemDescriptionData_v1_20_20\@\@SAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static void bindType(struct cereal::ReflectionCtx &);

};