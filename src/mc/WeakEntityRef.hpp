/**
 * @file  WeakEntityRef.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0WeakEntityRef\@\@QEAA\@V?$WeakRefT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI WeakEntityRef(class WeakRefT<struct EntityRefTraits>);
    /**
     * @symbol  ??4WeakEntityRef\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class WeakEntityRef & operator=(class WeakEntityRef &&);
    /**
     * @symbol  ??8WeakEntityRef\@\@QEBA_NV?$WeakRefT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCAPI bool operator==(class WeakRefT<struct EntityRefTraits>) const;
    /**
     * @symbol  ??8WeakEntityRef\@\@QEBA_NV0\@\@Z
     */
    MCAPI bool operator==(class WeakEntityRef) const;
    /**
     * @symbol  ??1WeakEntityRef\@\@QEAA\@XZ
     */
    MCAPI ~WeakEntityRef();

};