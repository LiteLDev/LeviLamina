/**
 * @file  MC/WeakStorageFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WeakStorageFeature.
 *
 */
class WeakStorageFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEAKSTORAGEFEATURE
public:
    class WeakStorageFeature& operator=(class WeakStorageFeature const &) = delete;
    WeakStorageFeature(class WeakStorageFeature const &) = delete;
    WeakStorageFeature() = delete;
#endif

public:

//protected:
    /**
     * @hash   -45278851
     * @symbol ??0WeakStorageFeature@@IEAA@W4EmptyInit@0@@Z
     */
    MCAPI WeakStorageFeature(enum WeakStorageFeature::EmptyInit);
    /**
     * @hash   -550218088
     * @symbol ??0WeakStorageFeature@@IEAA@AEBVOwnerStorageFeature@@@Z
     */
    MCAPI WeakStorageFeature(class OwnerStorageFeature const &);
    /**
     * @hash   -59457150
     * @symbol ??0WeakStorageFeature@@IEAA@$$QEAV0@@Z
     */
    MCAPI WeakStorageFeature(class WeakStorageFeature &&);
    /**
     * @hash   385455890
     * @symbol ?_isSet@WeakStorageFeature@@IEBA_NXZ
     */
    MCAPI bool _isSet() const;
    /**
     * @hash   292682848
     * @symbol ??4WeakStorageFeature@@IEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class WeakStorageFeature & operator=(class WeakStorageFeature &&);

protected:

};