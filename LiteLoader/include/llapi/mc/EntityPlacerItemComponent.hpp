/**
 * @file  EntityPlacerItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EntityPlacerItemComponent.
 *
 */
class EntityPlacerItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?checkComponentDataForContentErrors\@ItemComponent\@\@UEBA_NXZ
     */
    virtual bool checkComponentDataForContentErrors() const;
    /**
     * @vftbl 2
     * @symbol ?writeSettings\@ItemComponent\@\@UEAAXXZ
     */
    virtual void writeSettings();
    /**
     * @vftbl 3
     * @symbol ?isNetworkComponent\@InteractButtonItemComponent\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl 4
     * @symbol ?buildNetworkTag\@ItemComponent\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx &) const;
    /**
     * @vftbl 5
     * @symbol ?initializeFromNetwork\@ItemComponent\@\@UEAA_NAEBVCompoundTag\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &, struct cereal::ReflectionCtx &);
    /**
     * @vftbl 6
     * @symbol ?handleVersionBasedInitialization\@EntityPlacerItemComponent\@\@UEAAXAEBVSemVersion\@\@\@Z
     */
    virtual void handleVersionBasedInitialization(class SemVersion const &);
    /**
     * @vftbl 7
     * @symbol ?_canUseOn\@EntityPlacerItemComponent\@\@MEBA_NAEBVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool _canUseOn(class ItemStack const &, class Actor &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl 8
     * @symbol ?_useOn\@EntityPlacerItemComponent\@\@MEBA_NAEAVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos const &, unsigned char, class Vec3 const &) const;
    /**
     * @vftbl 9
     * @symbol ?_initializeComponent\@EntityPlacerItemComponent\@\@UEBAXXZ
     */
    virtual void _initializeComponent() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENTITYPLACERITEMCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EntityPlacerItemComponent();
#endif
    /**
     * @symbol ??0EntityPlacerItemComponent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI EntityPlacerItemComponent(class EntityPlacerItemComponent const &);
    /**
     * @symbol ??0EntityPlacerItemComponent\@\@QEAA\@XZ
     */
    MCAPI EntityPlacerItemComponent();
    /**
     * @symbol ?dispense\@EntityPlacerItemComponent\@\@QEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    MCAPI bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @symbol ??4EntityPlacerItemComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class EntityPlacerItemComponent & operator=(class EntityPlacerItemComponent &&);
    /**
     * @symbol ??4EntityPlacerItemComponent\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class EntityPlacerItemComponent & operator=(class EntityPlacerItemComponent const &);
    /**
     * @symbol ?bindType\@EntityPlacerItemComponent\@\@SAXAEAUReflectionCtx\@cereal\@\@AEBV?$vector\@W4AllExperiments\@\@V?$allocator\@W4AllExperiments\@\@\@std\@\@\@std\@\@V?$optional\@VSemVersion\@\@\@5\@\@Z
     */
    MCAPI static void bindType(struct cereal::ReflectionCtx &, std::vector<enum class AllExperiments> const &, class std::optional<class SemVersion>);
    /**
     * @symbol ?getIdentifier\@EntityPlacerItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

//private:
    /**
     * @symbol ?_setActorCustomName\@EntityPlacerItemComponent\@\@AEBAXAEAVActor\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI void _setActorCustomName(class Actor &, class ItemStack const &) const;
    /**
     * @symbol ?_validateBlocks\@EntityPlacerItemComponent\@\@AEBAXAEBV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI void _validateBlocks(std::vector<class BlockDescriptor> const &, std::string const &) const;

private:

};
