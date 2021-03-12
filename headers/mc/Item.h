#pragma once
#include "Core.h"
#include <vector>

class ItemStackBase {
	char filler[136];

public:
	MCINLINE class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> toString() const {
		class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> (ItemStackBase::*rv)() const;
		*((void**)&rv) = dlsym("?toString@ItemStackBase@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
		return (this->*rv)();
	}
	MCINLINE bool operator!=(class ItemStackBase const& a0) const {
		bool (ItemStackBase::*rv)(class ItemStackBase const&) const;
		*((void**)&rv) = dlsym("??9ItemStackBase@@QEBA_NAEBV0@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool hasCustomHoverName() const {
		bool (ItemStackBase::*rv)() const;
		*((void**)&rv) = dlsym("?hasCustomHoverName@ItemStackBase@@QEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE void setCustomName(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a0) {
		void (ItemStackBase::*rv)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&);
		*((void**)&rv) = dlsym("?setCustomName@ItemStackBase@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
		return (this->*rv)(a0);
	}
	#ifdef MCAPI_ITEM_EXTRA
	MCINLINE void hurtAndBreak(int a0, class Actor* a1) {
		void (ItemStackBase::*rv)(int, class Actor*);
		*((void**)&rv) = dlsym("?hurtAndBreak@ItemStackBase@@QEAAXHPEAVActor@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE bool updateComponent(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a0, class Json::Value const& a1) {
		bool (ItemStackBase::*rv)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&, class Json::Value const&);
		*((void**)&rv) = dlsym("?updateComponent@ItemStackBase@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@@Z");
		return (this->*rv)(a0, a1);
	}
	
	MCINLINE void setRepairCost(int a0) {
		void (ItemStackBase::*rv)(int);
		*((void**)&rv) = dlsym("?setRepairCost@ItemStackBase@@QEAAXH@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool hasSameAuxValue(class ItemStackBase const& a0) const {
		bool (ItemStackBase::*rv)(class ItemStackBase const&) const;
		*((void**)&rv) = dlsym("?hasSameAuxValue@ItemStackBase@@QEBA_NAEBV1@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void _makeChargedItemFromUserData() {
		void (ItemStackBase::*rv)();
		*((void**)&rv) = dlsym("?_makeChargedItemFromUserData@ItemStackBase@@AEAAXXZ");
		return (this->*rv)();
	}

	MCINLINE class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> getDescriptionId() const {
		class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> (ItemStackBase::*rv)() const;
		*((void**)&rv) = dlsym("?getDescriptionId@ItemStackBase@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
		return (this->*rv)();
	} MCINLINE void _setChargedItem(class ItemInstance const& a0) {
		void (ItemStackBase::*rv)(class ItemInstance const&);
		*((void**)&rv) = dlsym("?_setChargedItem@ItemStackBase@@AEAAXAEBVItemInstance@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void addCustomUserData(class BlockActor& a0, class BlockSource& a1) {
		void (ItemStackBase::*rv)(class BlockActor&, class BlockSource&);
		*((void**)&rv) = dlsym("?addCustomUserData@ItemStackBase@@QEAAXAEAVBlockActor@@AEAVBlockSource@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE bool isDamaged() const {
		bool (ItemStackBase::*rv)() const;
		*((void**)&rv) = dlsym("?isDamaged@ItemStackBase@@QEBA_NXZ");
		return (this->*rv)();
	}

	MCINLINE bool matches(class ItemStackBase const& a0) const {
		bool (ItemStackBase::*rv)(class ItemStackBase const&) const;
		*((void**)&rv) = dlsym("?matches@ItemStackBase@@QEBA_NAEBV1@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void init(class Item const& a0, int a1, int a2, class CompoundTag const* a3) {
		void (ItemStackBase::*rv)(class Item const&, int, int, class CompoundTag const*);
		*((void**)&rv) = dlsym("?init@ItemStackBase@@IEAAXAEBVItem@@HHPEBVCompoundTag@@@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE bool matchesItem(class ItemStackBase const& a0) const {
		bool (ItemStackBase::*rv)(class ItemStackBase const&) const;
		*((void**)&rv) = dlsym("?matchesItem@ItemStackBase@@QEBA_NAEBV1@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void init(class BlockLegacy const& a0, int a1) {
		void (ItemStackBase::*rv)(class BlockLegacy const&, int);
		*((void**)&rv) = dlsym("?init@ItemStackBase@@IEAAXAEBVBlockLegacy@@H@Z");
		return (this->*rv)(a0, a1);
	}

	MCINLINE bool isExperimental() const {
		bool (ItemStackBase::*rv)() const;
		*((void**)&rv) = dlsym("?isExperimental@ItemStackBase@@QEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE void setChargedItem(class ItemInstance const& a0, bool a1) {
		void (ItemStackBase::*rv)(class ItemInstance const&, bool);
		*((void**)&rv) = dlsym("?setChargedItem@ItemStackBase@@QEAAXAEBVItemInstance@@_N@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void _updateCompareHashes() {
		void (ItemStackBase::*rv)();
		*((void**)&rv) = dlsym("?_updateCompareHashes@ItemStackBase@@AEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE bool isHorseArmorItem() const {
		bool (ItemStackBase::*rv)() const;
		*((void**)&rv) = dlsym("?isHorseArmorItem@ItemStackBase@@QEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE bool isStackable(class ItemStackBase const& a0) const {
		bool (ItemStackBase::*rv)(class ItemStackBase const&) const;
		*((void**)&rv) = dlsym("?isStackable@ItemStackBase@@QEBA_NAEBV1@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool isWearableItem() const {
		bool (ItemStackBase::*rv)() const;
		*((void**)&rv) = dlsym("?isWearableItem@ItemStackBase@@QEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> getRawNameId() const {
		class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> (ItemStackBase::*rv)() const;
		*((void**)&rv) = dlsym("?getRawNameId@ItemStackBase@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
		return (this->*rv)();
	} MCINLINE void _loadItem(class CompoundTag const& a0) {
		void (ItemStackBase::*rv)(class CompoundTag const&);
		*((void**)&rv) = dlsym("?_loadItem@ItemStackBase@@AEAAXAEBVCompoundTag@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void init(int a0, int a1, int a2) {
		void (ItemStackBase::*rv)(int, int, int);
		*((void**)&rv) = dlsym("?init@ItemStackBase@@IEAAXHHH@Z");
		return (this->*rv)(a0, a1, a2);
	}

	MCINLINE bool hasSameUserData(class ItemStackBase const& a0) const {
		bool (ItemStackBase::*rv)(class ItemStackBase const&) const;
		*((void**)&rv) = dlsym("?hasSameUserData@ItemStackBase@@QEBA_NAEBV1@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void serializeComponents(class IDataOutput& a0) const {
		void (ItemStackBase::*rv)(class IDataOutput&) const;
		*((void**)&rv) = dlsym("?serializeComponents@ItemStackBase@@QEBAXAEAVIDataOutput@@@Z");
		return (this->*rv)(a0);
	}
 MCINLINE bool _setItem(int a0) {
		bool (ItemStackBase::*rv)(int);
		*((void**)&rv) = dlsym("?_setItem@ItemStackBase@@IEAA_NH@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool isPotionItem() const {
		bool (ItemStackBase::*rv)() const;
		*((void**)&rv) = dlsym("?isPotionItem@ItemStackBase@@QEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE bool isBlock() const {
		bool (ItemStackBase::*rv)() const;
		*((void**)&rv) = dlsym("?isBlock@ItemStackBase@@QEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE void saveEnchantsToUserData(class ItemEnchants const& a0) {
		void (ItemStackBase::*rv)(class ItemEnchants const&);
		*((void**)&rv) = dlsym("?saveEnchantsToUserData@ItemStackBase@@QEAAXAEBVItemEnchants@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool isStackedByData() const {
		bool (ItemStackBase::*rv)() const;
		*((void**)&rv) = dlsym("?isStackedByData@ItemStackBase@@QEBA_NXZ");
		return (this->*rv)();
	}
 MCINLINE void _read(class ReadOnlyBinaryStream& a0) {
		void (ItemStackBase::*rv)(class ReadOnlyBinaryStream&);
		*((void**)&rv) = dlsym("?_read@ItemStackBase@@QEAAXAEAVReadOnlyBinaryStream@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool sameItem(int a0, int a1) const {
		bool (ItemStackBase::*rv)(int, int) const;
		*((void**)&rv) = dlsym("?sameItem@ItemStackBase@@QEBA_NHH@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void deserializeComponents(class IDataInput& a0) {
		void (ItemStackBase::*rv)(class IDataInput&);
		*((void**)&rv) = dlsym("?deserializeComponents@ItemStackBase@@QEAAXAEAVIDataInput@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void _write(class BinaryStream& a0) const {
		void (ItemStackBase::*rv)(class BinaryStream&) const;
		*((void**)&rv) = dlsym("?_write@ItemStackBase@@QEBAXAEAVBinaryStream@@@Z");
		return (this->*rv)(a0);
	}

	MCINLINE void set(int a0) {
		void (ItemStackBase::*rv)(int);
		*((void**)&rv) = dlsym("?set@ItemStackBase@@QEAAXH@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool addComponents(class Json::Value const& a0, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>& a1) {
		bool (ItemStackBase::*rv)(class Json::Value const&, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>&);
		*((void**)&rv) = dlsym("?addComponents@ItemStackBase@@QEAA_NAEBVValue@Json@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void clearChargedItem() {
		void (ItemStackBase::*rv)();
		*((void**)&rv) = dlsym("?clearChargedItem@ItemStackBase@@QEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE void _loadComponents(class CompoundTag const& a0) {
		void (ItemStackBase::*rv)(class CompoundTag const&);
		*((void**)&rv) = dlsym("?_loadComponents@ItemStackBase@@AEAAXAEBVCompoundTag@@@Z");
		return (this->*rv)(a0);
	}

	MCINLINE class ItemStackBase& operator=(class ItemStackBase const& a0) {
		class ItemStackBase& (ItemStackBase::*rv)(class ItemStackBase const&);
		*((void**)&rv) = dlsym("??4ItemStackBase@@IEAAAEAV0@AEBV0@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> _getHoverFormattingPrefix() const {
		class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> (ItemStackBase::*rv)() const;
		*((void**)&rv) = dlsym("?_getHoverFormattingPrefix@ItemStackBase@@IEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
		return (this->*rv)();
	} MCINLINE bool hasComponent(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a0) const {
		bool (ItemStackBase::*rv)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&) const;
		*((void**)&rv) = dlsym("?hasComponent@ItemStackBase@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
		return (this->*rv)(a0);
	}

	MCINLINE bool sameItemAndAux(class ItemStackBase const& a0) const {
		bool (ItemStackBase::*rv)(class ItemStackBase const&) const;
		*((void**)&rv) = dlsym("?sameItemAndAux@ItemStackBase@@QEBA_NAEBV1@@Z");
		return (this->*rv)(a0);
	}
#endif
	MCINLINE class Item const* getItem() const {
		class Item const* (ItemStackBase::*rv)() const;
		*((void**)&rv) = dlsym("?getItem@ItemStackBase@@QEBAPEBVItem@@XZ");
		return (this->*rv)();
	}
MCINLINE short getAuxValue() const {
		short (ItemStackBase::*rv)() const;
		*((void**)&rv) = dlsym("?getAuxValue@ItemStackBase@@QEBAFXZ");
		return (this->*rv)();
	}
	MCINLINE bool isEnchanted() const {
		bool (ItemStackBase::*rv)() const;
		*((void**)&rv) = dlsym("?isEnchanted@ItemStackBase@@QEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE unsigned char getMaxStackSize() const {
		unsigned char (ItemStackBase::*rv)() const;
		*((void**)&rv) = dlsym("?getMaxStackSize@ItemStackBase@@QEBAEXZ");
		return (this->*rv)();
	}
	MCINLINE short getId() const {
		short (ItemStackBase::*rv)() const;
		*((void**)&rv) = dlsym("?getId@ItemStackBase@@QEBAFXZ");
		return (this->*rv)();
	}
	MCINLINE int getIdAux() const {
		int (ItemStackBase::*rv)() const;
		*((void**)&rv) = dlsym("?getIdAux@ItemStackBase@@QEBAHXZ");
		return (this->*rv)();
	}
	MCINLINE class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> getName() const {
		class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> (ItemStackBase::*rv)() const;
		*((void**)&rv) = dlsym("?getName@ItemStackBase@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
		return (this->*rv)();
	}
	MCINLINE class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> getHoverName() const {
		class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> (ItemStackBase::*rv)() const;
		*((void**)&rv) = dlsym("?getHoverName@ItemStackBase@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
		return (this->*rv)();
	}
	MCINLINE void setCustomLore(class std::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>> const& a0) {
		void (ItemStackBase::*rv)(class std::vector<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::allocator<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>> const&);
		*((void**)&rv) = dlsym("?setCustomLore@ItemStackBase@@QEAAXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void setNull() {
		void (ItemStackBase::*rv)();
		*((void**)&rv) = dlsym("?setNull@ItemStackBase@@QEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE bool isNull() const {
		bool (ItemStackBase::*rv)() const;
		*((void**)&rv) = dlsym("?isNull@ItemStackBase@@QEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> getCustomName() const {
		class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> (ItemStackBase::*rv)() const;
		*((void**)&rv) = dlsym("?getCustomName@ItemStackBase@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
		return (this->*rv)();
	}

#if 0
	MCINLINE class std::unique_ptr<class CompoundTag,struct std::default_delete<class CompoundTag> >  getNetworkUserData()const {
class std::unique_ptr<class CompoundTag,struct std::default_delete<class CompoundTag> > (ItemStackBase::*rv)()const ; *((void**)&rv) = dlsym("?getNetworkUserData@ItemStackBase@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ"); return (this->*rv)();}
	MCINLINE class std::unique_ptr<class CompoundTag,struct std::default_delete<class CompoundTag> >  save()const {
class std::unique_ptr<class CompoundTag,struct std::default_delete<class CompoundTag> > (ItemStackBase::*rv)()const ; *((void**)&rv) = dlsym("?save@ItemStackBase@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ"); return (this->*rv)();}
	MCINLINE void  setUserData(class std::unique_ptr<class CompoundTag,struct std::default_delete<class CompoundTag> > a0){
void (ItemStackBase::*rv)(class std::unique_ptr<class CompoundTag,struct std::default_delete<class CompoundTag> >); *((void**)&rv) = dlsym("?setUserData@ItemStackBase@@QEAAXV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@@Z"); return (this->*rv)(a0);}
//   bad fun  

	// ??0ItemStackBase@@IEAA@AEBVItem@@H@Z
	// ItemStackBase::ItemStackBase(class Item const &,int)
	MCINLINE class ItemDescriptor  getDescriptor()const {
class ItemDescriptor (ItemStackBase::*rv)()const ; *((void**)&rv) = dlsym("?getDescriptor@ItemStackBase@@QEBA?AVItemDescriptor@@XZ"); return (this->*rv)();}
	// ??BItemStackBase@@QEBA_NXZ
	// ItemStackBase::operator bool(void)const 
	MCINLINE class ItemEnchants  getEnchantsFromUserData()const {
class ItemEnchants (ItemStackBase::*rv)()const ; *((void**)&rv) = dlsym("?getEnchantsFromUserData@ItemStackBase@@QEBA?AVItemEnchants@@XZ"); return (this->*rv)();}
	// ??0ItemStackBase@@IEAA@AEBVItem@@@Z
	// ItemStackBase::ItemStackBase(class Item const &)
	// ??0ItemStackBase@@IEAA@AEBVItem@@HH@Z
	// ItemStackBase::ItemStackBase(class Item const &,int,int)
	// ??0ItemStackBase@@IEAA@AEBVBlock@@HPEBVCompoundTag@@@Z
	// ItemStackBase::ItemStackBase(class Block const &,int,class CompoundTag const *)
	// ??0ItemStackBase@@IEAA@AEBVBlockLegacy@@H@Z
	// ItemStackBase::ItemStackBase(class BlockLegacy const &,int)
	// ??0ItemStackBase@@IEAA@XZ
	// ItemStackBase::ItemStackBase(void)
	// ??0ItemStackBase@@IEAA@AEBV0@@Z
	// ItemStackBase::ItemStackBase(class ItemStackBase const &)
	// ??0ItemStackBase@@IEAA@AEBVItem@@HHPEBVCompoundTag@@@Z
	// ItemStackBase::ItemStackBase(class Item const &,int,int,class CompoundTag const *)
#endif
};
#pragma once
#include "Core.h"
class ItemStack : public ItemStackBase {	
public:
	#ifdef MCAPI_ITEM_EXTRA
	MCINLINE class ItemStack& operator=(class ItemStack const& a0) {
		class ItemStack& (ItemStack::*rv)(class ItemStack const&);
		*((void**)&rv) = dlsym("??4ItemStack@@QEAAAEAV0@AEBV0@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool sameItemAndAuxAndBlockData(class ItemStack const& a0) const {
		bool (ItemStack::*rv)(class ItemStack const&) const;
		*((void**)&rv) = dlsym("?sameItemAndAuxAndBlockData@ItemStack@@QEBA_NAEBV1@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool useOn(class Actor& a0, int a1, int a2, int a3, unsigned char a4, float a5, float a6, float a7) {
		bool (ItemStack::*rv)(class Actor&, int, int, int, unsigned char, float, float, float);
		*((void**)&rv) = dlsym("?useOn@ItemStack@@QEAA_NAEAVActor@@HHHEMMM@Z");
		return (this->*rv)(a0, a1, a2, a3, a4, a5, a6, a7);
	}
	MCINLINE void reinit(class BlockLegacy const& a0, int a1) {
		void (ItemStack::*rv)(class BlockLegacy const&, int);
		*((void**)&rv) = dlsym("?reinit@ItemStack@@UEAAXAEBVBlockLegacy@@H@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void useAsFuel() {
		void (ItemStack::*rv)();
		*((void**)&rv) = dlsym("?useAsFuel@ItemStack@@QEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE void reinit(class Item const& a0, int a1, int a2) {
		void (ItemStack::*rv)(class Item const&, int, int);
		*((void**)&rv) = dlsym("?reinit@ItemStack@@MEAAXAEBVItem@@HH@Z");
		return (this->*rv)(a0, a1, a2);
	}
#endif
#if 0
//   bad fun  

	// ??0ItemStack@@QEAA@XZ
	// ItemStack::ItemStack(void)
	MCINLINE static  class ItemStack  fromTag(class CompoundTag const & a0,class Level & a1){
return (( class ItemStack (*)(class CompoundTag const &,class Level &))dlsym("?fromTag@ItemStack@@SA?AV1@AEBVCompoundTag@@AEAVLevel@@@Z"))(a0,a1);}
	// ??0ItemStack@@QEAA@AEBVItem@@H@Z
	// ItemStack::ItemStack(class Item const &,int)
	MCINLINE static  class ItemStack  fromTag(class CompoundTag const & a0){
return (( class ItemStack (*)(class CompoundTag const &))dlsym("?fromTag@ItemStack@@SA?AV1@AEBVCompoundTag@@@Z"))(a0);}
	MCINLINE class ItemStack  getStrippedNetworkItem()const {
class ItemStack (ItemStack::*rv)()const ; *((void**)&rv) = dlsym("?getStrippedNetworkItem@ItemStack@@QEBA?AV1@XZ"); return (this->*rv)();}
#endif
};
#pragma once
#include "Core.h"
class Item {
public:
	Item(const Item&) = delete;
	Item& operator=(const Item&) = delete;
	Item() = delete;
	#ifdef MCAPI_ITEM_EXTRA
	MCINLINE class Item& setIcon(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a0, int a1) {
		class Item& (Item::*rv)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&, int);
		*((void**)&rv) = dlsym("?setIcon@Item@@UEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE bool inventoryTick(class ItemStack& a0, class Level& a1, class Actor& a2, int a3, bool a4) const {
		bool (Item::*rv)(class ItemStack&, class Level&, class Actor&, int, bool) const;
		*((void**)&rv) = dlsym("?inventoryTick@Item@@UEBA_NAEAVItemStack@@AEAVLevel@@AEAVActor@@H_N@Z");
		return (this->*rv)(a0, a1, a2, a3, a4);
	}
	MCINLINE void _helpChangeInventoryItemInPlace(class Actor& a0, class ItemStack& a1, class ItemStack& a2, enum ItemAcquisitionMethod a3) const {
		void (Item::*rv)(class Actor&, class ItemStack&, class ItemStack&, enum ItemAcquisitionMethod) const;
		*((void**)&rv) = dlsym("?_helpChangeInventoryItemInPlace@Item@@IEBAXAEAVActor@@AEAVItemStack@@1W4ItemAcquisitionMethod@@@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE bool isSameItem(class ItemStackBase const& a0, class ItemStackBase const& a1) const {
		bool (Item::*rv)(class ItemStackBase const&, class ItemStackBase const&) const;
		*((void**)&rv) = dlsym("?isSameItem@Item@@UEBA_NAEBVItemStackBase@@0@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE bool canBeCharged() const {
		bool (Item::*rv)() const;
		*((void**)&rv) = dlsym("?canBeCharged@Item@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE bool isExperimental(class ItemDescriptor const* a0) const {
		bool (Item::*rv)(class ItemDescriptor const*) const;
		*((void**)&rv) = dlsym("?isExperimental@Item@@UEBA_NPEBVItemDescriptor@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> getSerializedName() const {
		class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> (Item::*rv)() const;
		*((void**)&rv) = dlsym("?getSerializedName@Item@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
		return (this->*rv)();
	} MCINLINE bool _useOn(class ItemInstance& a0, class Actor& a1, class BlockPos a2, unsigned char a3, float a4, float a5, float a6) const {
		bool (Item::*rv)(class ItemInstance&, class Actor&, class BlockPos, unsigned char, float, float, float) const;
		*((void**)&rv) = dlsym("?_useOn@Item@@EEBA_NAEAVItemInstance@@AEAVActor@@VBlockPos@@EMMM@Z");
		return (this->*rv)(a0, a1, a2, a3, a4, a5, a6);
	}
	MCINLINE class Item& setIcon(struct TextureUVCoordinateSet const& a0) {
		class Item& (Item::*rv)(struct TextureUVCoordinateSet const&);
		*((void**)&rv) = dlsym("?setIcon@Item@@UEAAAEAV1@AEBUTextureUVCoordinateSet@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool useOn(class ItemStack& a0, class Actor& a1, int a2, int a3, int a4, unsigned char a5, float a6, float a7, float a8) const {
		bool (Item::*rv)(class ItemStack&, class Actor&, int, int, int, unsigned char, float, float, float) const;
		*((void**)&rv) = dlsym("?useOn@Item@@QEBA_NAEAVItemStack@@AEAVActor@@HHHEMMM@Z");
		return (this->*rv)(a0, a1, a2, a3, a4, a5, a6, a7, a8);
	}
	MCINLINE class Item& setExplodable(bool a0) {
		class Item& (Item::*rv)(bool);
		*((void**)&rv) = dlsym("?setExplodable@Item@@UEAAAEAV1@_N@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool initServer(class Json::Value& a0) {
		bool (Item::*rv)(class Json::Value&);
		*((void**)&rv) = dlsym("?initServer@Item@@QEAA_NAEAVValue@
			
			@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool canBeDepleted() const {
		bool (Item::*rv)() const;
		*((void**)&rv) = dlsym("?canBeDepleted@Item@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE class Item& setRequiresWorldBuilder(bool a0) {
		class Item& (Item::*rv)(bool);
		*((void**)&rv) = dlsym("?setRequiresWorldBuilder@Item@@UEAAAEAV1@_N@Z");
		return (this->*rv)(a0);
	}
	MCINLINE enum ItemUseMethod useTimeDepleted(class ItemInstance& a0, class Level* a1, class Player* a2) const {
		enum ItemUseMethod (Item::*rv)(class ItemInstance&, class Level*, class Player*) const;
		*((void**)&rv) = dlsym("?useTimeDepleted@Item@@UEBA?AW4ItemUseMethod@@AEAVItemInstance@@PEAVLevel@@PEAVPlayer@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE class Item& setMaxDamage(int a0) {
		class Item& (Item::*rv)(int);
		*((void**)&rv) = dlsym("?setMaxDamage@Item@@UEAAAEAV1@H@Z");
		return (this->*rv)(a0);
	}
	MCINLINE enum ItemUseMethod useTimeDepleted(class ItemStack& a0, class Level* a1, class Player* a2) const {
		enum ItemUseMethod (Item::*rv)(class ItemStack&, class Level*, class Player*) const;
		*((void**)&rv) = dlsym("?useTimeDepleted@Item@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE class Item& setMaxUseDuration(int a0) {
		class Item& (Item::*rv)(int);
		*((void**)&rv) = dlsym("?setMaxUseDuration@Item@@UEAAAEAV1@H@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void hurtEnemy(class ItemInstance& a0, class Mob* a1, class Mob* a2) const {
		void (Item::*rv)(class ItemInstance&, class Mob*, class Mob*) const;
		*((void**)&rv) = dlsym("?hurtEnemy@Item@@UEBAXAEAVItemInstance@@PEAVMob@@1@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE bool isTintable() const {
		bool (Item::*rv)() const;
		*((void**)&rv) = dlsym("?isTintable@Item@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE bool mineBlock(class ItemStack& a0, class Block const& a1, int a2, int a3, int a4, class Actor* a5) const {
		bool (Item::*rv)(class ItemStack&, class Block const&, int, int, int, class Actor*) const;
		*((void**)&rv) = dlsym("?mineBlock@Item@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z");
		return (this->*rv)(a0, a1, a2, a3, a4, a5);
	}
	MCINLINE class Item& setIsGlint(bool a0) {
		class Item& (Item::*rv)(bool);
		*((void**)&rv) = dlsym("?setIsGlint@Item@@UEAAAEAV1@_N@Z");
		return (this->*rv)(a0);
	}
	MCINLINE int getLevelDataForAuxValue(int a0) const {
		int (Item::*rv)(int) const;
		*((void**)&rv) = dlsym("?getLevelDataForAuxValue@Item@@UEBAHH@Z");
		return (this->*rv)(a0);
	}
	MCINLINE static void beginCreativeGroup(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a0, class Block const* a1, class CompoundTag const* a2) {
		return ((void (*)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&, class Block const*, class CompoundTag const*))dlsym("?beginCreativeGroup@Item@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVBlock@@PEBVCompoundTag@@@Z"))(a0, a1, a2);
	}
	MCINLINE static void beginCreativeGroup(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a0, class ItemInstance const& a1) {
		return ((void (*)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&, class ItemInstance const&))dlsym("?beginCreativeGroup@Item@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemInstance@@@Z"))(a0, a1);
	}

	MCINLINE class Item& setUseAnimation(enum UseAnimation a0) {
		class Item& (Item::*rv)(enum UseAnimation);
		*((void**)&rv) = dlsym("?setUseAnimation@Item@@UEAAAEAV1@W4UseAnimation@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE class Item& setStackedByData(bool a0) {
		class Item& (Item::*rv)(bool);
		*((void**)&rv) = dlsym("?setStackedByData@Item@@UEAAAEAV1@_N@Z");
		return (this->*rv)(a0);
	}
	MCINLINE int getMaxUseDuration(class ItemStack const* a0) const {
		int (Item::*rv)(class ItemStack const*) const;
		*((void**)&rv) = dlsym("?getMaxUseDuration@Item@@UEBAHPEBVItemStack@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void readAdditionalData(class ItemStackBase& a0, class CompoundTag const& a1) const {
		void (Item::*rv)(class ItemStackBase&, class CompoundTag const&) const;
		*((void**)&rv) = dlsym("?readAdditionalData@Item@@UEBAXAEAVItemStackBase@@AEBVCompoundTag@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void writeUserData(class ItemStackBase const& a0, class IDataOutput& a1) const {
		void (Item::*rv)(class ItemStackBase const&, class IDataOutput&) const;
		*((void**)&rv) = dlsym("?writeUserData@Item@@UEBAXAEBVItemStackBase@@AEAVIDataOutput@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE bool canDestroySpecial(class Block const& a0) const {
		bool (Item::*rv)(class Block const&) const;
		*((void**)&rv) = dlsym("?canDestroySpecial@Item@@UEBA_NAEBVBlock@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE int getAnimationFrameFor(class Mob* a0, bool a1, class ItemStack const* a2, bool a3) const {
		int (Item::*rv)(class Mob*, bool, class ItemStack const*, bool) const;
		*((void**)&rv) = dlsym("?getAnimationFrameFor@Item@@UEBAHPEAVMob@@_NPEBVItemStack@@_N@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE enum InHandUpdateType getInHandUpdateType(class Player const& a0, class ItemInstance const& a1, class ItemInstance const& a2, bool a3, bool a4) const {
		enum InHandUpdateType (Item::*rv)(class Player const&, class ItemInstance const&, class ItemInstance const&, bool, bool) const;
		*((void**)&rv) = dlsym("?getInHandUpdateType@Item@@UEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemInstance@@1_N2@Z");
		return (this->*rv)(a0, a1, a2, a3, a4);
	}
	MCINLINE bool isFertilizer(int a0) const {
		bool (Item::*rv)(int) const;
		*((void**)&rv) = dlsym("?isFertilizer@Item@@UEBA_NH@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool _calculatePlacePos(class ItemInstance& a0, class Actor& a1, unsigned char& a2, class BlockPos& a3) const {
		bool (Item::*rv)(class ItemInstance&, class Actor&, unsigned char&, class BlockPos&) const;
		*((void**)&rv) = dlsym("?_calculatePlacePos@Item@@EEBA_NAEAVItemInstance@@AEAVActor@@AEAEAEAVBlockPos@@@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE static class TextureAtlasItem const& getTextureItem(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a0) {
		return ((class TextureAtlasItem const& (*)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&))dlsym("?getTextureItem@Item@@SAAEBVTextureAtlasItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z"))(a0);
	}
	MCINLINE class Item& setCategory(enum CreativeItemCategory a0) {
		class Item& (Item::*rv)(enum CreativeItemCategory);
		*((void**)&rv) = dlsym("?setCategory@Item@@UEAAAEAV1@W4CreativeItemCategory@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool _useOn(class ItemStack& a0, class Actor& a1, class BlockPos a2, unsigned char a3, float a4, float a5, float a6) const {
		bool (Item::*rv)(class ItemStack&, class Actor&, class BlockPos, unsigned char, float, float, float) const;
		*((void**)&rv) = dlsym("?_useOn@Item@@EEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EMMM@Z");
		return (this->*rv)(a0, a1, a2, a3, a4, a5, a6);
	}
	MCINLINE void releaseUsing(class ItemStack& a0, class Player* a1, int a2) const {
		void (Item::*rv)(class ItemStack&, class Player*, int) const;
		*((void**)&rv) = dlsym("?releaseUsing@Item@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE static struct TextureUVCoordinateSet const& getIconTextureUVSet(class TextureAtlasItem const& a0, int a1, int a2) {
		return ((struct TextureUVCoordinateSet const& (*)(class TextureAtlasItem const&, int, int))dlsym("?getIconTextureUVSet@Item@@SAAEBUTextureUVCoordinateSet@@AEBVTextureAtlasItem@@HH@Z"))(a0, a1, a2);
	}
	MCINLINE int getMaxUseDuration(class ItemInstance const* a0) const {
		int (Item::*rv)(class ItemInstance const*) const;
		*((void**)&rv) = dlsym("?getMaxUseDuration@Item@@UEBAHPEBVItemInstance@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool dispense(class BlockSource& a0, class Container& a1, int a2, class Vec3 const& a3, unsigned char a4) const {
		bool (Item::*rv)(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;
		*((void**)&rv) = dlsym("?dispense@Item@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z");
		return (this->*rv)(a0, a1, a2, a3, a4);
	}
	MCINLINE static void addCreativeItem(class Block const& a0) {
		return ((void (*)(class Block const&))dlsym("?addCreativeItem@Item@@SAXAEBVBlock@@@Z"))(a0);
	}
	MCINLINE bool isMultiColorTinted(class ItemStack const& a0) const {
		bool (Item::*rv)(class ItemStack const&) const;
		*((void**)&rv) = dlsym("?isMultiColorTinted@Item@@UEBA_NAEBVItemStack@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool isEmissive(int a0) const {
		bool (Item::*rv)(int) const;
		*((void**)&rv) = dlsym("?isEmissive@Item@@UEBA_NH@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool isArmor() const {
		bool (Item::*rv)() const;
		*((void**)&rv) = dlsym("?isArmor@Item@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE void saveAdditionalData(class ItemStackBase const& a0, class CompoundTag& a1) const {
		void (Item::*rv)(class ItemStackBase const&, class CompoundTag&) const;
		*((void**)&rv) = dlsym("?saveAdditionalData@Item@@UEBAXAEBVItemStackBase@@AEAVCompoundTag@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> buildDescriptionId(class ItemDescriptor const& a0, class std::unique_ptr<class CompoundTag, struct std::default_delete<class CompoundTag>> const& a1) const {
		class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> (Item::*rv)(class ItemDescriptor const&, class std::unique_ptr<class CompoundTag, struct std::default_delete<class CompoundTag>> const&) const;
		*((void**)&rv) = dlsym("?buildDescriptionId@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@AEBV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@3@@Z");
		return (this->*rv)(a0, a1);
	} MCINLINE unsigned char getMaxStackSize(class ItemDescriptor const& a0) const {
		unsigned char (Item::*rv)(class ItemDescriptor const&) const;
		*((void**)&rv) = dlsym("?getMaxStackSize@Item@@UEBAEAEBVItemDescriptor@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> buildCategoryDescriptionName() const {
		class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> (Item::*rv)() const;
		*((void**)&rv) = dlsym("?buildCategoryDescriptionName@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
		return (this->*rv)();
	} MCINLINE bool uniqueAuxValues() const {
		bool (Item::*rv)() const;
		*((void**)&rv) = dlsym("?uniqueAuxValues@Item@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE int getArmorValue() const {
		int (Item::*rv)() const;
		*((void**)&rv) = dlsym("?getArmorValue@Item@@UEBAHXZ");
		return (this->*rv)();
	}
	MCINLINE class Item& setAllowOffhand(bool a0) {
		class Item& (Item::*rv)(bool);
		*((void**)&rv) = dlsym("?setAllowOffhand@Item@@QEAAAEAV1@_N@Z");
		return (this->*rv)(a0);
	}
	MCINLINE class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& getCommandName() const {
		class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& (Item::*rv)() const;
		*((void**)&rv) = dlsym("?getCommandName@Item@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
		return (this->*rv)();
	} MCINLINE class Item& setIconAtlas(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a0, int a1) {
		class Item& (Item::*rv)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&, int);
		*((void**)&rv) = dlsym("?setIconAtlas@Item@@UEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE bool isThrowable() const {
		bool (Item::*rv)() const;
		*((void**)&rv) = dlsym("?isThrowable@Item@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE void readUserData(class ItemStackBase& a0, class IDataInput& a1, class ReadOnlyBinaryStream& a2) const {
		void (Item::*rv)(class ItemStackBase&, class IDataInput&, class ReadOnlyBinaryStream&) const;
		*((void**)&rv) = dlsym("?readUserData@Item@@UEBAXAEAVItemStackBase@@AEAVIDataInput@@AEAVReadOnlyBinaryStream@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE float destroySpeedBonus(class ItemInstance const& a0) const {
		float (Item::*rv)(class ItemInstance const&) const;
		*((void**)&rv) = dlsym("?destroySpeedBonus@Item@@IEBAMAEBVItemInstance@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE static void beginCreativeGroup(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a0, short a1, short a2, class CompoundTag const* a3) {
		return ((void (*)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&, short, short, class CompoundTag const*))dlsym("?beginCreativeGroup@Item@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@FFPEBVCompoundTag@@@Z"))(a0, a1, a2, a3);
	}
	MCINLINE enum BlockShape getBlockShape() const {
		enum BlockShape (Item::*rv)() const;
		*((void**)&rv) = dlsym("?getBlockShape@Item@@UEBA?AW4BlockShape@@XZ");
		return (this->*rv)();
	}
	MCINLINE class Item& setHandEquipped() {
		class Item& (Item::*rv)();
		*((void**)&rv) = dlsym("?setHandEquipped@Item@@UEAAAEAV1@XZ");
		return (this->*rv)();
	}
	MCINLINE enum CooldownType getCooldownType() const {
		enum CooldownType (Item::*rv)() const;
		*((void**)&rv) = dlsym("?getCooldownType@Item@@UEBA?AW4CooldownType@@XZ");
		return (this->*rv)();
	}
	MCINLINE int getCooldownTime() const {
		int (Item::*rv)() const;
		*((void**)&rv) = dlsym("?getCooldownTime@Item@@UEBAHXZ");
		return (this->*rv)();
	}
	MCINLINE class Item& setMinRequiredBaseGameVersion(class BaseGameVersion const& a0) {
		class Item& (Item::*rv)(class BaseGameVersion const&);
		*((void**)&rv) = dlsym("?setMinRequiredBaseGameVersion@Item@@QEAAAEAV1@AEBVBaseGameVersion@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE class Item& setShouldDespawn(bool a0) {
		class Item& (Item::*rv)(bool);
		*((void**)&rv) = dlsym("?setShouldDespawn@Item@@UEAAAEAV1@_N@Z");
		return (this->*rv)(a0);
	}
	MCINLINE class Item& setMaxStackSize(unsigned char a0) {
		class Item& (Item::*rv)(unsigned char);
		*((void**)&rv) = dlsym("?setMaxStackSize@Item@@UEAAAEAV1@E@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void playSoundIncrementally(class ItemStack const& a0, class Mob& a1) const {
		void (Item::*rv)(class ItemStack const&, class Mob&) const;
		*((void**)&rv) = dlsym("?playSoundIncrementally@Item@@UEBAXAEBVItemStack@@AEAVMob@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE static void addCreativeItem(class ItemInstance const& a0) {
		return ((void (*)(class ItemInstance const&))dlsym("?addCreativeItem@Item@@SAXAEBVItemInstance@@@Z"))(a0);
	}
	MCINLINE int getDamageChance(int a0) const {
		int (Item::*rv)(int) const;
		*((void**)&rv) = dlsym("?getDamageChance@Item@@UEBAHH@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool _checkUseOnPermissions(class Actor& a0, class ItemInstance& a1, unsigned char const& a2, class BlockPos const& a3) const {
		bool (Item::*rv)(class Actor&, class ItemInstance&, unsigned char const&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?_checkUseOnPermissions@Item@@EEBA_NAEAVActor@@AEAVItemInstance@@AEBEAEBVBlockPos@@@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE float getDestroySpeed(class ItemInstance const& a0, class Block const& a1) const {
		float (Item::*rv)(class ItemInstance const&, class Block const&) const;
		*((void**)&rv) = dlsym("?getDestroySpeed@Item@@UEBAMAEBVItemInstance@@AEBVBlock@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE bool showsDurabilityInCreative() const {
		bool (Item::*rv)() const;
		*((void**)&rv) = dlsym("?showsDurabilityInCreative@Item@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE bool mineBlock(class ItemInstance& a0, class Block const& a1, int a2, int a3, int a4, class Actor* a5) const {
		bool (Item::*rv)(class ItemInstance&, class Block const&, int, int, int, class Actor*) const;
		*((void**)&rv) = dlsym("?mineBlock@Item@@UEBA_NAEAVItemInstance@@AEBVBlock@@HHHPEAVActor@@@Z");
		return (this->*rv)(a0, a1, a2, a3, a4, a5);
	}
	MCINLINE bool isDye() const {
		bool (Item::*rv)() const;
		*((void**)&rv) = dlsym("?isDye@Item@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> buildDescriptionName(class ItemStackBase const& a0) const {
		class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> (Item::*rv)(class ItemStackBase const&) const;
		*((void**)&rv) = dlsym("?buildDescriptionName@Item@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z");
		return (this->*rv)(a0);
	} MCINLINE void fixupOnLoad(class ItemStackBase& a0) const {
		void (Item::*rv)(class ItemStackBase&) const;
		*((void**)&rv) = dlsym("?fixupOnLoad@Item@@UEBAXAEAVItemStackBase@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool isGlint(class ItemStackBase const& a0) const {
		bool (Item::*rv)(class ItemStackBase const&) const;
		*((void**)&rv) = dlsym("?isGlint@Item@@UEBA_NAEBVItemStackBase@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE void playSoundIncrementally(class ItemInstance const& a0, class Mob& a1) const {
		void (Item::*rv)(class ItemInstance const&, class Mob&) const;
		*((void**)&rv) = dlsym("?playSoundIncrementally@Item@@UEBAXAEBVItemInstance@@AEAVMob@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE struct TextureUVCoordinateSet const& getIcon(class ItemStackBase const& a0, int a1, bool a2) const {
		struct TextureUVCoordinateSet const& (Item::*rv)(class ItemStackBase const&, int, bool)const;
		*((void**)&rv) = dlsym("?getIcon@Item@@UEBAAEBUTextureUVCoordinateSet@@AEBVItemStackBase@@H_N@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE int getIconYOffset() const {
		int (Item::*rv)() const;
		*((void**)&rv) = dlsym("?getIconYOffset@Item@@UEBAHXZ");
		return (this->*rv)();
	}
	MCINLINE bool canDestroyInCreative() const {
		bool (Item::*rv)() const;
		*((void**)&rv) = dlsym("?canDestroyInCreative@Item@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE bool isDestructive(int a0) const {
		bool (Item::*rv)(int) const;
		*((void**)&rv) = dlsym("?isDestructive@Item@@UEBA_NH@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool isComplex() const {
		bool (Item::*rv)() const;
		*((void**)&rv) = dlsym("?isComplex@Item@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE static void addCreativeItem(class Item* a0, short a1) {
		return ((void (*)(class Item*, short))dlsym("?addCreativeItem@Item@@SAXPEAV1@F@Z"))(a0, a1);
	}
	MCINLINE void hurtEnemy(class ItemStack& a0, class Mob* a1, class Mob* a2) const {
		void (Item::*rv)(class ItemStack&, class Mob*, class Mob*) const;
		*((void**)&rv) = dlsym("?hurtEnemy@Item@@UEBAXAEAVItemStack@@PEAVMob@@1@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE void releaseUsing(class ItemInstance& a0, class Player* a1, int a2) const {
		void (Item::*rv)(class ItemInstance&, class Player*, int) const;
		*((void**)&rv) = dlsym("?releaseUsing@Item@@UEBAXAEAVItemInstance@@PEAVPlayer@@H@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE enum InHandUpdateType getInHandUpdateType(class Player const& a0, class ItemStack const& a1, class ItemStack const& a2, bool a3, bool a4) const {
		enum InHandUpdateType (Item::*rv)(class Player const&, class ItemStack const&, class ItemStack const&, bool, bool) const;
		*((void**)&rv) = dlsym("?getInHandUpdateType@Item@@UEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemStack@@1_N2@Z");
		return (this->*rv)(a0, a1, a2, a3, a4);
	}
	MCINLINE bool isValidRepairItem(class ItemInstance const& a0, class ItemInstance const& a1) const {
		bool (Item::*rv)(class ItemInstance const&, class ItemInstance const&) const;
		*((void**)&rv) = dlsym("?isValidRepairItem@Item@@UEBA_NAEBVItemInstance@@0@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void appendFormattedHovertext(class ItemStackBase const& a0, class Level& a1, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>& a2, bool a3) const {
		void (Item::*rv)(class ItemStackBase const&, class Level&, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>&, bool) const;
		*((void**)&rv) = dlsym("?appendFormattedHovertext@Item@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> getAuxValuesDescription() const {
		class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> (Item::*rv)() const;
		*((void**)&rv) = dlsym("?getAuxValuesDescription@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
		return (this->*rv)();
	} MCINLINE void fixupOnLoad(class ItemStackBase& a0, class Level& a1) const {
		void (Item::*rv)(class ItemStackBase&, class Level&) const;
		*((void**)&rv) = dlsym("?fixupOnLoad@Item@@UEBAXAEAVItemStackBase@@AEAVLevel@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> getInteractText(class Player const& a0) const {
		class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> (Item::*rv)(class Player const&) const;
		*((void**)&rv) = dlsym("?getInteractText@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@@Z");
		return (this->*rv)(a0);
	} MCINLINE bool isHandEquipped() const {
		bool (Item::*rv)() const;
		*((void**)&rv) = dlsym("?isHandEquipped@Item@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE int getEnchantSlot() const {
		int (Item::*rv)() const;
		*((void**)&rv) = dlsym("?getEnchantSlot@Item@@UEBAHXZ");
		return (this->*rv)();
	}
	MCINLINE void setDamageValue(class ItemStackBase& a0, short a1) const {
		void (Item::*rv)(class ItemStackBase&, short) const;
		*((void**)&rv) = dlsym("?setDamageValue@Item@@UEBAXAEAVItemStackBase@@F@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE int getAttackDamage() const {
		int (Item::*rv)() const;
		*((void**)&rv) = dlsym("?getAttackDamage@Item@@UEBAHXZ");
		return (this->*rv)();
	}
	MCINLINE short getDamageValue(class std::unique_ptr<class CompoundTag, struct std::default_delete<class CompoundTag>> const& a0) const {
		short (Item::*rv)(class std::unique_ptr<class CompoundTag, struct std::default_delete<class CompoundTag>> const&) const;
		*((void**)&rv) = dlsym("?getDamageValue@Item@@UEBAFAEBV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool isPattern() const {
		bool (Item::*rv)() const;
		*((void**)&rv) = dlsym("?isPattern@Item@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE static void beginCreativeGroup(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a0, class Item* a1, short a2, class CompoundTag const* a3) {
		return ((void (*)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&, class Item*, short, class CompoundTag const*))dlsym("?beginCreativeGroup@Item@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAV1@FPEBVCompoundTag@@@Z"))(a0, a1, a2, a3);
	}
	MCINLINE class ItemStack& use(class ItemStack& a0, class Player& a1) const {
		class ItemStack& (Item::*rv)(class ItemStack&, class Player&)const;
		*((void**)&rv) = dlsym("?use@Item@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE void tearDown() {
		void (Item::*rv)();
		*((void**)&rv) = dlsym("?tearDown@Item@@UEAAXXZ");
		return (this->*rv)();
	}
	MCINLINE bool isValidAuxValue(int a0) const {
		bool (Item::*rv)(int) const;
		*((void**)&rv) = dlsym("?isValidAuxValue@Item@@UEBA_NH@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool isWearableThroughLootTable(class std::unique_ptr<class CompoundTag, struct std::default_delete<class CompoundTag>> const& a0) const {
		bool (Item::*rv)(class std::unique_ptr<class CompoundTag, struct std::default_delete<class CompoundTag>> const&) const;
		*((void**)&rv) = dlsym("?isWearableThroughLootTable@Item@@UEBA_NAEBV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool requiresInteract() const {
		bool (Item::*rv)() const;
		*((void**)&rv) = dlsym("?requiresInteract@Item@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE bool isStackedByData() const {
		bool (Item::*rv)() const;
		*((void**)&rv) = dlsym("?isStackedByData@Item@@UEBA_NXZ");
		return (this->*rv)();
	}
	MCINLINE bool _calculatePlacePos(class ItemStack& a0, class Actor& a1, unsigned char& a2, class BlockPos& a3) const {
		bool (Item::*rv)(class ItemStack&, class Actor&, unsigned char&, class BlockPos&) const;
		*((void**)&rv) = dlsym("?_calculatePlacePos@Item@@EEBA_NAEAVItemStack@@AEAVActor@@AEAEAEAVBlockPos@@@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	MCINLINE class Item& setIsMirroredArt(bool a0) {
		class Item& (Item::*rv)(bool);
		*((void**)&rv) = dlsym("?setIsMirroredArt@Item@@QEAAAEAV1@_N@Z");
		return (this->*rv)(a0);
	}
	MCINLINE bool updateCustomBlockEntityTag(class BlockSource& a0, class ItemStack& a1, class BlockPos& a2) const {
		bool (Item::*rv)(class BlockSource&, class ItemStack&, class BlockPos&) const;
		*((void**)&rv) = dlsym("?updateCustomBlockEntityTag@Item@@QEBA_NAEAVBlockSource@@AEAVItemStack@@AEAVBlockPos@@@Z");
		return (this->*rv)(a0, a1, a2);
	}
	MCINLINE void refreshedInContainer(class ItemStackBase& a0, class Level& a1) const {
		void (Item::*rv)(class ItemStackBase&, class Level&) const;
		*((void**)&rv) = dlsym("?refreshedInContainer@Item@@UEBAXAEAVItemStackBase@@AEAVLevel@@@Z");
		return (this->*rv)(a0, a1);
	}
	MCINLINE static void addCreativeItem(class ItemStack const& a0) {
		return ((void (*)(class ItemStack const&))dlsym("?addCreativeItem@Item@@SAXAEBVItemStack@@@Z"))(a0);
	}
	MCINLINE short getMaxDamage() const {
		short (Item::*rv)() const;
		*((void**)&rv) = dlsym("?getMaxDamage@Item@@UEBAFXZ");
		return (this->*rv)();
	}
	MCINLINE bool isLiquidClipItem(int a0) const {
		bool (Item::*rv)(int) const;
		*((void**)&rv) = dlsym("?isLiquidClipItem@Item@@UEBA_NH@Z");
		return (this->*rv)(a0);
	}
	MCINLINE class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> buildEffectDescriptionName(class ItemStackBase const& a0) const {
		class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> (Item::*rv)(class ItemStackBase const&) const;
		*((void**)&rv) = dlsym("?buildEffectDescriptionName@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z");
		return (this->*rv)(a0);
	} MCINLINE bool _checkUseOnPermissions(class Actor& a0, class ItemStack& a1, unsigned char const& a2, class BlockPos const& a3) const {
		bool (Item::*rv)(class Actor&, class ItemStack&, unsigned char const&, class BlockPos const&) const;
		*((void**)&rv) = dlsym("?_checkUseOnPermissions@Item@@EEBA_NAEAVActor@@AEAVItemStack@@AEBEAEBVBlockPos@@@Z");
		return (this->*rv)(a0, a1, a2, a3);
	}
	#endif
	MCINLINE int getEnchantValue() const {
		int (Item::*rv)() const;
		*((void**)&rv) = dlsym("?getEnchantValue@Item@@UEBAHXZ");
		return (this->*rv)();
	}
	MCINLINE bool initServer(class Json::Value& a0) {
		bool (Item:: * rv)(class Json::Value&);
		*((void**)&rv) = dlsym("?initServer@Item@@QEAA_NAEAVValue@@@@Z");
			return (this->*rv)(a0);
	}

#if 0
//   bad fun  

	// ??0Item@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
	// Item::Item(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,short)
	MCINLINE static  struct TextureUVCoordinateSet  getTextureUVCoordinateSet(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & a0,int a1){
return (( struct TextureUVCoordinateSet (*)(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,int))dlsym("?getTextureUVCoordinateSet@Item@@SA?AUTextureUVCoordinateSet@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z"))(a0,a1);}
	MCINLINE  class Color  getColor(class std::unique_ptr<class CompoundTag,struct std::default_delete<class CompoundTag> > const & a0,class ItemDescriptor const & a1)const {
 class Color (Item::*rv)(class std::unique_ptr<class CompoundTag,struct std::default_delete<class CompoundTag> > const &,class ItemDescriptor const &)const ; *((void**)&rv) = dlsym("?getColor@Item@@UEBA?AVColor@@AEBV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBVItemDescriptor@@@Z"); return (this->*rv)(a0,a1);}
	MCINLINE  class Color  getSecondaryColor(class ItemStack const & a0)const {
 class Color (Item::*rv)(class ItemStack const &)const ; *((void**)&rv) = dlsym("?getSecondaryColor@Item@@UEBA?AVColor@@AEBVItemStack@@@Z"); return (this->*rv)(a0);}
	MCINLINE  class Color  getBaseColor(class ItemStack const & a0)const {
 class Color (Item::*rv)(class ItemStack const &)const ; *((void**)&rv) = dlsym("?getBaseColor@Item@@UEBA?AVColor@@AEBVItemStack@@@Z"); return (this->*rv)(a0);}
#endif
};
