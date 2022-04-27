#include "../../Header/MC/AABB.hpp"

#include "../../Header/MC/Vec3.hpp"

namespace MC
{

	AABB^ AABB::Create(Vec3^ vec1, Vec3^ vec2)
	{
		return gcnew AABB(::AABB(vec1, vec2));
	}

	AABB^ AABB::Create(Vec3^ vec1, float f1)
	{
		return gcnew AABB(::AABB(vec1, f1));
	}

	AABB^ AABB::Create(float f1, float f2, float f3, float f4, float f5, float f6)
	{
		return gcnew AABB(::AABB(f1, f2, f3, f4, f5, f6));
	}

	Vec3^ AABB::PointA::get()
	{
		return gcnew Vec3(NativePtr->pointA);
	}
	void AABB::PointA::set(Vec3^ arg)
	{
		NativePtr->pointA = arg;
	}

	Vec3^ AABB::PointB::get()
	{
		return gcnew Vec3(NativePtr->pointB);
	}
	void AABB::PointB::set(Vec3^ arg)
	{
		NativePtr->pointB = arg;
	}

	Vec3^ AABB::AxisInside(AABB^ aabb, Vec3^ vec)
	{
		return gcnew Vec3(NativePtr->axisInside(aabb, (::Vec3&)vec));
	}
} // namespace MC

#ifdef INCLUDE_MCAPI

MC::Vec3^ MC::AABB::ClipCollide(MC::AABB^ _0, MC::Vec3^ _1, bool _2, [::System::Runtime::InteropServices::In, ::System::Runtime::InteropServices::Out] float% _3)
{
	if (ReferenceEquals(_0, nullptr))
		throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
	auto& __arg0 = *(class ::AABB*)_0->NativePtr;
	if (ReferenceEquals(_1, nullptr))
		throw gcnew ::System::ArgumentNullException("_1", "Cannot be null because it is a C++ reference (&).");
	auto& __arg1 = *(class ::Vec3*)_1->NativePtr;
	float __arg3 = _3;
	auto __ret = ((class ::AABB*)NativePtr)->clipCollide(__arg0, __arg1, _2, &__arg3);
	_3 = __arg3;
	auto ____ret = new class ::Vec3(__ret);
	return (____ret == nullptr) ? nullptr : gcnew ::MC::Vec3((class ::Vec3*)____ret, true);
}

MC::AABB^ MC::AABB::CloneAndExpandAlongDirection(MC::Vec3^ _0)
{
	if (ReferenceEquals(_0, nullptr))
		throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
	auto& __arg0 = *(class ::Vec3*)_0->NativePtr;
	auto __ret = ((class ::AABB*)NativePtr)->cloneAndExpandAlongDirection(__arg0);
	auto ____ret = new class ::AABB(__ret);
	return (____ret == nullptr) ? nullptr : gcnew ::MC::AABB((class ::AABB*)____ret, true);
}

MC::AABB^ MC::AABB::CloneAndFloor(float _0, float _1)
{
	auto __ret = ((class ::AABB*)NativePtr)->cloneAndFloor(_0, _1);
	auto ____ret = new class ::AABB(__ret);
	return (____ret == nullptr) ? nullptr : gcnew ::MC::AABB((class ::AABB*)____ret, true);
}

MC::AABB^ MC::AABB::CloneAndFloorMinAndCeilingMax()
{
	auto __ret = ((class ::AABB*)NativePtr)->cloneAndFloorMinAndCeilingMax();
	auto ____ret = new class ::AABB(__ret);
	return (____ret == nullptr) ? nullptr : gcnew ::MC::AABB((class ::AABB*)____ret, true);
}

MC::AABB^ MC::AABB::CloneAndGrow(MC::Vec3^ _0)
{
	if (ReferenceEquals(_0, nullptr))
		throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
	auto& __arg0 = *(class ::Vec3*)_0->NativePtr;
	auto __ret = ((class ::AABB*)NativePtr)->cloneAndGrow(__arg0);
	auto ____ret = new class ::AABB(__ret);
	return (____ret == nullptr) ? nullptr : gcnew ::MC::AABB((class ::AABB*)____ret, true);
}

MC::AABB^ MC::AABB::CloneAndShrink(MC::Vec3^ _0)
{
	if (ReferenceEquals(_0, nullptr))
		throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
	auto& __arg0 = *(class ::Vec3*)_0->NativePtr;
	auto __ret = ((class ::AABB*)NativePtr)->cloneAndShrink(__arg0);
	auto ____ret = new class ::AABB(__ret);
	return (____ret == nullptr) ? nullptr : gcnew ::MC::AABB((class ::AABB*)____ret, true);
}

bool MC::AABB::Contains(MC::Vec3^ _0)
{
	if (ReferenceEquals(_0, nullptr))
		throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
	auto& __arg0 = *(class ::Vec3*)_0->NativePtr;
	auto __ret = ((class ::AABB*)NativePtr)->contains(__arg0);
	return __ret;
}

float MC::AABB::DistanceTo(MC::AABB^ _0)
{
	if (ReferenceEquals(_0, nullptr))
		throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
	auto& __arg0 = *(class ::AABB*)_0->NativePtr;
	auto __ret = ((class ::AABB*)NativePtr)->distanceTo(__arg0);
	return __ret;
}

float MC::AABB::DistanceTo(MC::Vec3^ _0)
{
	if (ReferenceEquals(_0, nullptr))
		throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
	auto& __arg0 = *(class ::Vec3*)_0->NativePtr;
	auto __ret = ((class ::AABB*)NativePtr)->distanceTo(__arg0);
	return __ret;
}

bool MC::AABB::IntersectSegment(MC::Vec3^ _0, MC::Vec3^ _1, MC::Vec3^ _2, MC::Vec3^ _3)
{
	if (ReferenceEquals(_0, nullptr))
		throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
	auto& __arg0 = *(class ::Vec3*)_0->NativePtr;
	if (ReferenceEquals(_1, nullptr))
		throw gcnew ::System::ArgumentNullException("_1", "Cannot be null because it is a C++ reference (&).");
	auto& __arg1 = *(class ::Vec3*)_1->NativePtr;
	if (ReferenceEquals(_2, nullptr))
		throw gcnew ::System::ArgumentNullException("_2", "Cannot be null because it is a C++ reference (&).");
	auto& __arg2 = *(class ::Vec3*)_2->NativePtr;
	if (ReferenceEquals(_3, nullptr))
		throw gcnew ::System::ArgumentNullException("_3", "Cannot be null because it is a C++ reference (&).");
	auto& __arg3 = *(class ::Vec3*)_3->NativePtr;
	auto __ret = ((class ::AABB*)NativePtr)->intersectSegment(__arg0, __arg1, __arg2, __arg3);
	return __ret;
}

bool MC::AABB::Intersects(MC::AABB^ _0)
{
	if (ReferenceEquals(_0, nullptr))
		throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
	auto& __arg0 = *(class ::AABB*)_0->NativePtr;
	auto __ret = ((class ::AABB*)NativePtr)->intersects(__arg0);
	return __ret;
}

bool MC::AABB::Intersects(MC::Vec3^ _0, MC::Vec3^ _1)
{
	if (ReferenceEquals(_0, nullptr))
		throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
	auto& __arg0 = *(class ::Vec3*)_0->NativePtr;
	if (ReferenceEquals(_1, nullptr))
		throw gcnew ::System::ArgumentNullException("_1", "Cannot be null because it is a C++ reference (&).");
	auto& __arg1 = *(class ::Vec3*)_1->NativePtr;
	auto __ret = ((class ::AABB*)NativePtr)->intersects(__arg0, __arg1);
	return __ret;
}

bool MC::AABB::IntersectsInner(MC::AABB^ _0)
{
	if (ReferenceEquals(_0, nullptr))
		throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
	auto& __arg0 = *(class ::AABB*)_0->NativePtr;
	auto __ret = ((class ::AABB*)NativePtr)->intersectsInner(__arg0);
	return __ret;
}

bool MC::AABB::operator==(MC::AABB^ __op, MC::AABB^ _0)
{
	bool __opNull = ReferenceEquals(__op, nullptr);
	bool _0Null = ReferenceEquals(_0, nullptr);
	if (__opNull || _0Null)
		return __opNull && _0Null;
	auto& __arg0 = *(class ::AABB*)__op->NativePtr;
	auto& __arg1 = *(class ::AABB*)_0->NativePtr;
	auto __ret = __arg0 == __arg1;
	return __ret;
}

bool MC::AABB::Equals(::System::Object^ obj)
{
	return this == safe_cast<MC::AABB^>(obj);
}

MC::AABB^ MC::AABB::Set(float _0, float _1, float _2, float _3, float _4, float _5)
{
	auto& __ret = ((class ::AABB*)NativePtr)->set(_0, _1, _2, _3, _4, _5);
	return (MC::AABB^)((&__ret == nullptr) ? nullptr : gcnew ::MC::AABB((class ::AABB*) & __ret));
}

MC::AABB^ MC::AABB::Set(MC::AABB^ _0)
{
	if (ReferenceEquals(_0, nullptr))
		throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
	auto& __arg0 = *(class ::AABB*)_0->NativePtr;
	auto& __ret = ((class ::AABB*)NativePtr)->set(__arg0);
	return (MC::AABB^)((&__ret == nullptr) ? nullptr : gcnew ::MC::AABB((class ::AABB*) & __ret));
}

MC::AABB^ MC::AABB::Set(MC::Vec3^ _0, MC::Vec3^ _1)
{
	if (ReferenceEquals(_0, nullptr))
		throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
	auto& __arg0 = *(class ::Vec3*)_0->NativePtr;
	if (ReferenceEquals(_1, nullptr))
		throw gcnew ::System::ArgumentNullException("_1", "Cannot be null because it is a C++ reference (&).");
	auto& __arg1 = *(class ::Vec3*)_1->NativePtr;
	auto& __ret = ((class ::AABB*)NativePtr)->set(__arg0, __arg1);
	return (MC::AABB^)((&__ret == nullptr) ? nullptr : gcnew ::MC::AABB((class ::AABB*) & __ret));
}

MC::AABB^ MC::AABB::Shrink(MC::Vec3^ _0)
{
	if (ReferenceEquals(_0, nullptr))
		throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
	auto& __arg0 = *(class ::Vec3*)_0->NativePtr;
	auto& __ret = ((class ::AABB*)NativePtr)->shrink(__arg0);
	return (MC::AABB^)((&__ret == nullptr) ? nullptr : gcnew ::MC::AABB((class ::AABB*) & __ret));
}

MC::AABB^ MC::AABB::TranslateCenterTo(MC::Vec3^ _0)
{
	if (ReferenceEquals(_0, nullptr))
		throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
	auto& __arg0 = *(class ::Vec3*)_0->NativePtr;
	auto& __ret = ((class ::AABB*)NativePtr)->translateCenterTo(__arg0);
	return (MC::AABB^)((&__ret == nullptr) ? nullptr : gcnew ::MC::AABB((class ::AABB*) & __ret));
}

MC::AABB::AABB(MC::AABB^ _0)
{
	OwnsNativeInstance = true;
	if (ReferenceEquals(_0, nullptr))
		throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
	auto& __arg0 = *(class ::AABB*)_0->NativePtr;
	NativePtr = new class ::AABB(__arg0);
}

MC::Vec3^ MC::AABB::Bounds::get()
{
	auto __ret = ((class ::AABB*)NativePtr)->getBounds();
	auto ____ret = new class ::Vec3(__ret);
	return (____ret == nullptr) ? nullptr : gcnew ::MC::Vec3((class ::Vec3*)____ret, true);
}

MC::Vec3^ MC::AABB::Center::get()
{
	auto __ret = ((class ::AABB*)NativePtr)->getCenter();
	auto ____ret = new class ::Vec3(__ret);
	return (____ret == nullptr) ? nullptr : gcnew ::MC::Vec3((class ::Vec3*)____ret, true);
}

float MC::AABB::Size::get()
{
	auto __ret = ((class ::AABB*)NativePtr)->getSize();
	return __ret;
}

float MC::AABB::Volume::get()
{
	auto __ret = ((class ::AABB*)NativePtr)->getVolume();
	return __ret;
}

bool MC::AABB::HasZeroVolume::get()
{
	auto __ret = ((class ::AABB*)NativePtr)->hasZeroVolume();
	return __ret;
}

bool MC::AABB::IsValid::get()
{
	auto __ret = ((class ::AABB*)NativePtr)->isValid();
	return __ret;
}

MC::AABB^ MC::AABB::BLOCK_SHAPE::get()
{
	return (&::AABB::BLOCK_SHAPE == nullptr) ? nullptr : gcnew ::MC::AABB((class ::AABB*) & ::AABB::BLOCK_SHAPE);
}

MC::AABB^ MC::AABB::BOX_AT_ORIGIN_WITH_NO_VOLUME::get()
{
	return (&::AABB::BOX_AT_ORIGIN_WITH_NO_VOLUME == nullptr) ? nullptr : gcnew ::MC::AABB((class ::AABB*) & ::AABB::BOX_AT_ORIGIN_WITH_NO_VOLUME);
}

#endif // INCLUDE_MCAPI
