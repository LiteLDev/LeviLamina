#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ComponentItemData_v1_20 {

public:
    // prevent constructor by default
    ComponentItemData_v1_20& operator=(ComponentItemData_v1_20 const&) = delete;

public:
    /**
     * @symbol ??0ComponentItemData_v1_20\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ComponentItemData_v1_20(struct ComponentItemData_v1_20 const&); // NOLINT
    /**
     * @symbol ??0ComponentItemData_v1_20\@\@QEAA\@XZ
     */
    MCAPI ComponentItemData_v1_20(); // NOLINT
    /**
     * @symbol ??0ComponentItemData_v1_20\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ComponentItemData_v1_20(struct ComponentItemData_v1_20&&); // NOLINT
    /**
     * @symbol ??1ComponentItemData_v1_20\@\@QEAA\@XZ
     */
    MCAPI ~ComponentItemData_v1_20(); // NOLINT
    /**
     * @symbol ?bindType\@ComponentItemData_v1_20\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
    /**
     * @symbol ?upgrade\@ComponentItemData_v1_20\@\@SA?AU1\@AEAUComponentItemData_v1_19_83\@\@\@Z
     */
    MCAPI static struct ComponentItemData_v1_20 upgrade(struct ComponentItemData_v1_19_83&); // NOLINT
    /**
     * @symbol ?VERSION\@ComponentItemData_v1_20\@\@2VSemVersion\@\@B
     */
    MCAPI static class SemVersion const VERSION; // NOLINT
};
