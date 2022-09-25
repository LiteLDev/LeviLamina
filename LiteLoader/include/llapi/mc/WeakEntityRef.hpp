/**
 * @file  WeakEntityRef.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#undef BEFORE_EXTRA

/**
 * @brief MC class WeakEntityRef.
 *
 */
class WeakEntityRef {

#define AFTER_EXTRA
// Add Member There
    char filler[32];
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEAKENTITYREF
public:
    class WeakEntityRef& operator=(class WeakEntityRef const &) = delete;
    WeakEntityRef(class WeakEntityRef const &) = delete;
    WeakEntityRef() = delete;
#endif

public:
    /**
     * @hash   1455515470
     * @symbol ??0WeakEntityRef@@QEAA@V?$WeakRefT@UEntityRefTraits@@@@@Z
     */
    MCAPI WeakEntityRef(class WeakRefT<struct EntityRefTraits>);
    /**
     * @hash   2039326418
     * @symbol ??BWeakEntityRef@@QEBA?AV?$WeakRefT@UEntityRefTraits@@@@XZ
     */
    MCAPI operator class WeakRefT<struct EntityRefTraits>() const;
    /**
     * @hash   -1600820636
     * @symbol ??4WeakEntityRef@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class WeakEntityRef & operator=(class WeakEntityRef &&);
    /**
     * @hash   -1611309572
     * @symbol ??8WeakEntityRef@@QEBA_NV?$WeakRefT@UEntityRefTraits@@@@@Z
     */
    MCAPI bool operator==(class WeakRefT<struct EntityRefTraits>) const;
    /**
     * @hash   -1033591409
     * @symbol ??8WeakEntityRef@@QEBA_NV0@@Z
     */
    MCAPI bool operator==(class WeakEntityRef) const;
    /**
     * @hash   -124234204
     * @symbol ??1WeakEntityRef@@QEAA@XZ
     */
    MCAPI ~WeakEntityRef();

};