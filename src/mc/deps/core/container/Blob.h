#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class Blob {
public:
    using value_type      = std::uint8_t;
    using delete_function = void (*)(value_type*);
    using size_type       = std::size_t;
    using pointer         = value_type*;
    using const_pointer   = const value_type*;
    using iterator        = value_type*;
    using const_iterator  = const value_type*;

    struct Deleter {
        delete_function m_func;

        LLAPI Deleter() noexcept;
        LLAPI explicit Deleter(delete_function f) noexcept;
        LLAPI void operator()(value_type* p) const noexcept;
    };

    using pointer_type = std::unique_ptr<value_type[], Deleter>;

private:
    pointer_type mBlob;
    size_type    mSize{0};

private:
    static void defaultDeleter(value_type* p) noexcept;

public:
    LLNDAPI Blob() noexcept;
    LLNDAPI explicit Blob(size_type size);
    LLNDAPI Blob(const value_type* ptr, size_type size);
    LLNDAPI Blob(const Blob&);
    LLNDAPI Blob(Blob&&) noexcept;
    LLNDAPI Blob(pointer_type&& ptr, size_type size) noexcept;
    LLAPI ~Blob();
    LLAPI Blob& operator=(const Blob&);
    LLAPI Blob& operator=(Blob&& rhs) noexcept;

    LLNDAPI iterator       begin() noexcept;
    LLNDAPI iterator       end() noexcept;
    LLNDAPI const_iterator cbegin() const noexcept;
    LLNDAPI const_iterator cend() const noexcept;

    LLNDAPI bool          empty() const noexcept;
    LLNDAPI size_type     size() const noexcept;
    LLNDAPI size_type     max_size() const noexcept;
    LLNDAPI pointer       data() noexcept;
    LLNDAPI const_pointer data() const noexcept;
    LLNDAPI pointer       get() noexcept;
    LLNDAPI const_pointer get() const noexcept;
    LLNDAPI pointer_type  release() noexcept;

    LLNDAPI gsl::span<unsigned char> getSpan();
    LLNDAPI gsl::span<const unsigned char> getSpan() const;

    LLAPI void fillBlob(std::uint8_t val);
    LLAPI void swap(Blob& other) noexcept;
};

} // namespace mce