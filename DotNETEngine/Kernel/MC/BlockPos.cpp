#include "../../Header/MC/BlockPos.hpp"
#include "../../Header/MC/Vec3.hpp"
namespace MC
{

	inline int BlockPos::X::get()
	{
		return NativePtr->x;
	}
	inline void BlockPos::X::set(int mx)
	{
		NativePtr->x = mx;
	}
	inline int BlockPos::Y::get()
	{
		return NativePtr->y;
	}
	inline void BlockPos::Y::set(int my)
	{
		NativePtr->y = my;
	}
	inline int BlockPos::Z::get()
	{
		return NativePtr->z;
	}
	inline void BlockPos::Z::set(int mz)
	{
		NativePtr->z = mz;
	}

	inline String^ BlockPos::ToString()
	{
		return marshalString<Encoding::E_UTF8>(NativePtr->toString());
	}

	inline BlockPos^ BlockPos::Add(int dx)
	{
		return gcnew BlockPos(NativePtr->add(dx));
	}

	inline BlockPos^ BlockPos::Add(int dx, int dy)
	{
		return gcnew BlockPos(NativePtr->add(dx, dy));
	}

	inline BlockPos^ BlockPos::Add(int dx, int dy, int dz)
	{
		return gcnew BlockPos(NativePtr->add(dx, dy, dz));
	}

	inline Vec3^ BlockPos::ToVec3()
	{
		return gcnew Vec3(NativePtr->toVec3());
	}

	inline Vec3^ BlockPos::BottomCenter()
	{
		return gcnew Vec3(NativePtr->bottomCenter());
	}

	inline Vec3^ BlockPos::Center()
	{
		return gcnew Vec3(NativePtr->center());
	}

	BlockPos^ BlockPos::Create()
	{
		return gcnew BlockPos(::BlockPos());
	}

	BlockPos^ BlockPos::Create(int mx, int my, int mz)
	{
		return gcnew BlockPos(::BlockPos(mx, my, mz));
	}

	BlockPos^ BlockPos::Create(Vec3^ vec)
	{
		return gcnew BlockPos(::BlockPos(vec));
	}

	BlockPos^ BlockPos::Create(float f1, float f2, float f3)
	{
		return gcnew BlockPos(::BlockPos(f1, f2, f3));
	}

	//BlockPos ^ BlockPos::Create(double d1, double d2, double d3)
	//{
	//    return gcnew BlockPos(::BlockPos(d1, d2, d3));
	//}

	inline bool BlockPos::operator==(BlockPos^ a, BlockPos^ b)
	{
		return *a->NativePtr == *b->NativePtr;
	}
	inline bool BlockPos::operator!=(BlockPos^ a, BlockPos^ b)
	{
		return *a->NativePtr != *b->NativePtr;
	}
	inline BlockPos^ BlockPos::operator+(BlockPos^ a, BlockPos^ b)
	{
		return gcnew BlockPos(*a->NativePtr + *b->NativePtr);
	}

	inline BlockPos^ BlockPos::operator-(BlockPos^ a, BlockPos^ b)
	{
		return gcnew BlockPos(*a->NativePtr - *b->NativePtr);
	}

#ifndef INCLUDE_MCAPI

	MC::BlockPos^ MC::BlockPos::MAX::get()
	{
		return (&::BlockPos::MAX == nullptr) ? nullptr : gcnew ::MC::BlockPos((class ::BlockPos*) & ::BlockPos::MAX);
	}

	MC::BlockPos^ MC::BlockPos::MIN::get()
	{
		return (&::BlockPos::MIN == nullptr) ? nullptr : gcnew ::MC::BlockPos((class ::BlockPos*) & ::BlockPos::MIN);
	}

	MC::BlockPos^ MC::BlockPos::ONE::get()
	{
		return (&::BlockPos::ONE == nullptr) ? nullptr : gcnew ::MC::BlockPos((class ::BlockPos*) & ::BlockPos::ONE);
	}

	MC::BlockPos^ MC::BlockPos::ZERO::get()
	{
		return (&::BlockPos::ZERO == nullptr) ? nullptr : gcnew ::MC::BlockPos((class ::BlockPos*) & ::BlockPos::ZERO);
	}
#endif
} // namespace MC

#ifdef INCLUDE_MCAPI

MC::BlockPos^ MC::BlockPos::Neighbor(unsigned char _0)
{
	auto __ret = ((class ::BlockPos*)NativePtr)->neighbor(_0);
	auto ____ret = new class ::BlockPos(__ret);
	return (____ret == nullptr) ? nullptr : gcnew ::MC::BlockPos((class ::BlockPos*)____ret, true);
}

MC::BlockPos^ MC::BlockPos::Relative(unsigned char _0, int _1)
{
	auto __ret = ((class ::BlockPos*)NativePtr)->relative(_0, _1);
	auto ____ret = new class ::BlockPos(__ret);
	return (____ret == nullptr) ? nullptr : gcnew ::MC::BlockPos((class ::BlockPos*)____ret, true);
}

void MC::BlockPos::BindType()
{
	::BlockPos::bindType();
}

MC::BlockPos::BlockPos(MC::BlockPos^ _0)
{
	OwnsNativeInstance = true;
	if (ReferenceEquals(_0, nullptr))
		throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
	auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
	NativePtr = new class ::BlockPos(__arg0);
}

MC::BlockPos::operator MC::BlockPos ^ (MC::Vec3^ _0) {
	if (ReferenceEquals(_0, nullptr))
		throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
	auto& __arg0 = *(class ::Vec3*)_0->NativePtr;
	auto __ret = (::BlockPos)__arg0;
	auto ____ret = new class ::BlockPos(__ret);
	return (____ret == nullptr) ? nullptr : gcnew ::MC::BlockPos((class ::BlockPos*)____ret, true);
}

int MC::BlockPos::RandomSeed::get()
{
	auto __ret = ((class ::BlockPos*)NativePtr)->randomSeed();
	return __ret;
}

MC::BlockPos^ MC::BlockPos::MAX::get()
{
	return (&::BlockPos::MAX == nullptr) ? nullptr : gcnew ::MC::BlockPos((class ::BlockPos*) & ::BlockPos::MAX);
}

MC::BlockPos^ MC::BlockPos::MIN::get()
{
	return (&::BlockPos::MIN == nullptr) ? nullptr : gcnew ::MC::BlockPos((class ::BlockPos*) & ::BlockPos::MIN);
}

MC::BlockPos^ MC::BlockPos::ONE::get()
{
	return (&::BlockPos::ONE == nullptr) ? nullptr : gcnew ::MC::BlockPos((class ::BlockPos*) & ::BlockPos::ONE);
}

MC::BlockPos^ MC::BlockPos::ZERO::get()
{
	return (&::BlockPos::ZERO == nullptr) ? nullptr : gcnew ::MC::BlockPos((class ::BlockPos*) & ::BlockPos::ZERO);
}

#endif // INCLUDE_MCAPI
