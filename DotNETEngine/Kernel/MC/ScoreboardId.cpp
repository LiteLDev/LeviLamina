#include "../../Header/MC/ScoreboardId.hpp"
namespace MC
{
ScoreboardId::ScoreboardId()
{
    OwnsNativeInstance = true;
    NativePtr = new ::ScoreboardId;
}
inline __int64 ScoreboardId::Id::get()
{
    return NativePtr->id;
}
inline void ScoreboardId::Id::set(__int64 id)
{
    NativePtr->id = id;
}
inline System::IntPtr ScoreboardId::Null::get()
{
    return System::IntPtr(NativePtr->null);
}
inline void ScoreboardId::Null::set(System::IntPtr p)
{
    NativePtr->null = p.ToPointer();
}
} // namespace MC

MC::ScoreboardId::ScoreboardId(MC::ScoreboardId ^ _0)
{
    OwnsNativeInstance = true;
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(struct ::ScoreboardId*)_0->NativePtr;
    NativePtr = new struct ::ScoreboardId(__arg0);
}

int MC::ScoreboardId::GetHashCode()
{
    return (int)Hash;
}

MC::ScoreboardId::ScoreboardId(long long _0)
{
    OwnsNativeInstance = true;
    NativePtr = new struct ::ScoreboardId(_0);
}

bool MC::ScoreboardId::operator!=(MC::ScoreboardId ^ __op, MC::ScoreboardId ^ _0)
{
    bool __opNull = ReferenceEquals(__op, nullptr);
    bool _0Null = ReferenceEquals(_0, nullptr);
    if (__opNull || _0Null)
        return !(__opNull && _0Null);
    auto& __arg0 = *(struct ::ScoreboardId*)__op->NativePtr;
    auto& __arg1 = *(struct ::ScoreboardId*)_0->NativePtr;
    auto __ret = __arg0 != __arg1;
    return __ret;
}

bool MC::ScoreboardId::operator==(MC::ScoreboardId ^ __op, MC::ScoreboardId ^ _0)
{
    bool __opNull = ReferenceEquals(__op, nullptr);
    bool _0Null = ReferenceEquals(_0, nullptr);
    if (__opNull || _0Null)
        return __opNull && _0Null;
    auto& __arg0 = *(struct ::ScoreboardId*)__op->NativePtr;
    auto& __arg1 = *(struct ::ScoreboardId*)_0->NativePtr;
    auto __ret = __arg0 == __arg1;
    return __ret;
}

bool MC::ScoreboardId::Equals(::System::Object ^ obj)
{
    return this == safe_cast<MC::ScoreboardId ^>(obj);
}

MC::ScoreboardId::operator MC::ScoreboardId ^(long long _0) {
    auto __ret = (::ScoreboardId)_0;
    auto ____ret = new struct ::ScoreboardId(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::ScoreboardId((struct ::ScoreboardId*)____ret, true);
}

unsigned long long MC::ScoreboardId::Hash::get()
{
    auto __ret = ((struct ::ScoreboardId*)NativePtr)->getHash();
    return __ret;
}

bool MC::ScoreboardId::IsValid::get()
{
    auto __ret = ((struct ::ScoreboardId*)NativePtr)->isValid();
    return __ret;
}


#ifdef INCLUDE_MCAPI

#endif // INCLUDE_MCAPI
