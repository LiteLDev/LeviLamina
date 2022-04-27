#pragma once
#include <MC/ItemStackBase.hpp>

#include "Types.hpp"

namespace MC
{
	ref class HashedString;
}

namespace MC
{
	public
	ref class ItemStackBase : ClassTemplate<ItemStackBase, ::ItemStackBase>
	{
	public:
		__ctor(ItemStackBase, ::ItemStackBase);

		property int Count
		{
			int get();
		}
#if !defined INCLUDE_MCAPI
		property short Id
		{
			short get();
		};

#else

		property int AttackDamage
		{
			int get();
		};

		property short AuxValue
		{
			short get();
			void set(short);
		};

		property int BaseRepairCost
		{
			int get();
		};

		property ::System::String^ CategoryName {
			::System::String^ get();
		};

		property MC::Mce::Color^
			Color {
			MC::Mce::Color^ get();
		};

		property ::System::String^
			CustomName {
			::System::String^ get();
			void set(::System::String^);
		};

		property short DamageValue
		{
			short get();
			void set(short);
		};

		property ::System::String^ DescriptionId {
			::System::String^ get();
		};

		property ::System::String^
			EffectName {
			::System::String^ get();
		};

		property int EnchantValue
		{
			int get();
		};

		property ::System::String^ HoverName {
			::System::String^ get();
		};

		property short Id
		{
			short get();
		};

		property int IdAux
		{
			int get();
		};

		property short MaxDamage
		{
			short get();
		};

		property unsigned char MaxStackSize
		{
			unsigned char get();
		};

		property ::System::String^ Name {
			::System::String^ get();
		};

		property ::System::String^
			RawNameId {
			::System::String^ get();
		};

		property bool WasPickedUp
		{
			bool get();
			void set(bool);
		};

		property bool HasChargedItem
		{
			bool get();
		};

		property bool HasCompoundTextUserData
		{
			bool get();
		};

		property bool HasCustomHoverName
		{
			bool get();
		};

		property bool HasUserData
		{
			bool get();
		};

		property bool IsArmorItem
		{
			bool get();
		};

		property bool IsBlock
		{
			bool get();
		};

		property bool IsDamageableItem
		{
			bool get();
		};

		property bool IsDamaged
		{
			bool get();
		};

		property bool IsEnchanted
		{
			bool get();
		};

		property bool IsEnchantingBook
		{
			bool get();
		};

		property bool IsExplodable
		{
			bool get();
		};

		property bool IsFireResistant
		{
			bool get();
		};

		property bool IsFullStack
		{
			bool get();
		};

		property bool IsGlint
		{
			bool get();
		};

		property bool IsHorseArmorItem
		{
			bool get();
		};

		property bool IsLiquidClipItem
		{
			bool get();
		};

		property bool IsMusicDiscItem
		{
			bool get();
		};

		property bool IsNull
		{
			bool get();
		};

		property bool IsOffhandItem
		{
			bool get();
		};

		property bool IsPattern
		{
			bool get();
		};

		property bool IsPotionItem
		{
			bool get();
		};

		property bool IsStackedByData
		{
			bool get();
		};

		property bool IsWearableItem
		{
			bool get();
		};

		virtual void SetNull();

		virtual ::System::String^ ToString() override;

		virtual ::System::String^ ToDebugString();

		void Add(int _0);

		bool CanBeCharged();

		void ClearChargedItem();

		bool ComponentsMatch(MC::ItemStackBase^ _0);

		bool HasSameAuxValue(MC::ItemStackBase^ _0);

		bool HasSameUserData(MC::ItemStackBase^ _0);

		bool HasTag(unsigned long long _0);

		bool IsOneOfInstances(::System::Collections::Generic::List<MC::HashedString^>^ _0, bool _1);

		bool IsStackable(MC::ItemStackBase^ _0);

		bool IsValidAuxValue(int _0);

		bool Matches(MC::ItemStackBase^ _0);

		bool MatchesItem(MC::ItemStackBase^ _0);

		static operator bool(MC::ItemStackBase^ __op);

		static bool operator!=(MC::ItemStackBase^ __op, MC::ItemStackBase^ _0);

		static bool operator==(MC::ItemStackBase^ __op, MC::ItemStackBase^ _0);

		virtual bool Equals(::System::Object^ obj) override;

		void Remove(int _0);

		void ResetHoverName();

		bool SameItem(int _0, int _1);

		bool SameItem(MC::ItemStackBase^ _0);

		bool SameItemAndAux(MC::ItemStackBase^ _0);

		void Set(int _0);

		void SetCustomLore(::System::Collections::Generic::List<::System::String^>^ _0);

		void SetJustBrewed(bool _0);

		void SetPickupTime();

		void SetRepairCost(int _0);

		bool ShouldVanish();

		static bool IsValidComponent(::System::String^ _0);

		static property ::System::String^ TAG_CAN_DESTROY {
			::System::String^ get();
		};

		static property ::System::String^
			TAG_CAN_PLACE_ON {
			::System::String^ get();
		};

		static property ::System::String^
			TAG_DISPLAY {
			::System::String^ get();
		};

		static property ::System::String^
			TAG_DISPLAY_NAME {
			::System::String^ get();
		};

		static property ::System::String^
			TAG_ENCHANTS {
			::System::String^ get();
		};

		static property ::System::String^
			TAG_LORE {
			::System::String^ get();
		};

		static property ::System::String^
			TAG_REPAIR_COST {
			::System::String^ get();
		};
#endif // INCLUDE_MCAPI
	};
} // namespace MC
