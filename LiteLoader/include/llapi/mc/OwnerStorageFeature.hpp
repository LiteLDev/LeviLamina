/**
 * @file  OwnerStorageFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class OwnerStorageFeature.
 *
 */
class OwnerStorageFeature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OWNERSTORAGEFEATURE
public:
    class OwnerStorageFeature& operator=(class OwnerStorageFeature const &) = delete;
    OwnerStorageFeature(class OwnerStorageFeature const &) = delete;
    OwnerStorageFeature() = delete;
#endif

public:

//protected:
    /**
     * @symbol  ??0OwnerStorageFeature\@\@IEAA\@W4VariadicInit\@0\@AEAVFeatureRegistry\@\@\@Z
     */
    MCAPI OwnerStorageFeature(enum class OwnerStorageFeature::VariadicInit, class FeatureRegistry &);
    /**
     * @symbol  ??0OwnerStorageFeature\@\@IEAA\@$$QEAV0\@\@Z
     */
    MCAPI OwnerStorageFeature(class OwnerStorageFeature &&);
    /**
     * @symbol  ?_getStackRef\@OwnerStorageFeature\@\@IEBAAEAVIFeature\@\@XZ
     */
    MCAPI class IFeature & _getStackRef() const;
    /**
     * @symbol  ?_hasValue\@OwnerStorageFeature\@\@IEBA_NXZ
     */
    MCAPI bool _hasValue() const;
    /**
     * @symbol  ??1OwnerStorageFeature\@\@IEAA\@XZ
     */
    MCAPI ~OwnerStorageFeature();

protected:

};