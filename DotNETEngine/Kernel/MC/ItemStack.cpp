#include "../../Extra/mutex.h"
#include "../../Header/MC/ItemStack.hpp"
#include <memory>
namespace MC
{

	inline ItemStack^ ItemStack::Create()
	{
		return gcnew ItemStack(::ItemStack::create());
	}

	inline ItemStack^ ItemStack::Create(String^ type, int count)
	{
		return gcnew ItemStack(::ItemStack::create(marshalString<Encoding::E_UTF8>(type), count), true);
	}

	inline ItemStack^ ItemStack::Create(CompoundTag^ tag)
	{
		return gcnew ItemStack(::ItemStack::create(std::unique_ptr<::CompoundTag>((::CompoundTag*)tag->Release())), true);
	}

	inline ItemStack^ ItemStack::FromItemInstance(ItemInstance^ ins)
	{
		return gcnew ItemStack(new ::ItemStack(::ItemStack::fromItemInstance(ins)), true);
	}

	inline ItemStack^ ItemStack::Clone_s()
	{
		return gcnew ItemStack(NativePtr->clone_s());
	}

	inline String^ ItemStack::TypeName::get()
	{
		return marshalString<Encoding::E_UTF8>(NativePtr->getTypeName());
	}

	inline int ItemStack::Aux::get()
	{
		return NativePtr->getAux();
	}

	inline int ItemStack::Count::get()
	{
		return NativePtr->getCount();
	}

	inline bool ItemStack::setItem(ItemStack^ newItem)
	{
		return NativePtr->setItem(newItem->NativePtr);
	}

	bool ItemStack::setLore(array<String^>^ lores)
	{
		std::vector<std::string> stdlores;
		for (int i = 0; i < lores->Length; ++i)
		{
			auto str = lores[i];
			stdlores.emplace_back(marshalString<Encoding::E_UTF8>((str)));
		}
		return NativePtr->setLore(stdlores);
	}

	inline CompoundTag^ ItemStack::getNbt()
	{
		return gcnew CompoundTag(NativePtr->getNbt().release(), true);
	}

	inline bool ItemStack::setNbt(CompoundTag^ nbt)
	{
		return NativePtr->setNbt(nbt->NativePtr);
	}
} // namespace MC


#ifdef INCLUDE_MCAPI

void MC::ItemStack::SetNull()
{
	((class ::ItemStack*)NativePtr)->setNull();
}

::System::String^ MC::ItemStack::ToString()
{
	auto __ret = ((class ::ItemStack*)NativePtr)->toString();
	return clix::marshalString<clix::E_UTF8>(__ret);
}

::System::String^ MC::ItemStack::ToDebugString()
{
	auto __ret = ((class ::ItemStack*)NativePtr)->toDebugString();
	return clix::marshalString<clix::E_UTF8>(__ret);
}

//void MC::ItemStack::Autoclassinit2(unsigned long long _0)
//{
//    ((class ::ItemStack*)NativePtr)->__autoclassinit2(_0);
//}

void MC::ItemStack::AssignNetIdVariant(MC::ItemStack^ _0)
{
	if (ReferenceEquals(_0, nullptr))
		throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
	auto& __arg0 = *(class ::ItemStack*)_0->NativePtr;
	((class ::ItemStack*)NativePtr)->_assignNetIdVariant(__arg0);
}

MC::ItemStack^ MC::ItemStack::Clone()
{
	auto __ret = ((class ::ItemStack*)NativePtr)->clone();
	auto ____ret = new class ::ItemStack(__ret);
	return (____ret == nullptr) ? nullptr : gcnew ::MC::ItemStack((class ::ItemStack*)____ret, true);
}

bool MC::ItemStack::MatchesAndNetIdVariantMatches(MC::ItemStack^ _0)
{
	if (ReferenceEquals(_0, nullptr))
		throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
	auto& __arg0 = *(class ::ItemStack*)_0->NativePtr;
	auto __ret = ((class ::ItemStack*)NativePtr)->matchesAndNetIdVariantMatches(__arg0);
	return __ret;
}

bool MC::ItemStack::MatchesNetIdVariant(MC::ItemStack^ _0)
{
	if (ReferenceEquals(_0, nullptr))
		throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
	auto& __arg0 = *(class ::ItemStack*)_0->NativePtr;
	auto __ret = ((class ::ItemStack*)NativePtr)->matchesNetIdVariant(__arg0);
	return __ret;
}

bool MC::ItemStack::SameItemAndAuxAndBlockData(MC::ItemStack^ _0)
{
	if (ReferenceEquals(_0, nullptr))
		throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
	auto& __arg0 = *(class ::ItemStack*)_0->NativePtr;
	auto __ret = ((class ::ItemStack*)NativePtr)->sameItemAndAuxAndBlockData(__arg0);
	return __ret;
}

void MC::ItemStack::ServerInitNetId()
{
	((class ::ItemStack*)NativePtr)->serverInitNetId();
}

void MC::ItemStack::UseAsFuel()
{
	((class ::ItemStack*)NativePtr)->useAsFuel();
}

// MC::ItemStackNetIdVariant ^ MC::ItemStack::ItemStackNetIdVariant::get()
//{
//     auto& __ret = ((class ::ItemStack*)NativePtr)->getItemStackNetIdVariant();
//     return (MC::ItemStackNetIdVariant ^)((&__ret == nullptr) ? nullptr : gcnew ::MC::ItemStackNetIdVariant((struct ::ItemStackNetIdVariant*)&__ret));
// }

int MC::ItemStack::MaxUseDuration::get()
{
	auto __ret = ((class ::ItemStack*)NativePtr)->getMaxUseDuration();
	return __ret;
}

MC::ItemStack^ MC::ItemStack::StrippedNetworkItem::get()
{
	auto __ret = ((class ::ItemStack*)NativePtr)->getStrippedNetworkItem();
	auto ____ret = new class ::ItemStack(__ret);
	return (____ret == nullptr) ? nullptr : gcnew ::MC::ItemStack((class ::ItemStack*)____ret, true);
}

bool MC::ItemStack::HasItemStackNetId::get()
{
	auto __ret = ((class ::ItemStack*)NativePtr)->hasItemStackNetId();
	return __ret;
}

MC::ItemStack^ MC::ItemStack::EMPTY_ITEM::get()
{
	return (&::ItemStack::EMPTY_ITEM == nullptr) ? nullptr : gcnew ::MC::ItemStack((class ::ItemStack*) & ::ItemStack::EMPTY_ITEM);
}

#endif // INCLUDE_MCAPI
