#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InternalComponentRegistry {
public:
    // InternalComponentRegistry inner types declare
    // clang-format off
    struct ComponentInfo;
    // clang-format on

    // InternalComponentRegistry inner types define
    struct ComponentInfo {

    public:
        // prevent constructor by default
        ComponentInfo& operator=(ComponentInfo const&) = delete;
        ComponentInfo(ComponentInfo const&)            = delete;
        ComponentInfo()                                = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??4ComponentInfo\@InternalComponentRegistry\@\@QEAAAEAU01\@$$QEAU01\@\@Z
         */
        MCAPI struct InternalComponentRegistry::ComponentInfo&
        operator=(struct InternalComponentRegistry::ComponentInfo&&);
        /**
         * @symbol ??1ComponentInfo\@InternalComponentRegistry\@\@QEAA\@XZ
         */
        MCAPI ~ComponentInfo();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    InternalComponentRegistry& operator=(InternalComponentRegistry const&) = delete;
    InternalComponentRegistry(InternalComponentRegistry const&)            = delete;
    InternalComponentRegistry()                                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?registerComponents\@InternalComponentRegistry\@\@UEAAXXZ
     */
    virtual void registerComponents();
    /**
     * @symbol ?addComponentSaveData\@InternalComponentRegistry\@\@QEAAXAEBVActor\@\@AEAVCompoundTag\@\@\@Z
     */
    MCAPI void addComponentSaveData(class Actor const&, class CompoundTag&);
    /**
     * @symbol
     * ?initializeComponents\@InternalComponentRegistry\@\@QEBAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void initializeComponents(class Actor&, class CompoundTag const&, class DataLoadHelper&) const;
    /**
     * @symbol
     * ?INTERNAL_COMPONENTS\@InternalComponentRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const INTERNAL_COMPONENTS;
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_initializeComponents\@InternalComponentRegistry\@\@IEBAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void _initializeComponents(class Actor&, class CompoundTag const&, class DataLoadHelper&) const;
    /**
     * @symbol
     * ?_getComponentScope\@InternalComponentRegistry\@\@KAPEBVCompoundTag\@\@AEBV2\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class CompoundTag const* _getComponentScope(class CompoundTag const&, std::string const&);
    /**
     * @symbol
     * ?_getOrCreateComponentScope\@InternalComponentRegistry\@\@KAAEAVCompoundTag\@\@AEAV2\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class CompoundTag& _getOrCreateComponentScope(class CompoundTag&, std::string const&);
    // NOLINTEND
};
