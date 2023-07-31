#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ComponentItemData_v1_20 {

public:
    // prevent constructor by default
    ComponentItemData_v1_20& operator=(ComponentItemData_v1_20 const&) = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ComponentItemData_v1_20\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ComponentItemData_v1_20(struct ComponentItemData_v1_20 const&);
    /**
     * @symbol ??0ComponentItemData_v1_20\@\@QEAA\@XZ
     */
    MCAPI ComponentItemData_v1_20();
    /**
     * @symbol ??0ComponentItemData_v1_20\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ComponentItemData_v1_20(struct ComponentItemData_v1_20&&);
    /**
     * @symbol ?bindType\@ComponentItemData_v1_20\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?upgrade\@ComponentItemData_v1_20\@\@SA?AU1\@AEAUComponentItemData_v1_19_83\@\@\@Z
     */
    MCAPI static struct ComponentItemData_v1_20 upgrade(struct ComponentItemData_v1_19_83&);
    /**
     * @symbol ??1ComponentItemData_v1_20\@\@QEAA\@XZ
     */
    MCAPI ~ComponentItemData_v1_20();
    /**
     * @symbol ?VERSION\@ComponentItemData_v1_20\@\@2VSemVersion\@\@B
     */
    MCAPI static class SemVersion const VERSION;
    // NOLINTEND
};
