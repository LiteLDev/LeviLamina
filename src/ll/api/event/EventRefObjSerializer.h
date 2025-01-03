#pragma once

#include "ll/api/reflection/TypeName.h"
#include "mc/nbt/CompoundTag.h"

namespace ll::event {
template <class T>
[[nodiscard]] inline ::CompoundTag serializeRefObj(T& obj) {
    return ::CompoundTag{
        {"_nullable_",                                                    false},
        { "_pointer_",                           (uintptr_t)std::addressof(obj)},
        {    "_type_", reflection::type_unprefix_name_v<std::remove_cvref_t<T>>},
        { "_isconst_",                                       std::is_const_v<T>},
    };
}
template <class T>
[[nodiscard]] inline ::CompoundTag serializePtrObj(T* ptr) {
    return ::CompoundTag{
        {"_nullable_",                                                     true},
        { "_pointer_",                                           (uintptr_t)ptr},
        {    "_type_", reflection::type_unprefix_name_v<std::remove_cvref_t<T>>},
        { "_isconst_",                                       std::is_const_v<T>},
    };
}
[[nodiscard]] inline bool isEventSerializedObj(::CompoundTag const& tag) {
    return tag.contains("_type_") && tag.contains("_pointer_");
}
[[nodiscard]] inline bool isEventSerializedObj(::CompoundTagVariant const& tag) {
    return tag.is_object() ? isEventSerializedObj(tag.get<::CompoundTag>()) : false;
}
} // namespace ll::event
