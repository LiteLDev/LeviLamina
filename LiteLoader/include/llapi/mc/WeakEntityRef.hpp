/**
 * @file  WeakEntityRef.hpp
 *
 */
#pragma once

#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "EntityRefTraits.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class WeakEntityRef.
 *
 */
class WeakEntityRef : public WeakRefT<struct EntityRefTraits> {

#define AFTER_EXTRA
// Add Member There
    char filler[24];
#define DISABLE_CONSTRUCTOR_PREVENTION_WEAKENTITYREF
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEAKENTITYREF
public:
    class WeakEntityRef& operator=(class WeakEntityRef const &) = delete;
    WeakEntityRef(class WeakEntityRef const &) = delete;
    WeakEntityRef() = delete;
#endif

public:
    /**
     * @symbol ??0WeakEntityRef\@\@QEAA\@V?$WeakRefT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI WeakEntityRef(class WeakRefT<struct EntityRefTraits>);
    /**
     * @symbol ??4WeakEntityRef\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class WeakEntityRef & operator=(class WeakEntityRef &&);
    /**
     * @symbol ??8WeakEntityRef\@\@QEBA_NV?$WeakRefT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI bool operator==(class WeakRefT<struct EntityRefTraits>) const;
    /**
     * @symbol ??8WeakEntityRef\@\@QEBA_NV0\@\@Z
     */
    MCAPI bool operator==(class WeakEntityRef) const;
    /**
     * @symbol ??1WeakEntityRef\@\@QEAA\@XZ
     */
    MCAPI ~WeakEntityRef();

};
