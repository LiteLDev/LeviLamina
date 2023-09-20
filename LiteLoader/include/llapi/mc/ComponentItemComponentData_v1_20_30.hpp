/**
 * @file  ComponentItemComponentData_v1_20_30.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct ComponentItemComponentData_v1_20_30 {

#define AFTER_EXTRA

#undef AFTER_EXTRA
public:
    /**
     * @symbol ??0ComponentItemComponentData_v1_20_30\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ComponentItemComponentData_v1_20_30(struct ComponentItemComponentData_v1_20_30 &&);
    /**
     * @symbol ??0ComponentItemComponentData_v1_20_30\@\@QEAA\@XZ
     */
    MCAPI ComponentItemComponentData_v1_20_30();
    /**
     * @symbol ??0ComponentItemComponentData_v1_20_30\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ComponentItemComponentData_v1_20_30(struct ComponentItemComponentData_v1_20_30 const &);
    /**
     * @symbol ??4ComponentItemComponentData_v1_20_30\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ComponentItemComponentData_v1_20_30 & operator=(struct ComponentItemComponentData_v1_20_30 const &);
    /**
     * @symbol ??4ComponentItemComponentData_v1_20_30\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct ComponentItemComponentData_v1_20_30 & operator=(struct ComponentItemComponentData_v1_20_30 &&);
    /**
     * @symbol ??1ComponentItemComponentData_v1_20_30\@\@QEAA\@XZ
     */
    MCAPI ~ComponentItemComponentData_v1_20_30();
    /**
     * @symbol ?FIRST_VERSION\@ComponentItemComponentData_v1_20_30\@\@2VSemVersion\@\@B
     */
    MCAPI static class SemVersion const FIRST_VERSION;
    /**
     * @symbol ?LAST_VERSION\@ComponentItemComponentData_v1_20_30\@\@2VSemVersion\@\@B
     */
    MCAPI static class SemVersion const LAST_VERSION;
    /**
     * @symbol ?bindType\@ComponentItemComponentData_v1_20_30\@\@SAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static void bindType(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?upgrade\@ComponentItemComponentData_v1_20_30\@\@SA?AU1\@AEAV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$shared_ptr\@UIItemComponentLegacyFactoryData\@\@\@2\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$shared_ptr\@UIItemComponentLegacyFactoryData\@\@\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI static struct ComponentItemComponentData_v1_20_30 upgrade(class std::map<std::string, class std::shared_ptr<struct IItemComponentLegacyFactoryData>, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, class std::shared_ptr<struct IItemComponentLegacyFactoryData>>>> &);

};