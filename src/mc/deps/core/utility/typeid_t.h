#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "ll/api/reflection/TypeName.h"
#include "ll/api/utils/HashUtils.h"

class CommandRegistry;

namespace Bedrock {
template <typename Category>
class typeid_t;
} // namespace Bedrock

namespace ll {

class type_id_ref {
public:
    void* ptr{};

    constexpr type_id_ref() noexcept = default;

    template <typename Category>
    constexpr explicit type_id_ref(Bedrock::typeid_t<Category>& id) noexcept : ptr(&id) {}

    template <typename Category>
    [[nodiscard]] Bedrock::typeid_t<Category>& get() const noexcept {
        return *static_cast<Bedrock::typeid_t<Category>*>(ptr);
    }
};

static_assert(sizeof(type_id_ref) == sizeof(void*));

} // namespace ll

namespace Bedrock {

template <typename Category>
class typeid_t {
public:
    ushort value{};
    [[nodiscard]] constexpr typeid_t(typeid_t const& other) : value(other.value) {}
    constexpr typeid_t& operator=(typeid_t const& other) {
        value = other.value;
        return *this;
    }

    [[nodiscard]] constexpr typeid_t(ushort value) : value(value) {}
    [[nodiscard]] constexpr typeid_t() = default;

    constexpr bool operator==(typeid_t const& other) const { return value == other.value; }

    static std::atomic_ushort& _getCounter() {

        // MCAPI // error C2201
        static std::atomic_ushort storage;

        return storage;
    }
};

template <>
LLAPI std::atomic_ushort& typeid_t<CommandRegistry>::_getCounter();

// if dll reload, typeid can't keep, so we need a static implementation
LLAPI ushort crtypidImpl(size_t type);

template <typename Category, typename Type>
ll::type_id_ref typeid_storage_impl() {
    static_assert(std::is_same_v<Category, CommandRegistry>);
    constexpr size_t          hash = ll::hash_utils::doHash(ll::reflection::type_raw_name_v<Type>);
    static typeid_t<Category> id{crtypidImpl(hash)};
    return ll::type_id_ref{id};
}

template <typename Category, typename Type>
typeid_t<Category> type_id() {
    if constexpr (std::is_same_v<Category, CommandRegistry>) {
        return typeid_storage_impl<Category, Type>().template get<Category>();
    } else {
        static typeid_t<Category> id{++typeid_t<Category>::_getCounter()};
        return id;
    }
} // namespace Bedrock

}; // namespace Bedrock
