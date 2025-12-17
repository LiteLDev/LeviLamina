#include "mc/deps/core/container/Blob.h"
#include "ll/api/memory/Memory.h"
#include "mc/deps/core/memory/DefaultAllocator.h"

using namespace mce;

Blob::Deleter::Deleter() noexcept : m_func(&Blob::defaultDeleter) {}
Blob::Deleter::Deleter(delete_function f) noexcept : m_func(f ? f : &Blob::defaultDeleter) {}
void Blob::Deleter::operator()(value_type* p) const noexcept {
    if (p && m_func) m_func(p);
}
Blob::Blob() noexcept : mBlob(nullptr, Deleter()), mSize(0) {}

Blob::Blob(size_type size) : mBlob(nullptr, Deleter()), mSize(size) {
    auto* alloc = &ll::memory::getDefaultAllocator();
    auto* buf   = static_cast<value_type*>(alloc->allocate(size));
    if (size && buf) std::memset(buf, 0, size);
    mBlob.reset(buf);
}

Blob::Blob(const value_type* ptr, size_type size) : Blob(size) {
    if (ptr && size) std::memmove(mBlob.get(), ptr, size);
}

Blob::Blob(Blob&& rhs) noexcept : mBlob(std::move(rhs.mBlob)), mSize(rhs.mSize) { rhs.mSize = 0; }

Blob::Blob(pointer_type&& ptr, size_type size) noexcept : mBlob(std::move(ptr)), mSize(size) {}

Blob::~Blob() = default;

Blob& Blob::operator=(Blob&& rhs) noexcept {
    if (this != &rhs) {
        if (auto p = mBlob.release()) {
            auto func = mBlob.get_deleter().m_func;
            if (func) func(p);
        }
        mBlob.get_deleter().m_func = rhs.mBlob.get_deleter().m_func;
        mBlob.reset(rhs.mBlob.release());
        mSize     = rhs.mSize;
        rhs.mSize = 0;
    }
    return *this;
}

Blob::Blob(const Blob& rhs) : mBlob(nullptr, Deleter()), mSize(rhs.mSize) {
    if (rhs.mSize) {
        auto* alloc = &ll::memory::getDefaultAllocator();
        auto* buf   = static_cast<value_type*>(alloc->allocate(rhs.mSize));
        if (!buf) throw std::bad_alloc();
        std::memcpy(buf, rhs.mBlob.get(), rhs.mSize);
        mBlob.reset(buf);
    }
}

Blob& Blob::operator=(const Blob& rhs) {
    if (this != &rhs) {
        Blob tmp(rhs);
        swap(tmp);
    }
    return *this;
}

Blob::iterator       Blob::begin() noexcept { return mBlob.get(); }
Blob::iterator       Blob::end() noexcept { return mBlob.get() + mSize; }
Blob::const_iterator Blob::cbegin() const noexcept { return mBlob.get(); }
Blob::const_iterator Blob::cend() const noexcept { return mBlob.get() + mSize; }

bool                Blob::empty() const noexcept { return mSize == 0; }
Blob::size_type     Blob::size() const noexcept { return mSize; }
Blob::size_type     Blob::max_size() const noexcept { return static_cast<size_type>(-1); }
Blob::pointer       Blob::data() noexcept { return mBlob.get(); }
Blob::const_pointer Blob::data() const noexcept { return mBlob.get(); }
Blob::pointer       Blob::get() noexcept { return mBlob.get(); }
Blob::const_pointer Blob::get() const noexcept { return mBlob.get(); }

gsl::span<unsigned char> Blob::getSpan() {
    auto* p = mBlob.get();
    auto  s = mSize;
    if ((s == static_cast<size_type>(-1)) || (!p && s)) throw std::logic_error("invalid span");
    return {p, s};
}

gsl::span<const unsigned char> Blob::getSpan() const {
    auto* p = mBlob.get();
    auto  s = mSize;
    if ((s == static_cast<size_type>(-1)) || (!p && s)) throw std::logic_error("invalid span");
    return {p, s};
}

void Blob::fillBlob(std::uint8_t val) {
    if (mSize) std::memset(mBlob.get(), val, mSize);
}

Blob::pointer_type Blob::release() noexcept {
    auto         func = mBlob.get_deleter().m_func;
    auto         ptr  = mBlob.release();
    pointer_type out(ptr, Deleter(func));
    mSize = 0;
    return out;
}

void Blob::swap(Blob& other) noexcept {
    std::swap(mBlob, other.mBlob);
    std::swap(mSize, other.mSize);
}

void Blob::defaultDeleter(value_type* p) noexcept {
    if (p) {
        auto* alloc = &ll::memory::getDefaultAllocator();
        alloc->release(p);
    }
}