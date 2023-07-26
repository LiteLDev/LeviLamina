/**
 * @file  InternalComponentRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InternalComponentRegistry.
 *
 */
class InternalComponentRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERNALCOMPONENTREGISTRY
public:
    class InternalComponentRegistry& operator=(class InternalComponentRegistry const &) = delete;
    InternalComponentRegistry(class InternalComponentRegistry const &) = delete;
    InternalComponentRegistry() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~InternalComponentRegistry();
    /**
     * @vftbl  1
     * @symbol  ?registerComponents\@InternalComponentRegistry\@\@UEAAXXZ
     */
    virtual void registerComponents();
    /**
     * @symbol  ?addComponentSaveData\@InternalComponentRegistry\@\@QEAAXAEBVActor\@\@AEAVCompoundTag\@\@\@Z
     */
    MCAPI void addComponentSaveData(class Actor const &, class CompoundTag &);
    /**
     * @symbol  ?initializeComponents\@InternalComponentRegistry\@\@QEBAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void initializeComponents(class Actor &, class CompoundTag const &, class DataLoadHelper &) const;
    /**
     * @symbol  ?INTERNAL_COMPONENTS\@InternalComponentRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const INTERNAL_COMPONENTS;

//protected:
    /**
     * @symbol  ?_initializeComponents\@InternalComponentRegistry\@\@IEBAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void _initializeComponents(class Actor &, class CompoundTag const &, class DataLoadHelper &) const;
    /**
     * @symbol  ?_getComponentScope\@InternalComponentRegistry\@\@KAPEBVCompoundTag\@\@AEBV2\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class CompoundTag const * _getComponentScope(class CompoundTag const &, std::string const &);
    /**
     * @symbol  ?_getOrCreateComponentScope\@InternalComponentRegistry\@\@KAAEAVCompoundTag\@\@AEAV2\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class CompoundTag & _getOrCreateComponentScope(class CompoundTag &, std::string const &);

protected:

};