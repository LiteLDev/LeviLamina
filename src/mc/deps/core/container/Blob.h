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
        Deleter() noexcept;
        explicit Deleter(delete_function f) noexcept;
        void operator()(value_type* p) const noexcept;
    };

    using pointer_type = std::unique_ptr<value_type[], Deleter>;

private:
    pointer_type mBlob;
    size_type    mSize{0};

public:
    Blob() noexcept;
    explicit Blob(size_type size);
    Blob(const value_type* ptr, size_type size);
    Blob(Blob&& rhs) noexcept;
    Blob(pointer_type&& ptr, size_type size) noexcept;
    ~Blob();

    Blob(const Blob&);
    Blob& operator=(const Blob&);
    Blob& operator=(Blob&& rhs) noexcept;

    iterator                     begin() noexcept;
    iterator                     end() noexcept;
    [[nodiscard]] const_iterator cbegin() const noexcept;
    [[nodiscard]] const_iterator cend() const noexcept;

    [[nodiscard]] bool          empty() const noexcept;
    [[nodiscard]] size_type     size() const noexcept;
    [[nodiscard]] size_type     max_size() const noexcept;
    pointer                     data() noexcept;
    [[nodiscard]] const_pointer data() const noexcept;
    pointer                     get() noexcept;
    [[nodiscard]] const_pointer get() const noexcept;

    gsl::span<unsigned char>                     getSpan();
    [[nodiscard]] gsl::span<const unsigned char> getSpan() const;

    void         fillBlob(std::uint8_t val);
    pointer_type release() noexcept;
    void         swap(Blob& other) noexcept;

private:
    static void defaultDeleter(value_type* p) noexcept;
};

} // namespace mce