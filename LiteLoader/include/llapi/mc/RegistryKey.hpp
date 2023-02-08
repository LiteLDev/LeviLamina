/**
 * @file  RegistryKey.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RegistryKey.
 *
 */
class RegistryKey {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REGISTRYKEY
public:
    class RegistryKey& operator=(class RegistryKey const &) = delete;
    RegistryKey(class RegistryKey const &) = delete;
    RegistryKey() = delete;
#endif

public:
    /**
     * @hash   2055408032
     * @symbol  ??BRegistryKey\@\@QEBA_NXZ
     */
    MCAPI operator bool() const;
    /**
     * @hash   -855556685
     * @symbol  ?readValue\@RegistryKey\@\@QEBA_NPEBDAEAK\@Z
     */
    MCAPI bool readValue(char const *, unsigned long &) const;
    /**
     * @hash   -1835920221
     * @symbol  ?readValue\@RegistryKey\@\@QEBA_NPEBDAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool readValue(char const *, std::string &) const;
    /**
     * @hash   -945430210
     * @symbol  ??1RegistryKey\@\@QEAA\@XZ
     */
    MCAPI ~RegistryKey();
    /**
     * @hash   -314721547
     * @symbol  ?open\@RegistryKey\@\@SA?AV1\@PEAUHKEY__\@\@PEBDK\@Z
     */
    MCAPI static class RegistryKey open(struct HKEY__*, char const *, unsigned long);

};