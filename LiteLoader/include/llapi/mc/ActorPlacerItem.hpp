/**
 * @file  MC/ActorPlacerItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorPlacerItem.
 *
 */
class ActorPlacerItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORPLACERITEM
public:
    class ActorPlacerItem& operator=(class ActorPlacerItem const &) = delete;
    ActorPlacerItem(class ActorPlacerItem const &) = delete;
    ActorPlacerItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ActorPlacerItem();
    /**
     * @hash   -433471000
     * @vftbl  2
     * @symbol ?tearDown@ActorPlacerItem@@UEAAXXZ
     */
    virtual void tearDown();
    /**
     * @vftbl  7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  52
     * @symbol __unk_vfn_52
     */
    virtual void __unk_vfn_52();
    /**
     * @vftbl  54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @hash   -2015060641
     * @vftbl  58
     * @symbol ?isLiquidClipItem@ActorPlacerItem@@UEBA_NH@Z
     */
    virtual bool isLiquidClipItem(int) const;
    /**
     * @hash   -1371819079
     * @vftbl  59
     * @symbol ?shouldInteractionWithBlockBypassLiquid@ActorPlacerItem@@UEBA_NAEBVBlock@@@Z
     */
    virtual bool shouldInteractionWithBlockBypassLiquid(class Block const &) const;
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @hash   481301753
     * @vftbl  68
     * @symbol ?isValidAuxValue@ActorPlacerItem@@UEBA_NH@Z
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl  71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  73
     * @symbol __unk_vfn_73
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
    /**
     * @vftbl  80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   1883545956
     * @vftbl  82
     * @symbol ?getActorIdentifier@ActorPlacerItem@@UEBA?AUActorDefinitionIdentifier@@AEBVItemStack@@@Z
     */
    virtual struct ActorDefinitionIdentifier getActorIdentifier(class ItemStack const &) const;
    /**
     * @hash   217462319
     * @vftbl  86
     * @symbol ?dispense@ActorPlacerItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @hash   -491454569
     * @vftbl  96
     * @symbol ?buildDescriptionId@ActorPlacerItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @hash   -1530426650
     * @vftbl  122
     * @symbol ?getIcon@ActorPlacerItem@@UEBAAEBUTextureUVCoordinateSet@@AEBVItemStackBase@@H_N@Z
     */
    virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /**
     * @hash   1465702321
     * @vftbl  135
     * @symbol ?_useOn@ActorPlacerItem@@EEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORPLACERITEM
    /**
     * @hash   678488950
     * @symbol ?getBaseColor@ActorPlacerItem@@UEBA?AVColor@mce@@AEBVItemStack@@@Z
     */
    MCVAPI class mce::Color getBaseColor(class ItemStack const &) const;
    /**
     * @hash   1966110925
     * @symbol ?getSecondaryColor@ActorPlacerItem@@UEBA?AVColor@mce@@AEBVItemStack@@@Z
     */
    MCVAPI class mce::Color getSecondaryColor(class ItemStack const &) const;
    /**
     * @hash   1559327630
     * @symbol ?isActorPlacerItem@ActorPlacerItem@@UEBA_NXZ
     */
    MCVAPI bool isActorPlacerItem() const;
    /**
     * @hash   -1438929281
     * @symbol ?isMultiColorTinted@ActorPlacerItem@@UEBA_NAEBVItemStack@@@Z
     */
    MCVAPI bool isMultiColorTinted(class ItemStack const &) const;
#endif
    /**
     * @hash   -2101948884
     * @symbol ??0ActorPlacerItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBUActorDefinitionIdentifier@@@Z
     */
    MCAPI ActorPlacerItem(std::string const &, int, struct ActorDefinitionIdentifier const &);
    /**
     * @hash   -698703446
     * @symbol ?forEachCustomEgg@ActorPlacerItem@@SAXVItemRegistryRef@@AEBV?$function@$$A6AXAEBVItem@@@Z@std@@@Z
     */
    MCAPI static void forEachCustomEgg(class ItemRegistryRef, class std::function<void (class Item const &)> const &);
    /**
     * @hash   1535494623
     * @symbol ?getCustomSpawnEggName@ActorPlacerItem@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI static std::string getCustomSpawnEggName(int);
    /**
     * @hash   -1561087497
     * @symbol ?registerCustomEggs@ActorPlacerItem@@SAXVItemRegistryRef@@AEBVActorInfoRegistry@@@Z
     */
    MCAPI static void registerCustomEggs(class ItemRegistryRef, class ActorInfoRegistry const &);
    /**
     * @hash   -1991236870
     * @symbol ?spawnOrMoveAgent@ActorPlacerItem@@SAPEAVActor@@AEBVVec3@@AEAV2@@Z
     */
    MCAPI static class Actor * spawnOrMoveAgent(class Vec3 const &, class Actor &);

//private:
    /**
     * @hash   571993334
     * @symbol ?_getActorID@ActorPlacerItem@@AEBA?AUActorDefinitionIdentifier@@AEAVBlockSource@@@Z
     */
    MCAPI struct ActorDefinitionIdentifier _getActorID(class BlockSource &) const;
    /**
     * @hash   -1340074188
     * @symbol ?_spawnActorAt@ActorPlacerItem@@AEBAPEAVActor@@AEAVBlockSource@@AEBVVec3@@1AEBVItemStack@@PEAV2@@Z
     */
    MCAPI class Actor * _spawnActorAt(class BlockSource &, class Vec3 const &, class Vec3 const &, class ItemStack const &, class Actor *) const;
    /**
     * @hash   -546925750
     * @symbol ?_setAgentOwner@ActorPlacerItem@@CAXAEAVPlayer@@AEAVAgent@@@Z
     */
    MCAPI static void _setAgentOwner(class Player &, class Agent &);

private:
    /**
     * @hash   -343014234
     * @symbol ?mCustomSpawnEggs@ActorPlacerItem@@0V?$unordered_map@IV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@I@2@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@A
     */
    MCAPI static class std::unordered_map<unsigned int, std::string, struct std::hash<unsigned int>, struct std::equal_to<unsigned int>, class std::allocator<struct std::pair<unsigned int const, std::string>>> mCustomSpawnEggs;
    /**
     * @hash   1960994774
     * @symbol ?mUVTextureMap@ActorPlacerItem@@0V?$unordered_map@VHashedString@@UTextureUVCoordinateSet@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@4@V?$allocator@U?$pair@$$CBVHashedString@@UTextureUVCoordinateSet@@@std@@@4@@std@@A
     */
    MCAPI static class std::unordered_map<class HashedString, struct TextureUVCoordinateSet, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, struct TextureUVCoordinateSet>>> mUVTextureMap;
    /**
     * @hash   -1620979135
     * @symbol ?m_uvEggMask@ActorPlacerItem@@0UTextureUVCoordinateSet@@A
     */
    MCAPI static struct TextureUVCoordinateSet m_uvEggMask;

};