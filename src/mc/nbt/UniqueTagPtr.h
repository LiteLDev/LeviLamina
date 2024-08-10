#pragma once

#include "mc/nbt/Tag.h"

#include "ll/api/Expected.h"
#include "ll/api/base/Concepts.h"
#include "ll/api/base/Meta.h"

class ByteTag;
class ShortTag;
class IntTag;
class Int64Tag;
class FloatTag;
class DoubleTag;
class ByteArrayTag;
class StringTag;
class ListTag;
class CompoundTag;
class IntArrayTag;

class UniqueTagPtr {
    Tag* ptr{};


    using Types = ::ll::meta::TypeList<
        EndTag,
        ByteTag,
        ShortTag,
        IntTag,
        Int64Tag,
        FloatTag,
        DoubleTag,
        ByteArrayTag,
        StringTag,
        ListTag,
        CompoundTag,
        IntArrayTag>;

public:
    _CONSTEXPR23 UniqueTagPtr() noexcept {}

    _CONSTEXPR23 UniqueTagPtr(nullptr_t) noexcept {}

    _CONSTEXPR23 UniqueTagPtr& operator=(nullptr_t) noexcept {
        reset();
        return *this;
    }
    _CONSTEXPR23 explicit UniqueTagPtr(Tag* p) noexcept : ptr(p) {}

    _CONSTEXPR23 UniqueTagPtr(UniqueTagPtr&& r) noexcept : ptr(r.release()) {}

    _CONSTEXPR23 UniqueTagPtr(std::unique_ptr<Tag>&& ptr) noexcept : ptr(ptr.release()) {}

    _CONSTEXPR23 UniqueTagPtr& operator=(UniqueTagPtr&& r) noexcept {
        reset(r.release());
        return *this;
    }
    _CONSTEXPR23 UniqueTagPtr& operator=(std::unique_ptr<Tag>&& r) noexcept {
        reset(r.release());
        return *this;
    }
    _CONSTEXPR23 UniqueTagPtr(UniqueTagPtr const& r) : ptr(r ? (r -> copy().release()) : nullptr) {}

    _CONSTEXPR23 UniqueTagPtr& operator=(UniqueTagPtr const& r) {
        if (r && &r != this) ptr = r->copy().release();
        return *this;
    }
    _CONSTEXPR23 void swap(UniqueTagPtr& r) noexcept { std::swap(ptr, r.ptr); }

    _CONSTEXPR23 ~UniqueTagPtr() noexcept { delete ptr; }

    [[nodiscard]] _CONSTEXPR23 Tag& operator*() const noexcept { return *ptr; }

    [[nodiscard]] _CONSTEXPR23 Tag* operator->() const noexcept { return ptr; }

    [[nodiscard]] _CONSTEXPR23 Tag* get() const noexcept { return ptr; }

    _CONSTEXPR23 explicit operator bool() const noexcept { return static_cast<bool>(ptr); }

    _CONSTEXPR23 operator std::unique_ptr<Tag>() && noexcept { return std::unique_ptr<Tag>{release()}; }

    _CONSTEXPR23 operator std::unique_ptr<Tag>() const& noexcept { return ptr ? ptr->copy() : nullptr; }

    _CONSTEXPR23 Tag* release() noexcept { return std::exchange(ptr, nullptr); }

    _CONSTEXPR23 void reset(Tag* p = nullptr) noexcept {
        Tag* old = std::exchange(ptr, p);
        delete old;
    }

public:
    [[nodiscard]] std::unique_ptr<Tag> copy() const { return ptr ? ptr->copy() : nullptr; }

    [[nodiscard]] ::Tag::Type index() const { return ptr ? ptr->getId() : ::Tag::End; }
    [[nodiscard]] Tag::Type   getId() const noexcept { return index(); }

    [[nodiscard]] inline bool operator==(UniqueTagPtr const& r) const {
        return (ptr == r.get()) || (ptr && r && *ptr == *r);
    }
    template <std::derived_from<Tag> T>
    [[nodiscard]] bool hold() const noexcept {
        return ptr && (Types::index<T> == (size_t)getId());
    }
    [[nodiscard]] bool hold(::Tag::Type type) const noexcept { return ptr && (getId() == type); }

    // consistency with json
    [[nodiscard]] bool is_array() const noexcept { return hold(Tag::List); }
    [[nodiscard]] bool is_binary() const noexcept { return hold(Tag::ByteArray) || hold(Tag::IntArray); }
    [[nodiscard]] bool is_boolean() const noexcept { return hold(Tag::Byte); }
    [[nodiscard]] bool is_null() const noexcept { return hold(Tag::End); }
    [[nodiscard]] bool is_number_float() const noexcept { return hold(Tag::Float) || hold(Tag::Double); }
    [[nodiscard]] bool is_number_integer() const noexcept {
        return hold(Tag::Byte) || hold(Tag::Short) || hold(Tag::Int) || hold(Tag::Int64);
    }
    [[nodiscard]] bool is_object() const noexcept { return hold(Tag::Compound); }
    [[nodiscard]] bool is_string() const noexcept { return hold(Tag::String); }
    [[nodiscard]] bool is_number() const noexcept { return is_number_float() || is_number_integer(); }
    [[nodiscard]] bool is_primitive() const noexcept { return is_null() || is_string() || is_number() || is_binary(); }
    [[nodiscard]] bool is_structured() const noexcept { return is_array() || is_object(); }

    [[nodiscard]] std::string
    toSnbt(SnbtFormat snbtFormat = SnbtFormat::PrettyFilePrint, uchar indent = 4) const noexcept {
        return ptr ? ptr->toSnbt(snbtFormat, indent) : "";
    }
    template <std::derived_from<Tag> T>
    T& emplace() {
        reset(new T());
    }
    template <std::derived_from<Tag> T>
    [[nodiscard]] bool contains(std::string_view key) const noexcept {
        return contains(key, (Tag::Type)Types::index<T>);
    }

public:
    template <std::derived_from<Tag> T>
    [[nodiscard]] T& get() const;

    [[nodiscard]] bool   contains(std::string_view key) const noexcept;
    [[nodiscard]] bool   contains(std::string_view key, Tag::Type type) const noexcept;
    [[nodiscard]] size_t size() const noexcept;

    [[nodiscard]] operator std::string const&() const;
    [[nodiscard]] operator std::string&() &;
    [[nodiscard]] operator std::string&&() &&;
    [[nodiscard]] operator std::string_view() const;
};
