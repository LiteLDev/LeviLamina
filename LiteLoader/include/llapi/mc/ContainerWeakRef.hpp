/**
 * @file  ContainerWeakRef.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ContainerWeakRef.
 *
 */
class ContainerWeakRef {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERWEAKREF
public:
    class ContainerWeakRef& operator=(class ContainerWeakRef const &) = delete;
    ContainerWeakRef(class ContainerWeakRef const &) = delete;
#endif

public:
    /**
     * @hash   -1282238394
     * @symbol  ??0ContainerWeakRef\@\@QEAA\@XZ
     */
    MCAPI ContainerWeakRef();
    /**
     * @hash   1909060373
     * @symbol  ??0ContainerWeakRef\@\@QEAA\@AEBVBlockPos\@\@AEBV?$TypedRuntimeId\@UContainerRuntimeIdTag\@\@I$0A\@\@\@\@Z
     */
    MCAPI ContainerWeakRef(class BlockPos const &, class TypedRuntimeId<struct ContainerRuntimeIdTag, unsigned int, 0> const &);
    /**
     * @hash   151619182
     * @symbol  ??0ContainerWeakRef\@\@QEAA\@AEBUActorUniqueID\@\@W4ActorContainerType\@\@AEBV?$TypedRuntimeId\@UContainerRuntimeIdTag\@\@I$0A\@\@\@\@Z
     */
    MCAPI ContainerWeakRef(struct ActorUniqueID const &, enum class ActorContainerType, class TypedRuntimeId<struct ContainerRuntimeIdTag, unsigned int, 0> const &);
    /**
     * @hash   -1638600276
     * @symbol  ??BContainerWeakRef\@\@QEBA_NXZ
     */
    MCAPI operator bool() const;
    /**
     * @hash   -441737836
     * @symbol  ??1ContainerWeakRef\@\@QEAA\@XZ
     */
    MCAPI ~ContainerWeakRef();

};